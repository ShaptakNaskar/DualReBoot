/* 00045f38 | STG::GEVertexBlender::SetUpdateData */

/* STG::GEVertexBlender::SetUpdateData(unsigned long, unsigned long, float) */

void __thiscall
STG::GEVertexBlender::SetUpdateData(GEVertexBlender *this,ulong param_1,ulong param_2,float param_3)

{
  *(float *)(this + 0x1c) = param_3;
  *(ulong *)(this + 0x14) = param_1;
  *(ulong *)(this + 0x18) = param_2;
  return;
}

