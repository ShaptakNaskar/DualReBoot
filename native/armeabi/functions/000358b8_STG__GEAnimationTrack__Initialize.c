/* 000358b8 | STG::GEAnimationTrack::Initialize */

/* STG::GEAnimationTrack::Initialize(float, unsigned long, STG::UTimeValue<unsigned long long, 1ul>
   const&, STG::UTimeValue<unsigned long long, 1ul> const&, STG::GEAnimationTimeData::EDriver,
   STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GEAnimationTrack::Initialize
          (GEAnimationTrack *this,undefined4 param_2,int param_3,uint *param_4,uint *param_5,
          undefined4 param_6,undefined4 *param_7)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  
  uVar5 = *param_4;
  uVar6 = param_4[1];
  *(uint *)(this + 0x28) = uVar5;
  *(uint *)(this + 0x2c) = uVar6;
  uVar7 = *param_5;
  uVar9 = param_5[1];
  *(uint *)(this + 0x38) = uVar7 - uVar5;
  *(uint *)(this + 0x3c) = uVar9 - (uVar6 + (uVar7 < uVar5));
  *(uint *)(this + 0x30) = uVar7;
  *(uint *)(this + 0x34) = uVar9;
  uVar8 = *param_7;
  uVar10 = param_7[1];
  *(undefined4 *)this = param_2;
  *(undefined4 *)(this + 8) = uVar8;
  *(undefined4 *)(this + 0xc) = uVar10;
  *(undefined4 *)(this + 4) = param_6;
  if (param_3 != *(int *)(this + 0x14)) {
    if (*(int *)(this + 0x14) != 0) {
      if (*(void **)(this + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(int *)(this + 0x14) = param_3;
    if (param_3 != 0) {
      puVar1 = operator_new__(param_3 << 6);
      iVar2 = 0;
      puVar4 = puVar1;
      do {
        iVar2 = iVar2 + 1;
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[8] = 0;
        puVar4[2] = 0;
        puVar4[3] = 0;
        puVar4[9] = 0;
        puVar4[4] = 0;
        puVar4[5] = 0;
        puVar4[10] = 0;
        puVar4[6] = 0;
        puVar4[7] = 0;
        puVar4[0xb] = 0;
        puVar4[0xc] = 0;
        puVar4[0xd] = 0;
        puVar4[0xe] = 0x3f800000;
        puVar4 = puVar4 + 0x10;
      } while (iVar2 != param_3);
      *(undefined4 **)(this + 0x10) = puVar1;
    }
  }
  if (param_3 != *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = param_3;
    if (param_3 != 0) {
      pvVar3 = operator_new__(param_3 << 3);
      *(void **)(this + 0x18) = pvVar3;
    }
  }
  if (param_3 != *(int *)(this + 0x24)) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = param_3;
    if (param_3 != 0) {
      pvVar3 = operator_new__(param_3 << 3);
      *(void **)(this + 0x20) = pvVar3;
      return;
    }
  }
  return;
}

