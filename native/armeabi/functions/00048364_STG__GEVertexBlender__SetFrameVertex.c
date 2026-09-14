/* 00048364 | STG::GEVertexBlender::SetFrameVertex */

/* STG::GEVertexBlender::SetFrameVertex(unsigned long, unsigned long, STG::MVector3 const&) */

void __thiscall
STG::GEVertexBlender::SetFrameVertex
          (GEVertexBlender *this,ulong param_1,ulong param_2,MVector3 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(this + 0xc) + param_1 * 4);
  *(undefined4 *)(iVar1 + param_2 * 0x10) = *(undefined4 *)param_3;
  iVar1 = iVar1 + param_2 * 0x10;
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(param_3 + 4);
  uVar2 = *(undefined4 *)(param_3 + 8);
  *(undefined4 *)(iVar1 + 0xc) = 0x3f800000;
  *(undefined4 *)(iVar1 + 8) = uVar2;
  return;
}

