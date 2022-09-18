//
// Created by DiaLight on 16.09.2022.
//

#ifndef EMBER_CITEMITERATOR_H
#define EMBER_CITEMITERATOR_H


class CItemIterator {
public:
  CItemIterator(IShellItem *psi) : _hr(SHGetIDListFromObject(psi, &_pidlFull)), _psfCur(NULL) {
    _Init();
  }

  ~CItemIterator() {
    CoTaskMemFree(_pidlFull);
    if (_psfCur) {
      _psfCur->Release();
      _psfCur = nullptr;
    }
  }

  bool MoveNext() {
    bool fMoreItems = false;
    if (SUCCEEDED(_hr)) {
      if (NULL == _pidlRel) {
        fMoreItems = true;
        _pidlRel = _pidlFull;   // First item - Might be empty if it is the desktop
      } else if (!ILIsEmpty(_pidlRel)) {
        PCUITEMID_CHILD pidlChild = (PCUITEMID_CHILD) _pidlRel;  // Save the current segment for binding
        _pidlRel = ILNext(_pidlRel);

        // If we are not at the end setup for the next iteration
        if (!ILIsEmpty(_pidlRel)) {
          const WORD cbSave = _pidlRel->mkid.cb;  // Avoid cloning for the child by truncating temporarily
          _pidlRel->mkid.cb = 0;                  // Make this a child

          IShellFolder *psfNew;
          _hr = _psfCur->BindToObject(pidlChild, NULL, IID_PPV_ARGS(&psfNew));
          if (SUCCEEDED(_hr)) {
            _psfCur->Release();
            _psfCur = psfNew;   // Transfer ownership
            fMoreItems = true;
          }

          _pidlRel->mkid.cb = cbSave; // Restore previous ID size
        }
      }
    }
    return fMoreItems;
  }

  HRESULT GetCurrent(REFIID riid, void **ppv) {
    *ppv = NULL;
    if (SUCCEEDED(_hr)) {
      // Create the childID by truncating _pidlRel temporarily
      PUIDLIST_RELATIVE pidlNext = ILNext(_pidlRel);
      const WORD cbSave = pidlNext->mkid.cb;  // Save old cb
      pidlNext->mkid.cb = 0;                  // Make _pidlRel a child

      _hr = SHCreateItemWithParent(NULL, _psfCur, (PCUITEMID_CHILD) _pidlRel, riid, ppv);

      pidlNext->mkid.cb = cbSave;             // Restore old cb
    }
    return _hr;
  }

  HRESULT GetResult() const { return _hr; }

  PCUIDLIST_RELATIVE GetRelativeIDList() const { return _pidlRel; }

private:
  void _Init() {
    _pidlRel = NULL;

    if (SUCCEEDED(_hr)) {
      _hr = SHGetDesktopFolder(&_psfCur);
    }
  }

  HRESULT _hr;
  PIDLIST_ABSOLUTE _pidlFull;
  PUIDLIST_RELATIVE _pidlRel;
  IShellFolder *_psfCur;
};

#endif //EMBER_CITEMITERATOR_H
