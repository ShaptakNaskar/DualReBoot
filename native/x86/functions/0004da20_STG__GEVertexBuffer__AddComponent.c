/* 0004da20 | STG::GEVertexBuffer::AddComponent */

/* STG::GEVertexBuffer::AddComponent(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType,
   unsigned long) */

void __thiscall
STG::GEVertexBuffer::AddComponent(GEVertexBuffer *this,int param_2,int param_3,int param_4)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)(this + param_2 * 4 + 0x34) = param_4;
  iVar1 = *(int *)(this + 0xc);
  param_4 = param_4 * *(int *)(unaff_EBX + 0x3aa18 + param_3 * 4);
  *(int *)(this + param_2 * 4 + 0x6c) = iVar1;
  *(int *)(this + param_2 * 4 + 0x18) = param_3;
  *(int *)(this + 0xc) = iVar1 + param_4;
  iVar1 = *(int *)(this + 0xa4);
  *(int *)(this + param_2 * 4 + 0x50) = param_4;
  *(int *)(this + iVar1 * 4 + 0x88) = param_2;
  *(int *)(this + 0xa4) = iVar1 + 1;
  return;
}

