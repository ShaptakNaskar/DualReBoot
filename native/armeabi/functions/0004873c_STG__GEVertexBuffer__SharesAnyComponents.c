/* 0004873c | STG::GEVertexBuffer::SharesAnyComponents */

/* STG::GEVertexBuffer::SharesAnyComponents(STG::GEVertexBuffer const&) const */

undefined4 STG::GEVertexBuffer::SharesAnyComponents(GEVertexBuffer *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xa4) != 0) {
    uVar3 = 0;
    while( true ) {
      iVar1 = HasComponent();
      uVar3 = uVar3 + 1;
      if (iVar1 != 0) break;
      if (*(uint *)(param_1 + 0xa4) <= uVar3) {
        return 0;
      }
    }
    uVar2 = 1;
  }
  return uVar2;
}

