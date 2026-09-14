/* 00046a50 | STG::GEScene::GetValidAnimCount_Interact */

/* STG::GEScene::GetValidAnimCount_Interact() const */

int __thiscall STG::GEScene::GetValidAnimCount_Interact(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = 0;
  if (*(int *)(this + 0x1f0) != 0) {
    iVar3 = 0;
    iVar4 = 0;
    do {
      iVar1 = *(int *)(this + 0x1d0) + iVar4;
      if ((((*(int *)(iVar1 + 0x14) != 0) || (*(int *)(iVar1 + 0x68) != 0)) ||
          (*(int *)(iVar1 + 0xbc) != 0)) || (*(int *)(iVar1 + 0x110) != 0)) {
        iVar2 = iVar2 + 1;
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x154;
    } while (iVar3 != *(int *)(this + 0x1f0));
  }
  return iVar2;
}

