/* 00044b90 | STG::GESkeleton::Mesh::Initialize */

/* STG::GESkeleton::Mesh::Initialize(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::Mesh::Initialize(Mesh *this,ulong param_1,ulong param_2,ulong param_3)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  size_t __size;
  Animation *pAVar6;
  VertexGroup *this_00;
  VertexGroup *pVVar7;
  Animation *this_01;
  undefined4 uVar8;
  
  *(ulong *)(this + 0x10) = param_3;
  if (param_1 != *(ulong *)(this + 4)) {
    if (*(ulong *)(this + 4) == 0) {
      *(ulong *)(this + 4) = param_1;
    }
    else {
      pAVar6 = *(Animation **)this;
      if (pAVar6 != (Animation *)0x0) {
        this_01 = pAVar6 + *(int *)(pAVar6 + -4) * 0x88;
        if (pAVar6 != this_01) {
          do {
            this_01 = this_01 + -0x88;
            Animation::~Animation(this_01);
            pAVar6 = *(Animation **)this;
          } while (pAVar6 != this_01);
        }
        operator_delete__(pAVar6 + -8);
      }
      *(ulong *)(this + 4) = param_1;
      *(undefined4 *)this = 0;
    }
    if (param_1 != 0) {
      puVar3 = operator_new__(param_1 * 0x88 + 8);
      puVar3[1] = param_1;
      *puVar3 = 0x88;
      pAVar6 = (Animation *)(puVar3 + 2);
      while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
        Animation::Animation(pAVar6);
        pAVar6 = pAVar6 + 0x88;
      }
      *(Animation **)this = (Animation *)(puVar3 + 2);
    }
  }
  if (param_2 != *(ulong *)(this + 0xc)) {
    if (*(ulong *)(this + 0xc) != 0) {
      pVVar7 = *(VertexGroup **)(this + 8);
      if (pVVar7 != (VertexGroup *)0x0) {
        this_00 = pVVar7 + *(int *)(pVVar7 + -4) * 0x14;
        if (pVVar7 != this_00) {
          do {
            this_00 = this_00 + -0x14;
            VertexGroup::~VertexGroup(this_00);
            pVVar7 = *(VertexGroup **)(this + 8);
          } while (pVVar7 != this_00);
        }
        operator_delete__(pVVar7 + -8);
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(ulong *)(this + 0xc) = param_2;
    if (param_2 != 0) {
      puVar3 = operator_new__(param_2 * 0x14 + 8);
      puVar3[1] = param_2;
      *puVar3 = 0x14;
      pVVar7 = (VertexGroup *)(puVar3 + 2);
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        VertexGroup::VertexGroup(pVVar7);
        pVVar7 = pVVar7 + 0x14;
      }
      *(VertexGroup **)(this + 8) = (VertexGroup *)(puVar3 + 2);
    }
  }
  __size = *(int *)(this + 0x10) * 0x10 + 0x13;
  pvVar2 = malloc(__size);
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)pvVar2 + 0x13U & 0xfffffff0;
    *(void **)(uVar5 - 4) = pvVar2;
  }
  *(uint *)(this + 0x14) = uVar5;
  pvVar2 = malloc(0xd3);
  uVar1 = DAT_00044e1c;
  uVar5 = 0;
  if (pvVar2 != (void *)0x0) {
    puVar3 = (undefined4 *)((int)pvVar2 + 0x13U & 0xfffffff0);
  }
  else {
    puVar3 = (undefined4 *)0x0;
  }
  if (pvVar2 != (void *)0x0) {
    puVar3[-1] = pvVar2;
  }
  *(undefined4 **)(this + 0x24) = puVar3;
  puVar4 = puVar3 + 1;
  uVar8 = 0x3f800000;
  while( true ) {
    uVar5 = uVar5 + 1;
    *puVar3 = uVar8;
    if (uVar5 == 0x30) break;
    puVar3 = puVar4;
    puVar4 = puVar4 + 1;
    uVar8 = uVar1;
    if ((uVar5 & 3) == 0) {
      uVar8 = 0x3f800000;
    }
  }
  pvVar2 = malloc(__size);
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)pvVar2 + 0x13U & 0xfffffff0;
    *(void **)(uVar5 - 4) = pvVar2;
  }
  *(uint *)(this + 0x18) = uVar5;
  pvVar2 = malloc(__size);
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)pvVar2 + 0x13U & 0xfffffff0;
    *(void **)(uVar5 - 4) = pvVar2;
  }
  *(uint *)(this + 0x1c) = uVar5;
  pvVar2 = malloc(__size);
  if (pvVar2 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = (int)pvVar2 + 0x13U & 0xfffffff0;
    *(void **)(uVar5 - 4) = pvVar2;
  }
  *(uint *)(this + 0x20) = uVar5;
  this[0x28] = (Mesh)0x1;
  return;
}

