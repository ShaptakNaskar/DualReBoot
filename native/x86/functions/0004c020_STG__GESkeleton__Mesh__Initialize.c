/* 0004c020 | STG::GESkeleton::Mesh::Initialize */

/* STG::GESkeleton::Mesh::Initialize(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::Mesh::Initialize(Mesh *this,ulong param_1,ulong param_2,ulong param_3)

{
  size_t __size;
  void *pvVar1;
  ulong *puVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  Animation *this_00;
  Animation *pAVar6;
  undefined4 *puVar7;
  VertexGroup *pVVar8;
  VertexGroup *this_01;
  
  FUN_0002e044();
  *(ulong *)(this + 0x10) = param_3;
  if (param_1 != *(ulong *)(this + 4)) {
    if (*(ulong *)(this + 4) == 0) {
      *(ulong *)(this + 4) = param_1;
    }
    else {
      pAVar6 = *(Animation **)this;
      if (pAVar6 != (Animation *)0x0) {
        this_00 = pAVar6 + *(int *)(pAVar6 + -4) * 0x88;
        if (pAVar6 != this_00) {
          do {
            this_00 = this_00 + -0x88;
            Animation::~Animation(this_00);
            pAVar6 = *(Animation **)this;
          } while (pAVar6 != this_00);
        }
        operator_delete__(pAVar6 + -4);
      }
      *(undefined4 *)this = 0;
      *(ulong *)(this + 4) = param_1;
    }
    if (param_1 != 0) {
      puVar2 = operator_new__(param_1 * 0x88 + 4);
      *puVar2 = param_1;
      pAVar6 = (Animation *)(puVar2 + 1);
      while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
        Animation::Animation(pAVar6);
        pAVar6 = pAVar6 + 0x88;
      }
      *(Animation **)this = (Animation *)(puVar2 + 1);
    }
  }
  if (param_2 != *(ulong *)(this + 0xc)) {
    if (*(ulong *)(this + 0xc) != 0) {
      pVVar8 = *(VertexGroup **)(this + 8);
      if (pVVar8 != (VertexGroup *)0x0) {
        this_01 = pVVar8 + *(int *)(pVVar8 + -4) * 0x14;
        if (pVVar8 != this_01) {
          do {
            this_01 = this_01 + -0x14;
            VertexGroup::~VertexGroup(this_01);
            pVVar8 = *(VertexGroup **)(this + 8);
          } while (pVVar8 != this_01);
        }
        operator_delete__(pVVar8 + -4);
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(ulong *)(this + 0xc) = param_2;
    if (param_2 != 0) {
      puVar2 = operator_new__(param_2 * 0x14 + 4);
      *puVar2 = param_2;
      pVVar8 = (VertexGroup *)(puVar2 + 1);
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        VertexGroup::VertexGroup(pVVar8);
        pVVar8 = pVVar8 + 0x14;
      }
      *(VertexGroup **)(this + 8) = (VertexGroup *)(puVar2 + 1);
    }
  }
  __size = *(int *)(this + 0x10) * 0x10 + 0x13;
  pvVar1 = malloc(__size);
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)pvVar1 + 0x13U & 0xfffffff0;
    *(void **)(uVar4 - 4) = pvVar1;
  }
  *(uint *)(this + 0x14) = uVar4;
  pvVar1 = malloc(0xd3);
  if (pvVar1 == (void *)0x0) {
    puVar7 = (undefined4 *)0x0;
  }
  else {
    puVar7 = (undefined4 *)((int)pvVar1 + 0x13U & 0xfffffff0);
    puVar7[-1] = pvVar1;
  }
  uVar4 = 0;
  uVar3 = 0x3f800000;
  *(undefined4 **)(this + 0x24) = puVar7;
  while( true ) {
    puVar5 = puVar7 + 1;
    uVar4 = uVar4 + 1;
    *puVar7 = uVar3;
    if (uVar4 == 0x30) break;
    uVar3 = 0x3f800000;
    puVar7 = puVar5;
    if ((uVar4 & 3) != 0) {
      uVar3 = 0;
    }
  }
  pvVar1 = malloc(__size);
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)pvVar1 + 0x13U & 0xfffffff0;
    *(void **)(uVar4 - 4) = pvVar1;
  }
  *(uint *)(this + 0x18) = uVar4;
  pvVar1 = malloc(__size);
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)pvVar1 + 0x13U & 0xfffffff0;
    *(void **)(uVar4 - 4) = pvVar1;
  }
  *(uint *)(this + 0x1c) = uVar4;
  pvVar1 = malloc(__size);
  if (pvVar1 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (int)pvVar1 + 0x13U & 0xfffffff0;
    *(void **)(uVar4 - 4) = pvVar1;
  }
  *(uint *)(this + 0x20) = uVar4;
  this[0x28] = (Mesh)0x1;
  return;
}

