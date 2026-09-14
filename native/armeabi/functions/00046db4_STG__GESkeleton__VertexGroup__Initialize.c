/* 00046db4 | STG::GESkeleton::VertexGroup::Initialize */

/* STG::GESkeleton::VertexGroup::Initialize(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::VertexGroup::Initialize
          (VertexGroup *this,ulong param_1,ulong param_2,ulong param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
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
      puVar1 = operator_new__(param_1 << 2);
      iVar2 = *(int *)(this + 4);
      *(undefined4 **)this = puVar1;
      if (iVar2 != 0) {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar3 != iVar2);
      }
    }
  }
  this[0x10] = (VertexGroup)0x1;
  return;
}

