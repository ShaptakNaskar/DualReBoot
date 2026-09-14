/* 000400e0 | STG::GERendererAPI::GL_UnbindBuffer */

/* STG::GERendererAPI::GL_UnbindBuffer(STG::GEBufferObject::EType) */

void STG::GERendererAPI::GL_UnbindBuffer(int param_1)

{
  int unaff_EBX;
  
  FUN_0002e044();
  glBindBuffer(*(undefined4 *)(unaff_EBX + 0x48142 + param_1 * 4),0);
  return;
}

