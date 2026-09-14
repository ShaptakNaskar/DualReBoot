/* 000484b8 | STG::GEVertexBuffer::AddComponent */

/* STG::GEVertexBuffer::AddComponent(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType,
   unsigned long) */

void __thiscall
STG::GEVertexBuffer::AddComponent(GEVertexBuffer *this,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0xc);
  iVar1 = *(int *)(this + 0xa4);
  iVar3 = param_4 * *(int *)(DAT_00048514 + 0x484c8 + param_3 * 4);
  *(int *)(this + (param_2 + 6) * 4) = param_3;
  *(int *)(this + param_2 * 4 + 0x34) = param_4;
  *(int *)(this + (param_2 + 0x14) * 4) = iVar3;
  *(int *)(this + param_2 * 4 + 0x6c) = iVar2;
  *(int *)(this + 0xc) = iVar3 + iVar2;
  *(int *)(this + (iVar1 + 0x22) * 4) = param_2;
  *(int *)(this + 0xa4) = iVar1 + 1;
  return;
}

