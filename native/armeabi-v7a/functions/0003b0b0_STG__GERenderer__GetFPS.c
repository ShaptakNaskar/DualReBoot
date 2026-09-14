/* 0003b0b0 | STG::GERenderer::GetFPS */

/* STG::GERenderer::GetFPS() const */

float STG::GERenderer::GetFPS(void)

{
  int in_r0;
  double dVar1;
  
  dVar1 = (double)__floatundidf(*(undefined4 *)(in_r0 + 0x360),*(undefined4 *)(in_r0 + 0x364));
  return (float)(DAT_0003b0e8 / (dVar1 + DAT_0003b0e0));
}

