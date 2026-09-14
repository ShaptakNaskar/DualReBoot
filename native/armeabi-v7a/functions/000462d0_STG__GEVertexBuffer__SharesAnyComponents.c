/* 000462d0 | STG::GEVertexBuffer::SharesAnyComponents */

/* STG::GEVertexBuffer::SharesAnyComponents(STG::GEVertexBuffer const&) const */

undefined4 STG::GEVertexBuffer::SharesAnyComponents(GEVertexBuffer *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xa4) == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    iVar1 = HasComponent();
    uVar2 = uVar2 + 1;
    if (iVar1 != 0) {
      return 1;
    }
  } while (uVar2 < *(uint *)(param_1 + 0xa4));
  return 0;
}

