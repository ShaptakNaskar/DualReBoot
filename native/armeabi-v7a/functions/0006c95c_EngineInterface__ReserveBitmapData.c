/* 0006c95c | EngineInterface::ReserveBitmapData */

/* EngineInterface::ReserveBitmapData(unsigned long) */

void __thiscall EngineInterface::ReserveBitmapData(EngineInterface *this,ulong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  EngineBitmapData *this_00;
  
  uVar3 = *(uint *)(this + 0x14);
  if (uVar3 != 0) {
    uVar5 = 0;
    do {
      iVar2 = *(int *)(this + 0x10);
      iVar4 = uVar5 * 4;
      this_00 = *(EngineBitmapData **)(iVar2 + uVar5 * 4);
      uVar5 = uVar5 + 1;
      if (this_00 != (EngineBitmapData *)0x0) {
        EngineBitmapData::~EngineBitmapData(this_00);
        operator_delete(this_00);
        iVar2 = *(int *)(this + 0x10);
        uVar3 = *(uint *)(this + 0x14);
      }
      *(undefined4 *)(iVar2 + iVar4) = 0;
    } while (uVar5 < uVar3);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(ulong *)(this + 0x14) = param_1;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  if (param_1 == 0) {
    return;
  }
  puVar1 = operator_new__(param_1 << 2);
  iVar4 = *(int *)(this + 0x14);
  *(undefined4 **)(this + 0x10) = puVar1;
  if (iVar4 == 0) {
    return;
  }
  *puVar1 = 0;
  iVar2 = 1;
  if (iVar4 == 1) {
    return;
  }
  do {
    *(undefined4 *)(*(int *)(this + 0x10) + iVar2 * 4) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != iVar4);
  return;
}

