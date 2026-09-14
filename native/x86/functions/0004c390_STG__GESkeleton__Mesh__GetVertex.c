/* 0004c390 | STG::GESkeleton::Mesh::GetVertex */

/* STG::GESkeleton::Mesh::GetVertex(unsigned long, STG::MVector3&, float (&) [3]) const */

void __thiscall
STG::GESkeleton::Mesh::GetVertex(Mesh *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1 * 0x10;
  puVar1 = (undefined4 *)(*(int *)(this + 0x14) + iVar3);
  *(undefined4 *)param_2 = *puVar1;
  *(undefined4 *)(param_2 + 4) = puVar1[1];
  *(undefined4 *)(param_2 + 8) = puVar1[2];
  *param_3 = *(float *)(*(int *)(this + 0x18) + iVar3);
  iVar2 = *(int *)(this + 0x20);
  param_3[1] = *(float *)(*(int *)(this + 0x1c) + iVar3);
  param_3[2] = *(float *)(iVar2 + iVar3);
  return;
}

