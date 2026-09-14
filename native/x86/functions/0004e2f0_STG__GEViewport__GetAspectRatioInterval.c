/* 0004e2f0 | STG::GEViewport::GetAspectRatioInterval */

/* STG::GEViewport::GetAspectRatioInterval(float) const */

longdouble __thiscall STG::GEViewport::GetAspectRatioInterval(GEViewport *this,float param_1)

{
  int extraout_ECX;
  float fVar1;
  float fVar2;
  
  FUN_0002e915();
  fVar2 = *(float *)(extraout_ECX + 0x393b3) / param_1;
  fVar1 = *(float *)(this + 0x30);
  if (fVar2 <= *(float *)(this + 0x30)) {
    fVar1 = fVar2;
  }
  if (fVar1 <= param_1) {
    fVar1 = param_1;
  }
  return (longdouble)((fVar1 - param_1) * (*(float *)(extraout_ECX + 0x393b3) / (fVar2 - param_1)));
}

