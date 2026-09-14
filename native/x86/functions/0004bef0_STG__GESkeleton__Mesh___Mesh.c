/* 0004bef0 | STG::GESkeleton::Mesh::~Mesh */

/* STG::GESkeleton::Mesh::~Mesh() */

void __thiscall STG::GESkeleton::Mesh::~Mesh(Mesh *this)

{
  Animation *pAVar1;
  VertexGroup *pVVar2;
  Animation *this_00;
  VertexGroup *this_01;
  
  FUN_0002e044();
  if (*(int *)(this + 0x14) != 0) {
    free(*(void **)(*(int *)(this + 0x14) + -4));
  }
  if (*(int *)(this + 0x24) != 0) {
    free(*(void **)(*(int *)(this + 0x24) + -4));
  }
  if (*(int *)(this + 0x18) != 0) {
    free(*(void **)(*(int *)(this + 0x18) + -4));
  }
  if (*(int *)(this + 0x1c) != 0) {
    free(*(void **)(*(int *)(this + 0x1c) + -4));
  }
  if (*(int *)(this + 0x20) != 0) {
    free(*(void **)(*(int *)(this + 0x20) + -4));
  }
  if (*(int *)(this + 0xc) != 0) {
    pVVar2 = *(VertexGroup **)(this + 8);
    if (pVVar2 != (VertexGroup *)0x0) {
      this_01 = pVVar2 + *(int *)(pVVar2 + -4) * 0x14;
      if (pVVar2 != this_01) {
        do {
          this_01 = this_01 + -0x14;
          VertexGroup::~VertexGroup(this_01);
          pVVar2 = *(VertexGroup **)(this + 8);
        } while (pVVar2 != this_01);
      }
      operator_delete__(pVVar2 + -4);
    }
    *(undefined4 *)(this + 8) = 0;
    *(undefined4 *)(this + 0xc) = 0;
  }
  if (*(int *)(this + 4) != 0) {
    pAVar1 = *(Animation **)this;
    if (pAVar1 != (Animation *)0x0) {
      this_00 = pAVar1 + *(int *)(pAVar1 + -4) * 0x88;
      if (pAVar1 != this_00) {
        do {
          this_00 = this_00 + -0x88;
          Animation::~Animation(this_00);
          pAVar1 = *(Animation **)this;
        } while (pAVar1 != this_00);
      }
      operator_delete__(pAVar1 + -4);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
    return;
  }
  return;
}

