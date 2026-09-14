/* 0004dc10 | STG::GEVertexBuffer::HasComponent */

/* STG::GEVertexBuffer::HasComponent(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType&,
   unsigned long&, unsigned long&) const */

bool __thiscall
STG::GEVertexBuffer::HasComponent
          (GEVertexBuffer *this,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + param_2 * 4 + 0x18);
  *param_3 = iVar1;
  *param_4 = *(int *)(this + param_2 * 4 + 0x34);
  iVar2 = *(int *)(this + param_2 * 4 + 0x50);
  *param_5 = iVar2;
  if ((iVar1 < 2) && (*param_4 != 0)) {
    return iVar2 != 0;
  }
  return false;
}

