/* 0004c2e0 | STG::GESkeleton::Mesh::SetVertex */

/* STG::GESkeleton::Mesh::SetVertex(unsigned long, STG::MVector3 const&, float const (&) [3]) */

void __thiscall
STG::GESkeleton::Mesh::SetVertex(Mesh *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  float *pfVar3;
  
  iVar2 = param_1 * 0x10;
  puVar1 = (undefined4 *)(*(int *)(this + 0x14) + iVar2);
  *puVar1 = *(undefined4 *)param_2;
  puVar1[1] = *(undefined4 *)(param_2 + 4);
  puVar1[2] = *(undefined4 *)(param_2 + 8);
  puVar1[3] = 0x3f800000;
  pfVar3 = (float *)(*(int *)(this + 0x18) + iVar2);
  *pfVar3 = *param_3;
  pfVar3[1] = *param_3;
  pfVar3[2] = *param_3;
  pfVar3[3] = *param_3;
  pfVar3 = (float *)(*(int *)(this + 0x1c) + iVar2);
  *pfVar3 = param_3[1];
  pfVar3[1] = param_3[1];
  pfVar3[2] = param_3[1];
  pfVar3[3] = param_3[1];
  pfVar3 = (float *)(iVar2 + *(int *)(this + 0x20));
  *pfVar3 = param_3[2];
  pfVar3[1] = param_3[2];
  pfVar3[2] = param_3[2];
  pfVar3[3] = param_3[2];
  return;
}

