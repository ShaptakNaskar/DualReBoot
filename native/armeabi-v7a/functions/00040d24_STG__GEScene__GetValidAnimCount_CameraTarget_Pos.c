/* 00040d24 | STG::GEScene::GetValidAnimCount_CameraTarget_Pos */

/* STG::GEScene::GetValidAnimCount_CameraTarget_Pos() const */

int __thiscall STG::GEScene::GetValidAnimCount_CameraTarget_Pos(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(this + 0x1e8) == 0) {
    iVar1 = 0;
  }
  else {
    iVar3 = 0;
    iVar2 = 0;
    iVar1 = 0;
    do {
      iVar4 = *(int *)(this + 0x1c8) + iVar3;
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x110;
      if (((*(int *)(iVar4 + 0x14) != 0) || (*(int *)(iVar4 + 0x6c) != 0)) ||
         (*(int *)(iVar4 + 0xc4) != 0)) {
        iVar1 = iVar1 + 1;
      }
    } while (iVar2 != *(int *)(this + 0x1e8));
  }
  return iVar1;
}

