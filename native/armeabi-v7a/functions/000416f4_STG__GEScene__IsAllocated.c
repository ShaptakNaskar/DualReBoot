/* 000416f4 | STG::GEScene::IsAllocated */

/* STG::GEScene::IsAllocated() const */

undefined4 __thiscall STG::GEScene::IsAllocated(GEScene *this)

{
  int iVar1;
  uint uVar2;
  
  if (this[0x790] == (GEScene)0x0) {
    return 0;
  }
  if (*(int *)(this + 0xa4) != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      iVar1 = GEModel::IsAllocated(*(GEModel **)(*(int *)(this + 0xb0) + iVar1));
      if (iVar1 == 0) {
        return 0;
      }
    } while (uVar2 < *(uint *)(this + 0xa4));
    return 1;
  }
  return 1;
}

