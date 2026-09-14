/* 0003f010 | STG::GERenderer::GetFPS */

/* STG::GERenderer::GetFPS() const */

longdouble STG::GERenderer::GetFPS(void)

{
  double dVar1;
  int iVar2;
  int extraout_ECX;
  
  iVar2 = FUN_0002e915();
  dVar1 = (double)*(longlong *)(iVar2 + 0x360);
  if (*(int *)(iVar2 + 0x364) < 0) {
    dVar1 = dVar1 + (double)*(float *)(extraout_ECX + 0x4868f);
  }
  return (longdouble)
         (float)(*(double *)(extraout_ECX + 0x4899b) / (dVar1 + *(double *)(extraout_ECX + 0x48993))
                );
}

