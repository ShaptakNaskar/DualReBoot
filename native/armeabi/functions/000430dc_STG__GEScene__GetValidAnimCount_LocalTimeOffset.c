/* 000430dc | STG::GEScene::GetValidAnimCount_LocalTimeOffset */

/* STG::GEScene::GetValidAnimCount_LocalTimeOffset() const */

int __thiscall STG::GEScene::GetValidAnimCount_LocalTimeOffset(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0x1f8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar4 = 0;
    iVar3 = 0;
    iVar1 = 0;
    do {
      iVar2 = *(int *)(this + 0x1d8) + iVar4;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x60;
      if (*(int *)(iVar2 + 0x14) != 0) {
        iVar1 = iVar1 + 1;
      }
    } while (iVar3 != *(int *)(this + 0x1f8));
  }
  return iVar1;
}

