/* 0007c4e0 | EngineInterface::ReserveBitmapData */

/* EngineInterface::ReserveBitmapData(unsigned long) */

void __thiscall EngineInterface::ReserveBitmapData(EngineInterface *this,ulong param_1)

{
  EngineBitmapData *this_00;
  int iVar1;
  undefined4 *puVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  FUN_0002e044();
  uVar4 = *(uint *)(this + 0x14);
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      puVar2 = (undefined4 *)(*(int *)(this + 0x10) + uVar6 * 4);
      this_00 = (EngineBitmapData *)*puVar2;
      if (this_00 != (EngineBitmapData *)0x0) {
        EngineBitmapData::~EngineBitmapData(this_00);
        operator_delete(this_00);
        uVar4 = *(uint *)(this + 0x14);
        puVar2 = (undefined4 *)(*(int *)(this + 0x10) + uVar6 * 4);
      }
      uVar6 = uVar6 + 1;
      *puVar2 = 0;
    } while (uVar6 < uVar4);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x14) = param_1;
  if (param_1 != 0) {
    pvVar3 = operator_new__(param_1 << 2);
    iVar1 = *(int *)(this + 0x14);
    *(void **)(this + 0x10) = pvVar3;
    if (iVar1 != 0) {
      iVar5 = 0;
      while( true ) {
        *(undefined4 *)((int)pvVar3 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
        if (iVar5 == iVar1) break;
        pvVar3 = *(void **)(this + 0x10);
      }
      return;
    }
  }
  return;
}

