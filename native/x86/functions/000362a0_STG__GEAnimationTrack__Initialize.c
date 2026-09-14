/* 000362a0 | STG::GEAnimationTrack::Initialize */

/* STG::GEAnimationTrack::Initialize(float, unsigned long, STG::UTimeValue<unsigned long long, 1ul>
   const&, STG::UTimeValue<unsigned long long, 1ul> const&, STG::GEAnimationTimeData::EDriver,
   STG::UTimeValue<unsigned long long, 1ul> const&) */

void __thiscall
STG::GEAnimationTrack::Initialize
          (GEAnimationTrack *this,undefined4 param_1,int param_2,uint *param_3,uint *param_4,
          undefined4 param_6,undefined4 *param_7)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *pvVar8;
  int local_24;
  
  FUN_0002e044();
  *(undefined4 *)this = param_1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *(uint *)(this + 0x28) = uVar1;
  *(uint *)(this + 0x2c) = uVar2;
  uVar3 = param_4[1];
  uVar4 = *param_4;
  *(uint *)(this + 0x30) = uVar4;
  *(uint *)(this + 0x38) = uVar4 - uVar1;
  *(undefined4 *)(this + 4) = param_6;
  *(uint *)(this + 0x34) = uVar3;
  *(uint *)(this + 0x3c) = (uVar3 - uVar2) - (uint)(uVar4 < uVar1);
  uVar5 = param_7[1];
  *(undefined4 *)(this + 8) = *param_7;
  *(undefined4 *)(this + 0xc) = uVar5;
  if (param_2 != *(int *)(this + 0x14)) {
    if (*(int *)(this + 0x14) != 0) {
      if (*(void **)(this + 0x10) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x10));
      }
      *(undefined4 *)(this + 0x10) = 0;
    }
    *(int *)(this + 0x14) = param_2;
    if (param_2 != 0) {
      puVar6 = operator_new__(param_2 * 0x3c);
      local_24 = 0;
      puVar7 = puVar6;
      do {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[8] = 0;
        local_24 = local_24 + 1;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (8 - (int)puVar6)) = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0xc - (int)puVar6)) = 0;
        puVar7[9] = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0x10 - (int)puVar6)) = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0x14 - (int)puVar6)) = 0;
        puVar7[10] = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0x18 - (int)puVar6)) = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0x1c - (int)puVar6)) = 0;
        puVar7[0xb] = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0x30 - (int)puVar6)) = 0;
        *(undefined4 *)((int)puVar6 + (int)puVar7 + (0x34 - (int)puVar6)) = 0;
        puVar7[0xe] = 0x3f800000;
        puVar7 = puVar7 + 0xf;
      } while (local_24 != param_2);
      *(undefined4 **)(this + 0x10) = puVar6;
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
      pvVar8 = operator_new__(param_2 << 3);
      *(void **)(this + 0x18) = pvVar8;
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
      pvVar8 = operator_new__(param_2 << 3);
      *(void **)(this + 0x20) = pvVar8;
      return;
    }
  }
  return;
}

