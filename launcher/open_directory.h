//
// Created by DiaLight on 17.09.2022.
//

#ifndef EMBER_OPEN_DIRECTORY_H
#define EMBER_OPEN_DIRECTORY_H


HRESULT GetIDListName(IShellItem *psi, wchar_t *psz) {
  HRESULT hr = E_FAIL;
  CItemIterator itemIterator(psi);
  while (itemIterator.MoveNext()) {
    IShellItem2 *psi;
    hr = itemIterator.GetCurrent(IID_PPV_ARGS(&psi));
    if (SUCCEEDED(hr)) {
      PWSTR pszName;
      hr = psi->GetDisplayName(SIGDN_FILESYSPATH, &pszName);
      if (SUCCEEDED(hr)) {
        wcscpy(psz, pszName);
        CoTaskMemFree(pszName);
      }
      psi->Release();
    }
  }
  if(hr == SEC_E_OK) {
    hr = itemIterator.GetResult();
  }
  return hr;
}

bool openLocateDk2Dir(HWND hwndParent) {
  BROWSEINFOW bi = { 0 };

  bi.hwndOwner = hwndParent;
  bi.lpszTitle = L"Open Dungeon Keeper 2 directory";

  bi.ulFlags = BIF_NEWDIALOGSTYLE;
  LPITEMIDLIST pidl = SHBrowseForFolderW(&bi);
  if (pidl == nullptr) {
    DWORD dwStatus = CommDlgExtendedError();
    if(dwStatus != ERROR_SUCCESS) {
      showError("GetOpenFileNameW failed: %08X", dwStatus);
      return false;
    }
    return true;
  }
  bool succ = false;
  wchar_t szFileName[MAX_PATH];
  szFileName[0] = L'\0';
  if(SHGetPathFromIDListEx(pidl, szFileName, MAX_PATH, GPFIDL_DEFAULT)) {
    g_dk2Dir = szFileName;
    succ = true;
  }
  CoTaskMemFree(pidl);
  return succ;
}

bool openLocateDk2Dir2(HWND hwndParent) {
  IFileDialog *pfd;
  HRESULT hr;
  hr = CoCreateInstance(CLSID_FileOpenDialog, NULL, CLSCTX_INPROC_SERVER, IID_PPV_ARGS(&pfd));
  if (SUCCEEDED(hr)) {
    DWORD dwOptions;
    hr = pfd->GetOptions(&dwOptions);
    if (SUCCEEDED(hr)) {
      dwOptions &= ~FOS_ALLOWMULTISELECT;
      dwOptions |= FOS_PICKFOLDERS | FOS_FORCEFILESYSTEM | FOS_PATHMUSTEXIST;
      pfd->SetOptions(dwOptions);
    }
    hr = pfd->Show(hwndParent);
    if (SUCCEEDED(hr)) {
      IShellItem *psi;
      hr = pfd->GetResult(&psi);
      if (SUCCEEDED(hr)) {
        wchar_t szFileName[MAX_PATH];
        szFileName[0] = L'\0';
        hr = GetIDListName(psi, szFileName);
        g_dk2Dir = szFileName;
        psi->Release();
      }
    }
    pfd->Release();
  } else {
    return openLocateDk2Dir(hwndParent);
  }
  if(hr != SEC_E_OK) {
    printStatus("failed to open directory: %08X", hr);
    return false;
  }
  return true;
}

#endif //EMBER_OPEN_DIRECTORY_H
