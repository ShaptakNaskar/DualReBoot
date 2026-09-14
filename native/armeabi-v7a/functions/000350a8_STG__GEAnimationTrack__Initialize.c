/* 000350a8 | STG::GEAnimationTrack::Initialize */

/* STG::GEAnimationTrack::Initialize(float, unsigned long, STG::UTimeValue<unsigned long long, 1ul>
   const&, STG::UTimeValue<unsigned long long, 1ul> const&, STG::GEAnimationTimeData::EDriver,
   STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GEAnimationTrack::Initialize
          (undefined4 param_1,GEAnimationTrack *this,int param_2,uint *param_3,uint *param_4,
          undefined4 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *pvVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  
  uVar8 = *param_3;
  uVar9 = param_3[1];
  *(undefined4 *)this = param_1;
  *(uint *)(this + 0x28) = uVar8;
  *(uint *)(this + 0x2c) = uVar9;
  uVar2 = *param_4;
  uVar6 = param_4[1];
  *(uint *)(this + 0x38) = uVar2 - uVar8;
  *(uint *)(this + 0x3c) = uVar6 - (uVar9 + (uVar2 < uVar8));
  *(uint *)(this + 0x30) = uVar2;
  *(uint *)(this + 0x34) = uVar6;
  uVar7 = param_7[1];
  *(undefined4 *)(this + 8) = *param_7;
  *(undefined4 *)(this + 0xc) = uVar7;
  *(undefined4 *)(this + 4) = param_6;
  if (param_2 != *(int *)(this + 0x14)) {
    if (*(int *)(this + 0x14) != 0) {
      if (*(void **)(this + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(int *)(this + 0x14) = param_2;
    if (param_2 != 0) {
      puVar3 = operator_new__(param_2 << 6);
      iVar4 = 0;
      puVar10 = puVar3;
      puVar1 = puVar3;
      do {
        iVar4 = iVar4 + 1;
        puVar1[8] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar10[2] = 0;
        puVar10[3] = 0;
        puVar1[9] = 0;
        puVar10[4] = 0;
        puVar10[5] = 0;
        puVar1[10] = 0;
        puVar10[6] = 0;
        puVar10[7] = 0;
        puVar1[0xb] = 0;
        puVar10[0xc] = 0;
        puVar10[0xd] = 0;
        puVar1[0xe] = 0x3f800000;
        puVar10 = puVar10 + 0x10;
        puVar1 = puVar1 + 0x10;
      } while (iVar4 != param_2);
      *(undefined4 **)(this + 0x10) = puVar3;
    }
  }
  if (param_2 != *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = param_2;
    if (param_2 != 0) {
      pvVar5 = operator_new__(param_2 << 3);
      *(void **)(this + 0x18) = pvVar5;
    }
  }
  if (param_2 != *(int *)(this + 0x24)) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = param_2;
    if (param_2 != 0) {
      pvVar5 = operator_new__(param_2 << 3);
      *(void **)(this + 0x20) = pvVar5;
    }
  }
  return;
}

