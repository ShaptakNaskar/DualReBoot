/* 00047880 | STG::GEScene::IsAllocated */

/* STG::GEScene::IsAllocated() const */

undefined4 __thiscall STG::GEScene::IsAllocated(GEScene *this)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = FUN_0002e044();
  if ((this[0x77c] != (GEScene)0x0) && (uVar2 = 1, *(int *)(this + 0xa4) != 0)) {
    uVar3 = 0;
    while( true ) {
      cVar1 = GEModel::IsAllocated(*(GEModel **)(*(int *)(this + 0xb0) + uVar3 * 4));
      if (cVar1 == '\0') break;
      uVar3 = uVar3 + 1;
      if (*(uint *)(this + 0xa4) <= uVar3) {
        return 1;
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

