/* 00046ab0 | STG::GEScene::GetValidAnimCount_Visibility */

/* STG::GEScene::GetValidAnimCount_Visibility() const */

int __thiscall STG::GEScene::GetValidAnimCount_Visibility(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  if (*(int *)(this + 500) != 0) {
    iVar2 = 0;
    iVar3 = 0;
    do {
      if (*(int *)(*(int *)(this + 0x1d4) + 0x14 + iVar2) != 0) {
        iVar1 = iVar1 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x58;
    } while (iVar3 != *(int *)(this + 500));
  }
  return iVar1;
}

