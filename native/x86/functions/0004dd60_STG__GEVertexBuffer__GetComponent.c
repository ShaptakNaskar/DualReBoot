/* 0004dd60 | STG::GEVertexBuffer::GetComponent */

/* STG::GEVertexBuffer::GetComponent(STG::GEVertexBuffer::EUsage, float*&, unsigned long, unsigned
   long) const */

void __thiscall
STG::GEVertexBuffer::GetComponent
          (GEVertexBuffer *this,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
          undefined4 param_5)

{
  undefined4 local_10 [2];
  undefined4 uStack_8;
  
  uStack_8 = 0x4dd66;
  FUN_0002e044();
  GetComponent(this,param_2,local_10,param_4,param_5);
  *param_3 = local_10[0];
  return;
}

