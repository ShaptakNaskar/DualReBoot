/* 00044a1c | STG::GESkeleton::VertexGroup::SetBoneIndex */

/* STG::GESkeleton::VertexGroup::SetBoneIndex(unsigned long, unsigned long) */

void __thiscall
STG::GESkeleton::VertexGroup::SetBoneIndex(VertexGroup *this,ulong param_1,ulong param_2)

{
  *(ulong *)(*(int *)this + param_1 * 4) = param_2;
  return;
}

