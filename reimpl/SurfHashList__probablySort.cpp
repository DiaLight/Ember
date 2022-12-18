//
// Created by DiaLight on 30.10.2022.
//
#include <dk2.h>
#include <reimpl.h>
#include <cstdio>
#include <dk2/surface.h>

typedef __int16 (__thiscall *SurfHashList_addSurfhAndPaint_t)(dk2::SurfHashList *this_, dk2::MyCESurfHandle *surfh, dk2::SurfHashListItem *item);
typedef dk2::SurfHashListItem **(__thiscall *SurfHashList_deleteItem_t)(dk2::SurfHashList *this_, dk2::SurfHashListItem *a2);
typedef int (__thiscall *SurfHashList__probablySort_t)(dk2::SurfHashList *this_);


int _do_dump_show = 6;
int _test_index = 0;
void SurfHashList_dump(dk2::SurfHashList *this_, dk2::SurfaceHolder *cur) {
  printf("%d first %08X\n", _test_index, this_->f70_holder_first);
  if(_do_dump_show > 0) {
    if(--_do_dump_show < 0) _do_dump_show = 0;
  }
  for (auto *ch = this_->f70_holder_first; ch; ch = ch->f14_next) {
    bool isTrg = ch == cur;
    if(ch->fC_ddsurf) {
      printf(" %08X %d %dx%d\n", ch, isTrg, ch->fC_ddsurf->f4_width, ch->fC_ddsurf->f8_height);
    } else {
      printf(" %08X %d null\n", ch, isTrg);
    }

    for(auto *sh = ch->f4_surfh_first; sh; sh = sh->f14_nextByHolder) {
      if(sh->f0_cesurf) {
        printf("  %08X %dx%d %08X %dx%d\n", sh, sh->f40_surfWidth8, sh->f41_surfHeight8,
               sh->f0_cesurf, sh->f0_cesurf->f4_width, sh->f0_cesurf->f8_height);
      } else {
        printf("  %08X %dx%d null\n", sh, sh->f40_surfWidth8, sh->f41_surfHeight8);
      }
    }
//      ch->f4_surfh->f0_cEngineSurf->f14_pixels
  }
}

SurfHashList_addSurfhAndPaint_t SurfHashList_addSurfhAndPaint = nullptr;
SurfHashList_deleteItem_t SurfHashList_deleteItem = nullptr;
SurfHashList__probablySort_t SurfHashList__probablySort_orig = nullptr;
int *pSurfHashList_sortTick = nullptr;
int *pg_ReductionLevel = nullptr;
dk2::MyDirectDraw *pmyDdCopy = nullptr;
int *psizeHashTable = nullptr;

/*
memset(sizeHashTable_257, 0xFFu, sizeof(sizeHashTable_257));
for (i = 0, count = 0x100; i < 5; ++i ) {
  if(count >= 0) memset32(sizeHashTable_257, i, count + 1);
  count >>= 1;
}
uint32_t sizeHashTable_257[] = {
  4,
  4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
  3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
*/
dk2::SurfHashListItem *SurfHashList_findHolder(dk2::SurfHashList *this_, dk2::MyCESurfHandle *surfh) {
  int x2_init = psizeHashTable[surfh->f40_surfWidth8];
  int y2_init = psizeHashTable[surfh->f41_surfHeight8];
  for (int k = 0; k < 5; ++k) {
    int x2 = x2_init - k;
    int y = y2_init - k;
    for (int j = 0; j <= k; ++j) {
      int x = x2_init - j;
      int y2 = y2_init - j;
      if (x2 >= 0 && y2 >= 0) {
        if (dk2::SurfHashListItem *item = this_->f0_arr5x5[x2][y2]) {
          return item;
        }
      }
      if (x2 >= 0 && y2 <= 0) break;
//      if (k <= x2_init && j >= y2_init) break;
      if (x >= 0 && y >= 0 && j != k) {
        if (dk2::SurfHashListItem *item = this_->f0_arr5x5[x][y]) {
          return item;
        }
      }
    }
  }
  return nullptr;
}

uint32_t MyCESurfHandle_getWeight(dk2::MyCESurfHandle *surfh) {
  if ((surfh->f3C_reductionLevel_andFlags & 0x10) != 0 ) return 4;
  int delta = *pSurfHashList_sortTick - surfh->f48_sortTick;
  switch(delta) {
    case 0: return 3;
    case 1: return 2;
  }
  return 1;
}
uint32_t SurfaceHolder_calcWeight(dk2::SurfaceHolder *holder) {
  uint32_t total = 0;
  uint32_t last = 0;
  for (dk2::MyCESurfHandle *f4_surfh = holder->f4_surfh_first; f4_surfh; f4_surfh = f4_surfh->f14_nextByHolder) {
    uint32_t bufSize = f4_surfh->f40_surfWidth8 * f4_surfh->f41_surfHeight8;
    uint32_t weight = MyCESurfHandle_getWeight(f4_surfh);
    last = total;
    total += weight * bufSize;
    if(total < last) {
      printf("overflow detected\n");
    }
  }
  return total;
}
dk2::SurfaceHolder *SurfHashList_findMinValue(dk2::SurfHashList *this_) {
  dk2::SurfaceHolder *minValueItem = this_->f70_holder_first;
  uint32_t minValue = 0x10000;
//  int minValue = MyCESurfHandle_calcWeight(minValueItem);
  for (dk2::SurfaceHolder *checkCur = this_->f70_holder_first; checkCur; checkCur = checkCur->f14_next) {
    uint32_t value = SurfaceHolder_calcWeight(checkCur);
//    if (value > 0x10000 ) {
//      printf("%d\n", value);
//    }
    if (value < minValue ) {
      minValue = value;
      minValueItem = checkCur;
    }
    if(value == 0) break;
  }
  return minValueItem;
}

int getReductionLevel(dk2::MyCESurfHandle *surfh) {
  return surfh->f3C_reductionLevel_andFlags & 7u;
}
dk2::MyCESurfHandle * getReductedSurfh(dk2::MyCESurfHandle *surfh) {
  int reductionLevel = *pg_ReductionLevel;
  dk2::MyCESurfHandle *reducted = surfh;
  while((reductionLevel > 0 || getReductionLevel(reducted) < pmyDdCopy->f24_reductionLevel) && reducted->f18_nextByReduction) {
    reducted = reducted->f18_nextByReduction;
    --reductionLevel;
  }
  return reducted;
}

void SurfaceHolder_detachAll(dk2::SurfaceHolder *cur) {
  for (dk2::MyCESurfHandle *j = cur->f4_surfh_first; j; j = cur->f4_surfh_first ) {
    cur->f4_surfh_first = j->f14_nextByHolder;
    j->f14_nextByHolder = nullptr;
    j->f4_holder_parent = nullptr;
  }
}
void SurfHashList_detachHolder(dk2::SurfHashList *this_, dk2::SurfaceHolder *cur) {
  dk2::SurfaceHolder *f10_prev = cur->f10_prev;
  if ( f10_prev ) {
    f10_prev->f14_next = cur->f14_next;
  } else {
    this_->f70_holder_first = cur->f14_next;
  }
  dk2::SurfaceHolder *f14_next = cur->f14_next;
  if ( f14_next )
    f14_next->f10_prev = cur->f10_prev;
  cur->f10_prev = nullptr;
  cur->f14_next = nullptr;
}
dk2::SurfaceHolder *SurfHashList_tickDetach(dk2::SurfHashList *this_, dk2::SurfaceHolder *&first) {
  dk2::SurfaceHolder *detached = nullptr;
  for(dk2::MyCESurfHandle *curSurfh = this_->f68_surfh_first; curSurfh; curSurfh = curSurfh->f10_nextByHashList) {
    while(true) {
      dk2::MyCESurfHandle *reducted = getReductedSurfh(curSurfh);
      curSurfh->f1C_curReduction = reducted;
      if (reducted->f4_holder_parent) break;
      if (dk2::SurfHashListItem *item = SurfHashList_findHolder(this_, reducted)) {
        SurfHashList_addSurfhAndPaint(this_, reducted, item);
        break;
      }
      dk2::SurfaceHolder *cur = SurfHashList_findMinValue(this_);
//      SurfHashList_dump(this_, cur);
      if(cur == nullptr) {
        break;  // fix
      }
      SurfaceHolder_detachAll(cur);
      SurfHashList_deleteItem(this_, cur->f18_hashItem_link);
      SurfHashList_detachHolder(this_, cur);

      // add to removed list
      if(detached == nullptr) first = cur;
      cur->f14_next = detached;
      detached = cur;
      // end add to removed list
    }
  }
  return detached;
}
dk2::SurfaceHolder *SurfHashList_detachAll(dk2::SurfHashList *this_) {
  dk2::SurfaceHolder *detached = nullptr;
  while(true) {
    dk2::SurfaceHolder *first;
    dk2::SurfaceHolder *last = SurfHashList_tickDetach(this_, first);
    if(last == nullptr) break;
    first->f14_next = detached;
    detached = last;
  }
  return detached;
}
void SurfHashList_clearFlags(dk2::SurfHashList *this_) {
  if (this_->f68_surfh_first) {
    dk2::MyCESurfHandle *v27;
    do {
      dk2::MyCESurfHandle *f68_surfh = this_->f68_surfh_first;
      f68_surfh->f3C_reductionLevel_andFlags &= ~0x10u;
      f68_surfh->f1C_curReduction->f3C_reductionLevel_andFlags &= ~8u;
      v27 = f68_surfh->f10_nextByHashList;
      this_->f68_surfh_first = v27;
    } while (v27);
  }
}
void SurfHashList_attachItem(dk2::SurfHashList *this_, dk2::SurfaceHolder *item) {
  if (dk2::SurfaceHolder *first = this_->f70_holder_first)
    first->f10_prev = item;
  item->f10_prev = nullptr;
  item->f14_next = this_->f70_holder_first;
  this_->f70_holder_first = item;
}
int __fastcall reimpl_SurfHashList__probablySort(dk2::SurfHashList *this_, void *edx) {
  dk2::SurfaceHolder *detached = SurfHashList_detachAll(this_);
  for (dk2::SurfaceHolder *cur = detached, *next; cur; cur = next) {
    next = cur->f14_next;
    SurfHashList_attachItem(this_, cur);
  }
  SurfHashList_clearFlags(this_);
  return ++(*pSurfHashList_sortTick);
}


int __cdecl CFrontEndComponent_static_onKeyboardActionWithCtrl(
    int keyCode,
    int isPressed,
    int controlKeyFlags,
    dk2::CFrontEndComponent *frontend
) {
  if(isPressed) {
    if(keyCode == DIK_N) {
      _do_dump_show = 2;
    }
  }
  return dk2::CFrontEndComponent::onKeyboardActionWithCtrl(keyCode, isPressed, controlKeyFlags, frontend);
}

bool reimpl::SurfHashList__probablySort() {
  if(!replaceXrefs(funptr<&dk2::CFrontEndComponent::onKeyboardActionWithCtrl>(), CFrontEndComponent_static_onKeyboardActionWithCtrl)) return false;
  pSurfHashList_sortTick = (int *) (dk2_base + (0x007932D8 - dk2_virtual_base));
  pg_ReductionLevel = (int *) (dk2_base + (0x007932DC - dk2_virtual_base));
  pmyDdCopy = (dk2::MyDirectDraw *) (dk2_base + (0x00792D68 - dk2_virtual_base));
  psizeHashTable = (int *) (dk2_base + (0x00792EC8 - dk2_virtual_base));
  SurfHashList_addSurfhAndPaint = (SurfHashList_addSurfhAndPaint_t) (dk2_base + (0x005941B0 - dk2_virtual_base));
  SurfHashList_deleteItem = (SurfHashList_deleteItem_t) (dk2_base + (0x00594790 - dk2_virtual_base));
  SurfHashList__probablySort_orig = (SurfHashList__probablySort_t) (dk2_base + (0x005948D0 - dk2_virtual_base));
  if(!replaceXrefs((uint8_t *) SurfHashList__probablySort_orig, reimpl_SurfHashList__probablySort)) return false;
  return true;
}
