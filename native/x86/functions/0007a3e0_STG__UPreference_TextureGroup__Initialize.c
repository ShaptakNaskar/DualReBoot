/* 0007a3e0 | STG::UPreference_TextureGroup::Initialize */

/* STG::UPreference_TextureGroup::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_TextureGroup::Initialize
          (UPreference_TextureGroup *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,ulong param_5)

{
  int *piVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  int *piVar5;
  void *pvVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  int unaff_EBX;
  uint uVar12;
  undefined4 *puVar13;
  int local_14;
  
  FUN_0002e044();
  *(ulong *)(this + 0x80) = param_5;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 != 0) {
    piVar5 = operator_new__(iVar2 * 0x1c + 4);
    piVar1 = piVar5 + 1;
    *piVar5 = iVar2;
    iVar7 = *(int *)(
                    "_ZNK3STG11UPreferenceINS_11GETimeOfDay6EPhaseELb1EE12IsValueValidERKNS_11UStringBaseIciEE"
                    + unaff_EBX + 0x4c);
    local_14 = 0;
    piVar10 = piVar1;
    do {
      *piVar10 = iVar7 + 8;
      local_14 = local_14 + 1;
      *(int **)((int)piVar5 + (int)piVar10 + (0x18 - (int)piVar1)) = piVar10 + 1;
      *(int **)((int)piVar5 + (int)piVar10 + (0x1c - (int)piVar1)) = piVar10 + 1;
      *(undefined1 *)(piVar10 + 1) = 0;
      piVar10 = piVar10 + 7;
    } while (local_14 != iVar2);
    *(int **)(this + 0x7c) = piVar1;
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
      pvVar6 = operator_new__(param_1 << 2);
      uVar4 = *(uint *)(this + 0x8c);
      *(void **)(this + 0x88) = pvVar6;
      if (uVar4 != 0) {
        uVar8 = -(((uint)pvVar6 & 0xf) >> 2) & 3;
        if (uVar4 < uVar8) {
          uVar8 = uVar4;
        }
        uVar11 = 0;
        if (uVar8 != 0) {
          do {
            *(undefined4 *)((int)pvVar6 + uVar11 * 4) = 0xffffffff;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar8);
          if (uVar8 == uVar4) goto LAB_0007a46f;
        }
        uVar12 = uVar4 - uVar8 >> 2;
        if (uVar12 != 0) {
          puVar13 = (undefined4 *)((int)pvVar6 + uVar8 * 4);
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 1;
            *puVar13 = 0xffffffff;
            puVar13[1] = 0xffffffff;
            puVar13[2] = 0xffffffff;
            puVar13[3] = 0xffffffff;
            puVar13 = puVar13 + 4;
          } while (uVar9 < uVar12);
          uVar11 = uVar11 + uVar12 * 4;
          if (uVar4 - uVar8 == uVar12 * 4) goto LAB_0007a46f;
        }
        do {
          *(undefined4 *)((int)pvVar6 + uVar11 * 4) = 0xffffffff;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar4);
        uVar3 = *(ulong *)(this + 0x94);
        goto joined_r0x0007a478;
      }
    }
  }
LAB_0007a46f:
  uVar3 = *(ulong *)(this + 0x94);
joined_r0x0007a478:
  if (param_1 != uVar3) {
    if (uVar3 != 0) {
      if (*(void **)(this + 0x90) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x90));
      }
      *(undefined4 *)(this + 0x90) = 0;
    }
    *(ulong *)(this + 0x94) = param_1;
    if (param_1 != 0) {
      pvVar6 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 0x94);
      *(void **)(this + 0x90) = pvVar6;
      if (iVar2 != 0) {
        iVar7 = 0;
        do {
          *(undefined4 *)(*(int *)(this + 0x90) + iVar7 * 4) = 0;
          iVar7 = iVar7 + 1;
        } while (iVar2 != iVar7);
        return;
      }
    }
  }
  return;
}

