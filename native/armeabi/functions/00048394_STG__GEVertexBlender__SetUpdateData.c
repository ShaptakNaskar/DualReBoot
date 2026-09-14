/* 00048394 | STG::GEVertexBlender::SetUpdateData */

/* STG::GEVertexBlender::SetUpdateData(unsigned long, unsigned long, float) */

void __thiscall
STG::GEVertexBlender::SetUpdateData(GEVertexBlender *this,ulong param_1,ulong param_2,float param_3)

{
  undefined4 in_r3;
  
  *(ulong *)(this + 0x14) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x1c) = in_r3;
  return;
}

