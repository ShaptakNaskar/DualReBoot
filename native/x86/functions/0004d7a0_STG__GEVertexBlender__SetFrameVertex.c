/* 0004d7a0 | STG::GEVertexBlender::SetFrameVertex */

/* STG::GEVertexBlender::SetFrameVertex(unsigned long, unsigned long, STG::MVector3 const&) */

void __thiscall
STG::GEVertexBlender::SetFrameVertex
          (GEVertexBlender *this,ulong param_1,ulong param_2,MVector3 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)(param_2 * 0x10 + *(int *)(*(int *)(this + 0xc) + param_1 * 4));
  *puVar1 = *(undefined4 *)param_3;
  puVar1[1] = *(undefined4 *)(param_3 + 4);
  puVar1[2] = *(undefined4 *)(param_3 + 8);
  puVar1[3] = 0x3f800000;
  return;
}

