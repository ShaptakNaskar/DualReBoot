/* 0004fa48 | STG::MRay3::Intersect_Test_Sphere */

/* STG::MRay3::Intersect_Test_Sphere(STG::MVector3 const&, float) const */

bool __thiscall STG::MRay3::Intersect_Test_Sphere(MRay3 *this,MVector3 *param_1,float param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = *(float *)this - *(float *)param_1;
  fVar2 = *(float *)(this + 4) - *(float *)(param_1 + 4);
  fVar3 = *(float *)(this + 8) - *(float *)(param_1 + 8);
  fVar4 = (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) - param_2 * param_2;
  if (fVar4 <= 0.0) {
    return true;
  }
  fVar1 = fVar1 * *(float *)(this + 0xc) + fVar2 * *(float *)(this + 0x10) +
          fVar3 * *(float *)(this + 0x14);
  if (fVar1 < 0.0) {
    return fVar4 <= fVar1 * fVar1;
  }
  return false;
}

