/* 00072620 | STG::UPreference_ModelSwap::Initialize */

/* STG::UPreference_ModelSwap::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_ModelSwap::Initialize
          (UPreference_ModelSwap *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,ulong param_5)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int unaff_EBX;
  
  FUN_0002e044();
  *(ulong *)(this + 0x80) = param_5;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 != 0) {
    piVar7 = operator_new__(iVar2 * 0x1c + 4);
    piVar1 = piVar7 + 1;
    *piVar7 = iVar2;
    iVar4 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0xcbf);
    iVar8 = 0;
    piVar9 = piVar1;
    do {
      iVar8 = iVar8 + 1;
      *piVar9 = iVar4 + 8;
      *(int **)((int)piVar7 + (int)piVar9 + (0x18 - (int)piVar1)) = piVar9 + 1;
      *(int **)((int)piVar7 + (int)piVar9 + (0x1c - (int)piVar1)) = piVar9 + 1;
      *(undefined1 *)(piVar9 + 1) = 0;
      piVar9 = piVar9 + 7;
    } while (iVar8 != iVar2);
    *(int **)(this + 0x7c) = piVar1;
  }
  if (param_1 == *(ulong *)(this + 0x8c)) {
    if (param_1 != 0) {
      pvVar5 = *(void **)(this + 0x88);
      goto LAB_0007278b;
    }
  }
  else {
    if (*(ulong *)(this + 0x8c) != 0) {
      if (*(void **)(this + 0x88) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x88));
      }
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(ulong *)(this + 0x8c) = param_1;
    if (param_1 != 0) {
      pvVar5 = operator_new__(param_1 << 2);
      *(void **)(this + 0x88) = pvVar5;
LAB_0007278b:
      uVar6 = 0;
      while( true ) {
        *(undefined4 *)((int)pvVar5 + uVar6 * 4) = 0xffffffff;
        uVar6 = uVar6 + 1;
        if (param_1 <= uVar6) break;
        pvVar5 = *(void **)(this + 0x88);
      }
    }
  }
  if (param_5 == *(ulong *)(this + 0x94)) {
LAB_000726ed:
    uVar3 = *(ulong *)(this + 0x9c);
  }
  else {
    if (*(ulong *)(this + 0x94) != 0) {
      if (*(void **)(this + 0x90) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x90));
      }
      *(undefined4 *)(this + 0x90) = 0;
    }
    *(ulong *)(this + 0x94) = param_5;
    if (param_5 == 0) goto LAB_000726ed;
    pvVar5 = operator_new__(param_5 * 4);
    *(void **)(this + 0x90) = pvVar5;
    uVar3 = *(ulong *)(this + 0x9c);
  }
  if (param_5 == uVar3) {
    if (param_5 != 0) goto LAB_00072745;
  }
  else {
    if (uVar3 != 0) {
      if (*(void **)(this + 0x98) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x98));
      }
      *(undefined4 *)(this + 0x98) = 0;
    }
    *(ulong *)(this + 0x9c) = param_5;
    if (param_5 != 0) {
      pvVar5 = operator_new__(param_5 * 4);
      *(void **)(this + 0x98) = pvVar5;
LAB_00072745:
      uVar6 = 0;
      do {
        *(undefined4 *)(*(int *)(this + 0x90) + uVar6 * 4) = 0;
        *(undefined4 *)(*(int *)(this + 0x98) + uVar6 * 4) = 0;
        uVar6 = uVar6 + 1;
      } while (uVar6 < param_5);
      return;
    }
  }
  return;
}

