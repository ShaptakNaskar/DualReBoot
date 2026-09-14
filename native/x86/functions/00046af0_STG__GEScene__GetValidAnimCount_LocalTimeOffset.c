/* 00046af0 | STG::GEScene::GetValidAnimCount_LocalTimeOffset */

/* STG::GEScene::GetValidAnimCount_LocalTimeOffset() const */

int __thiscall STG::GEScene::GetValidAnimCount_LocalTimeOffset(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(this + 0x1f8) != 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(this + 0x1d8) + 0x14 + iVar2) != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x58;
    } while (iVar3 != *(int *)(this + 0x1f8));
  }
  return iVar1;
}

