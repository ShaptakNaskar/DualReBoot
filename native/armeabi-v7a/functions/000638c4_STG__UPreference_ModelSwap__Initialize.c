/* 000638c4 | STG::UPreference_ModelSwap::Initialize */

/* STG::UPreference_ModelSwap::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_ModelSwap::Initialize
          (UPreference_ModelSwap *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,ulong param_5)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  *(ulong *)(this + 0x80) = param_5;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  iVar3 = DAT_00063a9c;
  iVar7 = *(int *)(this + 0x80);
  if (iVar7 != 0) {
    puVar2 = operator_new__(iVar7 * 0x1c + 8);
    iVar8 = *(int *)(iVar3 + 0x63a48);
    iVar3 = 0;
    puVar9 = puVar2 + 2;
    puVar2[1] = iVar7;
    *puVar2 = 0x1c;
    puVar6 = puVar2 + 3;
    do {
      iVar3 = iVar3 + 1;
      puVar6[-1] = iVar8 + 8;
      *(undefined4 **)((int)(puVar2 + 3) + (int)((int)puVar6 + (0xc - (int)puVar9))) = puVar6;
      *(undefined4 **)((int)puVar2 + (int)((int)puVar6 + (0x1c - (int)puVar9))) = puVar6;
      *(undefined1 *)puVar6 = 0;
      puVar6 = puVar6 + 7;
    } while (iVar3 != iVar7);
    *(undefined4 **)(this + 0x7c) = puVar9;
  }
  if (param_1 == *(ulong *)(this + 0x8c)) {
    if (param_1 != 0) {
      pvVar1 = *(void **)(this + 0x88);
      goto LAB_000639d8;
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
      pvVar1 = operator_new__(param_1 << 2);
      *(void **)(this + 0x88) = pvVar1;
LAB_000639d8:
      uVar5 = 0;
      do {
        *(undefined4 *)((int)pvVar1 + uVar5 * 4) = 0xffffffff;
        uVar5 = uVar5 + 1;
      } while (uVar5 < param_1);
    }
  }
  if (param_5 != *(ulong *)(this + 0x94)) {
    if (*(ulong *)(this + 0x94) != 0) {
      if (*(void **)(this + 0x90) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x90));
      }
      *(undefined4 *)(this + 0x90) = 0;
    }
    *(ulong *)(this + 0x94) = param_5;
    if (param_5 != 0) {
      pvVar1 = operator_new__(param_5 << 2);
      uVar4 = *(ulong *)(this + 0x9c);
      *(void **)(this + 0x90) = pvVar1;
      goto joined_r0x0006396c;
    }
  }
  uVar4 = *(ulong *)(this + 0x9c);
joined_r0x0006396c:
  if (param_5 == uVar4) {
    if (param_5 == 0) {
      return;
    }
    pvVar1 = *(void **)(this + 0x98);
  }
  else {
    if (uVar4 != 0) {
      if (*(void **)(this + 0x98) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x98));
      }
      *(undefined4 *)(this + 0x98) = 0;
    }
    *(ulong *)(this + 0x9c) = param_5;
    if (param_5 == 0) {
      return;
    }
    pvVar1 = operator_new__(param_5 << 2);
    *(void **)(this + 0x98) = pvVar1;
  }
  iVar3 = *(int *)(this + 0x90);
  uVar5 = 0;
  do {
    *(undefined4 *)(iVar3 + uVar5 * 4) = 0;
    *(undefined4 *)((int)pvVar1 + uVar5 * 4) = 0;
    uVar5 = uVar5 + 1;
  } while (uVar5 < param_5);
  return;
}

