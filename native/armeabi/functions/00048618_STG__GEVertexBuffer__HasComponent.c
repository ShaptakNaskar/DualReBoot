/* 00048618 | STG::GEVertexBuffer::HasComponent */

/* STG::GEVertexBuffer::HasComponent(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType&,
   unsigned long&, unsigned long&) const */

GEVertexBuffer * __thiscall
STG::GEVertexBuffer::HasComponent
          (GEVertexBuffer *this,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + (param_2 + 6) * 4);
  iVar1 = *(int *)(this + param_2 * 4 + 0x34);
  *param_3 = iVar2;
  *param_4 = iVar1;
  iVar1 = *(int *)(this + (param_2 + 0x14) * 4);
  if (1 < iVar2) {
    this = (GEVertexBuffer *)0x0;
  }
  *param_5 = iVar1;
  if ((iVar2 < 2) && (this = (GEVertexBuffer *)0x0, *param_4 != 0)) {
    this = (GEVertexBuffer *)(uint)(iVar1 != 0);
  }
  return this;
}

