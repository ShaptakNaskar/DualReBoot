/* 00035414 | STG::GEAnimationTrack::Evaluate */

/* STG::GEAnimationTrack::Evaluate(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) const */

float STG::GEAnimationTrack::Evaluate(float *param_1)

{
  int iVar1;
  float fVar2;
  int local_10;
  float local_c;
  
  iVar1 = Evaluate();
  if (iVar1 == 0) {
    fVar2 = *param_1;
  }
  else {
    iVar1 = (int)param_1[4] + local_10 * 0x40;
    fVar2 = 1.0 - local_c;
    fVar2 = fVar2 * fVar2 *
            (fVar2 * *(float *)(iVar1 + 0x20) + local_c * *(float *)(iVar1 + 0x24) * 3.0) +
            local_c * local_c *
            (local_c * *(float *)(iVar1 + 0x2c) + *(float *)(iVar1 + 0x28) * 3.0 * fVar2);
  }
  return fVar2;
}

