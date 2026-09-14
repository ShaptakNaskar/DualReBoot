/* 0006af00 | STG::UPreference_TextureGroup::Initialize */

/* STG::UPreference_TextureGroup::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_TextureGroup::Initialize
          (UPreference_TextureGroup *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,ulong param_5)

{
  void *pvVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 extraout_r2;
  undefined4 uVar4;
  ulong uVar5;
  int iVar6;
  int extraout_r3;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  
  *(ulong *)(this + 0x80) = param_5;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  iVar6 = DAT_0006b088;
  iVar7 = *(int *)(this + 0x80);
  if (iVar7 != 0) {
    puVar2 = operator_new__(iVar7 * 0x1c + 8);
    iVar8 = *(int *)(iVar6 + 0x6aff4);
    iVar6 = 0;
    puVar9 = puVar2 + 2;
    puVar2[1] = iVar7;
    *puVar2 = 0x1c;
    puVar3 = puVar2 + 3;
    do {
      iVar6 = iVar6 + 1;
      puVar3[-1] = iVar8 + 8;
      *(undefined4 **)((int)(puVar2 + 3) + (int)((int)puVar3 + (0xc - (int)puVar9))) = puVar3;
      *(undefined4 **)((int)puVar2 + (int)((int)puVar3 + (0x1c - (int)puVar9))) = puVar3;
      *(undefined1 *)puVar3 = 0;
      puVar3 = puVar3 + 7;
    } while (iVar6 != iVar7);
    *(undefined4 **)(this + 0x7c) = puVar9;
  }
  if (param_1 != *(ulong *)(this + 0x8c)) {
    if (*(ulong *)(this + 0x8c) != 0) {
      if (*(void **)(this + 0x88) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x88));
      }
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(ulong *)(this + 0x8c) = param_1;
    if (param_1 != 0) {
      puVar3 = operator_new__(param_1 << 2);
      iVar7 = *(int *)(this + 0x8c);
      uVar4 = extraout_r2;
      iVar6 = extraout_r3;
      if (iVar7 != 0) {
        iVar6 = 0;
        uVar4 = 0xffffffff;
      }
      *(undefined4 **)(this + 0x88) = puVar3;
      if (iVar7 != 0) {
        do {
          iVar6 = iVar6 + 1;
          *puVar3 = uVar4;
          puVar3 = puVar3 + 1;
        } while (iVar6 != iVar7);
        uVar5 = *(ulong *)(this + 0x94);
        if (param_1 == uVar5) {
          return;
        }
        goto LAB_0006af74;
      }
    }
  }
  uVar5 = *(ulong *)(this + 0x94);
  if (param_1 == uVar5) {
    return;
  }
LAB_0006af74:
  if (uVar5 != 0) {
    if (*(void **)(this + 0x90) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x90));
    }
    *(undefined4 *)(this + 0x90) = 0;
  }
  *(ulong *)(this + 0x94) = param_1;
  if (param_1 == 0) {
    return;
  }
  pvVar1 = operator_new__(param_1 << 2);
  iVar6 = *(int *)(this + 0x94);
  *(void **)(this + 0x90) = pvVar1;
  if (iVar6 == 0) {
    return;
  }
  iVar7 = 0;
  do {
    *(undefined4 *)(*(int *)(this + 0x90) + iVar7 * 4) = 0;
    iVar7 = iVar7 + 1;
  } while (iVar6 != iVar7);
  return;
}

