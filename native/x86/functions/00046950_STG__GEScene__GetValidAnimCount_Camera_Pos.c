/* 00046950 | STG::GEScene::GetValidAnimCount_Camera_Pos */

/* STG::GEScene::GetValidAnimCount_Camera_Pos() const */

int __thiscall STG::GEScene::GetValidAnimCount_Camera_Pos(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(this + 0x1e4) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(this + 0x1c4) + iVar3 * 0x100;
      if (((*(int *)(iVar1 + 0x14) != 0) || (*(int *)(iVar1 + 0x68) != 0)) ||
         (*(int *)(iVar1 + 0xbc) != 0)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(this + 0x1e4));
  }
  return iVar2;
}

