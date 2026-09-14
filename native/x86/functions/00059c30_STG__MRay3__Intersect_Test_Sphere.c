/* 00059c30 | STG::MRay3::Intersect_Test_Sphere */

/* STG::MRay3::Intersect_Test_Sphere(STG::MVector3 const&, float) const */

bool __thiscall STG::MRay3::Intersect_Test_Sphere(MRay3 *this,MVector3 *param_1,float param_2)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = *(float *)this - *(float *)param_1;
  fVar5 = *(float *)(this + 4) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(this + 8) - *(float *)(param_1 + 8);
  bVar1 = true;
  fVar2 = (fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) - param_2 * param_2;
  if (0.0 < fVar2) {
    bVar1 = false;
    fVar3 = fVar5 * *(float *)(this + 0x10) + fVar4 * *(float *)(this + 0xc) +
            fVar3 * *(float *)(this + 0x14);
    if (fVar3 < 0.0) {
      return fVar2 <= fVar3 * fVar3;
    }
  }
  return bVar1;
}

