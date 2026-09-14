/* 00044f60 | STG::GEScene::InitializeLogicObjects */

/* STG::GEScene::InitializeLogicObjects(unsigned long) */

void __thiscall STG::GEScene::InitializeLogicObjects(GEScene *this,ulong param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  
  FUN_0002e044();
  if (param_1 != *(ulong *)(this + 0x5a0)) {
    if (*(ulong *)(this + 0x5a0) != 0) {
      if (*(void **)(this + 0x59c) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x59c));
      }
      *(undefined4 *)(this + 0x59c) = 0;
    }
    *(ulong *)(this + 0x5a0) = param_1;
    if (param_1 != 0) {
      pvVar2 = operator_new__(param_1 * 4);
      iVar1 = *(int *)(this + 0x5a0);
      *(void **)(this + 0x59c) = pvVar2;
      if (iVar1 != 0) {
        iVar3 = 0;
        do {
          *(undefined4 *)(*(int *)(this + 0x59c) + iVar3 * 4) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 != iVar1);
      }
    }
  }
  if (param_1 != *(ulong *)(this + 0x5a8)) {
    if (*(ulong *)(this + 0x5a8) != 0) {
      if (*(void **)(this + 0x5a4) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x5a4));
      }
      *(undefined4 *)(this + 0x5a4) = 0;
    }
    *(ulong *)(this + 0x5a8) = param_1;
    if (param_1 != 0) {
      pvVar2 = operator_new__(param_1 << 2);
      iVar1 = *(int *)(this + 0x5a8);
      *(void **)(this + 0x5a4) = pvVar2;
      if (iVar1 != 0) {
        iVar3 = 0;
        do {
          *(undefined4 *)(*(int *)(this + 0x5a4) + iVar3 * 4) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar1 != iVar3);
      }
    }
  }
  *(undefined4 *)(this + 0x5ac) = 0;
  return;
}

