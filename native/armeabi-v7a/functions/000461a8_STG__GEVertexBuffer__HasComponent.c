/* 000461a8 | STG::GEVertexBuffer::HasComponent */

/* STG::GEVertexBuffer::HasComponent(STG::GEVertexBuffer::EUsage, STG::GEVertexBuffer::EType&,
   unsigned long&, unsigned long&) const */

GEVertexBuffer * __thiscall
STG::GEVertexBuffer::HasComponent
          (GEVertexBuffer *this,int param_2,int *param_3,int *param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(this + param_2 * 4 + 0x34);
  iVar1 = *(int *)(this + (param_2 + 6) * 4);
  *param_3 = iVar1;
  *param_4 = iVar2;
  iVar2 = *(int *)(this + (param_2 + 0x14) * 4);
  if (1 < iVar1) {
    this = (GEVertexBuffer *)0x0;
  }
  *param_5 = iVar2;
  if ((iVar1 < 2) && (this = (GEVertexBuffer *)0x0, *param_4 != 0)) {
    this = (GEVertexBuffer *)(uint)(iVar2 != 0);
  }
  return this;
}

