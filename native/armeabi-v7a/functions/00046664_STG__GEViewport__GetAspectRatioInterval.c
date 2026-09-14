/* 00046664 | STG::GEViewport::GetAspectRatioInterval */

/* STG::GEViewport::GetAspectRatioInterval(float) const */

float __thiscall STG::GEViewport::GetAspectRatioInterval(GEViewport *this,float param_1)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 1.0 / param_1;
  fVar1 = *(float *)(this + 0x30);
  if (fVar2 <= *(float *)(this + 0x30)) {
    fVar1 = fVar2;
  }
  if (fVar1 < param_1) {
    fVar1 = param_1;
  }
  return (fVar1 - param_1) / (fVar2 - param_1);
}

