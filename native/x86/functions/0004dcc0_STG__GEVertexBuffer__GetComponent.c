/* 0004dcc0 | STG::GEVertexBuffer::GetComponent */

/* STG::GEVertexBuffer::GetComponent(STG::GEVertexBuffer::EUsage, unsigned char*&, unsigned long,
   unsigned long) const */

undefined4 __thiscall
STG::GEVertexBuffer::GetComponent
          (GEVertexBuffer *this,int param_2,int *param_3,int param_4,int param_5)

{
  char cVar1;
  int unaff_EBX;
  int local_20 [2];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  FUN_0002e044();
  cVar1 = HasComponent(this,param_2,local_20,local_18,local_14);
  if (cVar1 == '\0') {
    *param_3 = 0;
    return 0;
  }
  *param_3 = param_4 * *(int *)(this + 0xc) + *(int *)(this + param_2 * 4 + 0x6c) +
             *(int *)(this + 0x14) + param_5 * *(int *)(unaff_EBX + 0x3a772 + local_20[0] * 4);
  return 1;
}

