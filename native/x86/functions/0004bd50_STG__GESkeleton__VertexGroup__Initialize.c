/* 0004bd50 | STG::GESkeleton::VertexGroup::Initialize */

/* STG::GESkeleton::VertexGroup::Initialize(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::VertexGroup::Initialize
          (VertexGroup *this,ulong param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  FUN_0002e044();
  *(ulong *)(this + 8) = param_2;
  *(ulong *)(this + 0xc) = param_3;
  if (param_1 != *(ulong *)(this + 4)) {
    if (*(ulong *)(this + 4) != 0) {
      if (*(void **)this != (void *)0x0) {
        operator_delete__(*(void **)this);
      }
      *(undefined4 *)this = 0;
    }
    *(ulong *)(this + 4) = param_1;
    if (param_1 != 0) {
      pvVar2 = operator_new__(param_1 << 2);
      uVar1 = *(uint *)(this + 4);
      *(void **)this = pvVar2;
      if (uVar1 != 0) {
        uVar3 = -(((uint)pvVar2 & 0xf) >> 2) & 3;
        if (uVar1 <= uVar3) {
          uVar3 = uVar1;
        }
        uVar5 = 0;
        if (uVar3 != 0) {
          do {
            *(undefined4 *)((int)pvVar2 + uVar5 * 4) = 0xffffffff;
            uVar5 = uVar5 + 1;
          } while (uVar5 < uVar3);
          if (uVar1 == uVar3) goto LAB_0004bda6;
        }
        uVar6 = uVar1 - uVar3 >> 2;
        if (uVar6 != 0) {
          puVar7 = (undefined4 *)((int)pvVar2 + uVar3 * 4);
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            *puVar7 = 0xffffffff;
            puVar7[1] = 0xffffffff;
            puVar7[2] = 0xffffffff;
            puVar7[3] = 0xffffffff;
            puVar7 = puVar7 + 4;
          } while (uVar4 < uVar6);
          uVar5 = uVar5 + uVar6 * 4;
          if (uVar1 - uVar3 == uVar6 * 4) goto LAB_0004bda6;
        }
        do {
          *(undefined4 *)((int)pvVar2 + uVar5 * 4) = 0xffffffff;
          if (uVar1 <= uVar5 + 1) break;
          *(undefined4 *)((int)pvVar2 + (uVar5 + 1) * 4) = 0xffffffff;
          uVar5 = uVar5 + 2;
        } while (uVar5 < uVar1);
      }
    }
  }
LAB_0004bda6:
  this[0x10] = (VertexGroup)0x1;
  return;
}

