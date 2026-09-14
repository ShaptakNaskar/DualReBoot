/* 000462a4 | STG::GEVertexBuffer::GetComponent */

/* STG::GEVertexBuffer::GetComponent(STG::GEVertexBuffer::EUsage, float*&, unsigned long, unsigned
   long) const */

void __thiscall
STG::GEVertexBuffer::GetComponent
          (GEVertexBuffer *this,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 local_c;
  
  GetComponent(this,param_2,&local_c,param_4,param_5);
  *param_3 = local_c;
  return;
}

