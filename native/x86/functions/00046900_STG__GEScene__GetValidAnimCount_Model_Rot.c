/* 00046900 | STG::GEScene::GetValidAnimCount_Model_Rot */

/* STG::GEScene::GetValidAnimCount_Model_Rot() const */

int __thiscall STG::GEScene::GetValidAnimCount_Model_Rot(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (*(int *)(this + 0x1e0) != 0) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(this + 0x1c0) + iVar3 * 0x100;
      if (((*(int *)(iVar1 + 0x14) != 0) || (*(int *)(iVar1 + 0x68) != 0)) ||
         (*(int *)(iVar1 + 0xbc) != 0)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != *(int *)(this + 0x1e0));
  }
  return iVar2;
}

