/* 00044e20 | STG::GESkeleton::Mesh::SetVertex */

/* STG::GESkeleton::Mesh::SetVertex(unsigned long, STG::MVector3 const&, float const (&) [3]) */

void __thiscall
STG::GESkeleton::Mesh::SetVertex(Mesh *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  undefined4 *puVar5;
  
  iVar1 = param_1 * 0x10;
  puVar5 = (undefined4 *)(*(int *)(this + 0x14) + iVar1);
  pfVar4 = (float *)(*(int *)(this + 0x18) + iVar1);
  pfVar2 = (float *)(*(int *)(this + 0x1c) + iVar1);
  pfVar3 = (float *)(*(int *)(this + 0x20) + iVar1);
  *puVar5 = *(undefined4 *)param_2;
  puVar5[1] = *(undefined4 *)(param_2 + 4);
  puVar5[2] = *(undefined4 *)(param_2 + 8);
  puVar5[3] = 0x3f800000;
  *pfVar4 = *param_3;
  pfVar4[1] = *param_3;
  pfVar4[2] = *param_3;
  pfVar4[3] = *param_3;
  *pfVar2 = param_3[1];
  pfVar2[1] = param_3[1];
  pfVar2[2] = param_3[1];
  pfVar2[3] = param_3[1];
  *pfVar3 = param_3[2];
  pfVar3[1] = param_3[2];
  pfVar3[2] = param_3[2];
  pfVar3[3] = param_3[2];
  return;
}

