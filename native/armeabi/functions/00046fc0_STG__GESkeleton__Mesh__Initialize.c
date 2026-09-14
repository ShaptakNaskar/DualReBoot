/* 00046fc0 | STG::GESkeleton::Mesh::Initialize */

/* STG::GESkeleton::Mesh::Initialize(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::Mesh::Initialize(Mesh *this,ulong param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  size_t __size;
  Animation *pAVar5;
  VertexGroup *this_00;
  VertexGroup *pVVar6;
  Animation *this_01;
  
  *(ulong *)(this + 0x10) = param_3;
  if (param_1 != *(ulong *)(this + 4)) {
    if (*(ulong *)(this + 4) == 0) {
      *(ulong *)(this + 4) = param_1;
    }
    else {
      pAVar5 = *(Animation **)this;
      if (pAVar5 != (Animation *)0x0) {
        this_01 = pAVar5 + *(int *)(pAVar5 + -4) * 0x88;
        if (pAVar5 != this_01) {
          do {
            this_01 = this_01 + -0x88;
            Animation::~Animation(this_01);
            pAVar5 = *(Animation **)this;
          } while (pAVar5 != this_01);
        }
        operator_delete__(pAVar5 + -8);
      }
      *(undefined4 *)this = 0;
      *(ulong *)(this + 4) = param_1;
    }
    if (param_1 != 0) {
      puVar3 = operator_new__(param_1 * 0x88 + 8);
      *puVar3 = 0x88;
      puVar3[1] = param_1;
      pAVar5 = (Animation *)(puVar3 + 2);
      while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
        Animation::Animation(pAVar5);
        pAVar5 = pAVar5 + 0x88;
      }
      *(Animation **)this = (Animation *)(puVar3 + 2);
    }
  }
  if (param_2 != *(ulong *)(this + 0xc)) {
    if (*(ulong *)(this + 0xc) != 0) {
      pVVar6 = *(VertexGroup **)(this + 8);
      if (pVVar6 != (VertexGroup *)0x0) {
        this_00 = pVVar6 + *(int *)(pVVar6 + -4) * 0x14;
        if (pVVar6 != this_00) {
          do {
            this_00 = this_00 + -0x14;
            VertexGroup::~VertexGroup(this_00);
            pVVar6 = *(VertexGroup **)(this + 8);
          } while (pVVar6 != this_00);
        }
        operator_delete__(pVVar6 + -8);
      }
      *(undefined4 *)(this + 8) = 0;
    }
    *(ulong *)(this + 0xc) = param_2;
    if (param_2 != 0) {
      puVar3 = operator_new__(param_2 * 0x14 + 8);
      *puVar3 = 0x14;
      puVar3[1] = param_2;
      pVVar6 = (VertexGroup *)(puVar3 + 2);
      while (param_2 = param_2 - 1, param_2 != 0xffffffff) {
        VertexGroup::VertexGroup(pVVar6);
        pVVar6 = pVVar6 + 0x14;
      }
      *(VertexGroup **)(this + 8) = (VertexGroup *)(puVar3 + 2);
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
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)((int)pvVar1 + 0x13U & 0xfffffff0);
    puVar3[-1] = pvVar1;
  }
  *(undefined4 **)(this + 0x24) = puVar3;
  uVar4 = 0;
  uVar2 = 0x3f800000;
  while( true ) {
    uVar4 = uVar4 + 1;
    *puVar3 = uVar2;
    if (uVar4 == 0x30) break;
    if ((uVar4 & 3) == 0) {
      uVar2 = 0x3f800000;
      puVar3 = puVar3 + 1;
    }
    else {
      uVar2 = 0;
      puVar3 = puVar3 + 1;
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

