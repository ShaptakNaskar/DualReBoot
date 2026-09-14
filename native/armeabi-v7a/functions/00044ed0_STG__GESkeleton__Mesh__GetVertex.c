/* 00044ed0 | STG::GESkeleton::Mesh::GetVertex */

/* STG::GESkeleton::Mesh::GetVertex(unsigned long, STG::MVector3&, float (&) [3]) const */

void __thiscall
STG::GESkeleton::Mesh::GetVertex(Mesh *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = param_1 * 0x10;
  puVar3 = (undefined4 *)(*(int *)(this + 0x14) + iVar1);
  *(undefined4 *)param_2 = *puVar3;
  *(undefined4 *)(param_2 + 4) = puVar3[1];
  *(undefined4 *)(param_2 + 8) = puVar3[2];
  iVar2 = *(int *)(this + 0x1c);
  iVar4 = *(int *)(this + 0x20);
  *param_3 = *(float *)(*(int *)(this + 0x18) + iVar1);
  param_3[1] = *(float *)(iVar2 + iVar1);
  param_3[2] = *(float *)(iVar4 + iVar1);
  return;
}

