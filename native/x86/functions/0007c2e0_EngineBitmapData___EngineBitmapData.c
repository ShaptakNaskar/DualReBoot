/* 0007c2e0 | EngineBitmapData::~EngineBitmapData */

/* EngineBitmapData::~EngineBitmapData() */

void __thiscall EngineBitmapData::~EngineBitmapData(EngineBitmapData *this)

{
  int iVar1;
  EngineBitmapData *pEVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  if (*(void **)(this + 0x1c) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x1c));
  }
  iVar1 = *(int *)("_ZTSN3STG16LLogicObjectBaseINS_18LLogicSceneWrapperEEE" + unaff_EBX + 0x25);
  *(undefined4 *)(this + 0x1c) = 0;
  *(int *)this = iVar1 + 8;
  pEVar2 = *(EngineBitmapData **)(this + 0x18);
  if ((pEVar2 != this + 4) && (pEVar2 != (EngineBitmapData *)0x0)) {
    if (0x80 < (uint)(*(int *)(this + 4) - (int)pEVar2)) {
      operator_delete(pEVar2);
      return;
    }
    std::__node_alloc::_M_deallocate(pEVar2,*(int *)(this + 4) - (int)pEVar2);
  }
  return;
}

