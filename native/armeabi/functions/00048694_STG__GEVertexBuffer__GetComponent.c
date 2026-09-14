/* 00048694 | STG::GEVertexBuffer::GetComponent */

/* STG::GEVertexBuffer::GetComponent(STG::GEVertexBuffer::EUsage, unsigned char*&, unsigned long,
   unsigned long) const */

bool __thiscall
STG::GEVertexBuffer::GetComponent
          (GEVertexBuffer *this,int param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int local_24;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar1 = HasComponent(this,param_2,&local_24,auStack_20,auStack_1c);
  if (iVar1 == 0) {
    *param_3 = 0;
  }
  else {
    *param_3 = *(int *)(DAT_0004870c + 0x486f4 + local_24 * 4) * param_5 +
               *(int *)(this + 0x14) +
               *(int *)(this + 0xc) * param_4 + *(int *)(this + param_2 * 4 + 0x6c);
  }
  return iVar1 != 0;
}

