/* 000400a0 | STG::GERendererAPI::GL_BindBuffer */

/* STG::GERendererAPI::GL_BindBuffer(STG::GEBufferObject::EType, unsigned long) */

void STG::GERendererAPI::GL_BindBuffer(int param_1,undefined4 param_2)

{
  int unaff_EBX;
  
  FUN_0002e044();
  glBindBuffer(*(undefined4 *)(unaff_EBX + 0x4817a + param_1 * 4),param_2);
  return;
}

