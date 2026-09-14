/* 000472ec | STG::GESkeleton::Mesh::GetVertex */

/* STG::GESkeleton::Mesh::GetVertex(unsigned long, STG::MVector3&, float (&) [3]) const */

void __thiscall
STG::GESkeleton::Mesh::GetVertex(Mesh *this,ulong param_1,MVector3 *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0x14) + param_1 * 0x10;
  *(undefined4 *)param_2 = *(undefined4 *)(*(int *)(this + 0x14) + param_1 * 0x10);
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(iVar1 + 4);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar1 + 8);
  iVar2 = *(int *)(this + 0x1c);
  iVar1 = *(int *)(this + 0x20);
  *param_3 = *(float *)(*(int *)(this + 0x18) + param_1 * 0x10);
  param_3[1] = *(float *)(iVar2 + param_1 * 0x10);
  param_3[2] = *(float *)(iVar1 + param_1 * 0x10);
  return;
}

