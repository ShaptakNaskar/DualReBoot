/* 0003fcc4 | STG::GEScene::InitializeLogicObjects */

/* STG::GEScene::InitializeLogicObjects(unsigned long) */

void __thiscall STG::GEScene::InitializeLogicObjects(GEScene *this,ulong param_1)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != *(ulong *)(this + 0x5b4)) {
    if (*(ulong *)(this + 0x5b4) != 0) {
      if (*(void **)(this + 0x5b0) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x5b0));
      }
      *(undefined4 *)(this + 0x5b0) = 0;
    }
    *(ulong *)(this + 0x5b4) = param_1;
    if (param_1 != 0) {
      pvVar1 = operator_new__(param_1 << 2);
      iVar3 = *(int *)(this + 0x5b4);
      *(void **)(this + 0x5b0) = pvVar1;
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          *(undefined4 *)(*(int *)(this + 0x5b0) + iVar2 * 4) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 != iVar3);
      }
    }
  }
  if (param_1 != *(ulong *)(this + 0x5bc)) {
    if (*(ulong *)(this + 0x5bc) != 0) {
      if (*(void **)(this + 0x5b8) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x5b8));
      }
      *(undefined4 *)(this + 0x5b8) = 0;
    }
    *(ulong *)(this + 0x5bc) = param_1;
    if (param_1 != 0) {
      pvVar1 = operator_new__(param_1 << 2);
      iVar3 = *(int *)(this + 0x5bc);
      *(void **)(this + 0x5b8) = pvVar1;
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          *(undefined4 *)(*(int *)(this + 0x5b8) + iVar2 * 4) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar3 != iVar2);
        *(undefined4 *)(this + 0x5c0) = 0;
        return;
      }
    }
  }
  *(undefined4 *)(this + 0x5c0) = 0;
  return;
}

