/* 0004723c | STG::GESkeleton::Mesh::SetVertex */

/* STG::GESkeleton::Mesh::SetVertex(unsigned long, STG::MVector3 const&, float const (&) [3]) */

void __thiscall
STG::GESkeleton::Mesh::SetVertex(Mesh *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(this + 0x14);
  iVar5 = param_1 * 0x10;
  *(undefined4 *)(iVar6 + param_1 * 0x10) = *(undefined4 *)param_2;
  iVar6 = iVar6 + iVar5;
  *(undefined4 *)(iVar6 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(iVar6 + 0xc) = 0x3f800000;
  *(undefined4 *)(iVar6 + 8) = uVar1;
  iVar2 = *(int *)(this + 0x18);
  iVar4 = *(int *)(this + 0x1c);
  iVar6 = *(int *)(this + 0x20);
  *(float *)(iVar2 + param_1 * 0x10) = *param_3;
  iVar2 = iVar2 + iVar5;
  iVar3 = iVar4 + iVar5;
  *(float *)(iVar2 + 4) = *param_3;
  iVar5 = iVar6 + iVar5;
  *(float *)(iVar2 + 8) = *param_3;
  *(float *)(iVar2 + 0xc) = *param_3;
  *(float *)(iVar4 + param_1 * 0x10) = param_3[1];
  *(float *)(iVar3 + 4) = param_3[1];
  *(float *)(iVar3 + 8) = param_3[1];
  *(float *)(iVar3 + 0xc) = param_3[1];
  *(float *)(iVar6 + param_1 * 0x10) = param_3[2];
  *(float *)(iVar5 + 4) = param_3[2];
  *(float *)(iVar5 + 8) = param_3[2];
  *(float *)(iVar5 + 0xc) = param_3[2];
  return;
}

