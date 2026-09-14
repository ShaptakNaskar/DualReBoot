/* 000438bc | STG::GEScene::IsAllocated */

/* STG::GEScene::IsAllocated() const */

undefined4 __thiscall STG::GEScene::IsAllocated(GEScene *this)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (this[0x790] != (GEScene)0x0) {
    if (*(int *)(this + 0xa4) == 0) {
      uVar2 = 1;
    }
    else {
      uVar3 = 0;
      while( true ) {
        iVar1 = GEModel::IsAllocated(*(GEModel **)(*(int *)(this + 0xb0) + uVar3 * 4));
        uVar3 = uVar3 + 1;
        uVar2 = 0;
        if (iVar1 == 0) break;
        if (*(uint *)(this + 0xa4) <= uVar3) {
          return 1;
        }
      }
    }
  }
  return uVar2;
}

