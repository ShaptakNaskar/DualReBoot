/* 0003d524 | STG::GERenderer::GetFPS */

/* STG::GERenderer::GetFPS() const */

void STG::GERenderer::GetFPS(void)

{
  int in_r0;
  undefined8 uVar1;
  
  uVar1 = __floatundidf(*(undefined4 *)(in_r0 + 0x360),*(undefined4 *)(in_r0 + 0x364));
  uVar1 = __adddf3((int)uVar1,(int)((ulonglong)uVar1 >> 0x20),DAT_0003d55c,DAT_0003d560);
  __divdf3(0,DAT_0003d564,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
  __truncdfsf2();
  return;
}

