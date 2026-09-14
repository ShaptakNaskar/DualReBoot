/* 0007130c | EngineInterface::ReserveBitmapData */

/* EngineInterface::ReserveBitmapData(unsigned long) */

void __thiscall EngineInterface::ReserveBitmapData(EngineInterface *this,ulong param_1)

{
  void *pvVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  EngineBitmapData *this_00;
  
  uVar3 = *(uint *)(this + 0x14);
  if (uVar3 != 0) {
    uVar4 = 0;
    do {
      iVar2 = *(int *)(this + 0x10);
      iVar5 = uVar4 * 4;
      this_00 = *(EngineBitmapData **)(iVar2 + uVar4 * 4);
      uVar4 = uVar4 + 1;
      if (this_00 != (EngineBitmapData *)0x0) {
        EngineBitmapData::~EngineBitmapData(this_00);
        operator_delete(this_00);
        iVar2 = *(int *)(this + 0x10);
        uVar3 = *(uint *)(this + 0x14);
      }
      *(undefined4 *)(iVar2 + iVar5) = 0;
    } while (uVar4 < uVar3);
  }
  if (*(void **)(this + 0x10) != (void *)0x0) {
    operator_delete__(*(void **)(this + 0x10));
  }
  iVar5 = 0;
  *(undefined4 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = 0;
  *(ulong *)(this + 0x14) = param_1;
  if (param_1 != 0) {
    pvVar1 = operator_new__(param_1 << 2);
    iVar2 = *(int *)(this + 0x14);
    *(void **)(this + 0x10) = pvVar1;
    if (iVar2 != 0) {
      while( true ) {
        *(undefined4 *)((int)pvVar1 + iVar5 * 4) = 0;
        iVar5 = iVar5 + 1;
        if (iVar5 == iVar2) break;
        pvVar1 = *(void **)(this + 0x10);
      }
      return;
    }
  }
  return;
}

