/* 0006f934 | STG::UPreference_TextureGroup::Initialize */

/* STG::UPreference_TextureGroup::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_TextureGroup::Initialize
          (UPreference_TextureGroup *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,ulong param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int iVar4;
  ulong uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  *(ulong *)(this + 0x80) = param_5;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  iVar6 = *(int *)(this + 0x80);
  if (iVar6 != 0) {
    puVar1 = operator_new__(iVar6 * 0x1c + 8);
    iVar4 = 0;
    iVar8 = *(int *)(DAT_0006fabc + 0x6f9fc);
    *puVar1 = 0x1c;
    puVar1[1] = iVar6;
    puVar7 = puVar1 + 2;
    puVar2 = puVar1 + 3;
    do {
      iVar4 = iVar4 + 1;
      puVar2[-1] = iVar8 + 8;
      *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar2 + (0xc - (int)puVar7))) = puVar2;
      *(undefined4 **)((int)puVar1 + (int)((int)puVar2 + (0x1c - (int)puVar7))) = puVar2;
      *(undefined1 *)puVar2 = 0;
      puVar2 = puVar2 + 7;
    } while (iVar4 != iVar6);
    *(undefined4 **)(this + 0x7c) = puVar7;
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
      puVar2 = operator_new__(param_1 << 2);
      iVar6 = *(int *)(this + 0x8c);
      *(undefined4 **)(this + 0x88) = puVar2;
      if (iVar6 != 0) {
        iVar4 = 0;
        do {
          iVar4 = iVar4 + 1;
          *puVar2 = 0xffffffff;
          puVar2 = puVar2 + 1;
        } while (iVar4 != iVar6);
        uVar5 = *(ulong *)(this + 0x94);
        goto joined_r0x0006f9a4;
      }
    }
  }
  uVar5 = *(ulong *)(this + 0x94);
joined_r0x0006f9a4:
  if (param_1 != uVar5) {
    if (uVar5 != 0) {
      if (*(void **)(this + 0x90) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x90));
      }
      *(undefined4 *)(this + 0x90) = 0;
    }
    *(ulong *)(this + 0x94) = param_1;
    if (param_1 != 0) {
      pvVar3 = operator_new__(param_1 << 2);
      iVar6 = *(int *)(this + 0x94);
      *(void **)(this + 0x90) = pvVar3;
      if (iVar6 != 0) {
        iVar4 = 0;
        do {
          *(undefined4 *)(*(int *)(this + 0x90) + iVar4 * 4) = 0;
          iVar4 = iVar4 + 1;
        } while (iVar6 != iVar4);
        return;
      }
    }
  }
  return;
}

