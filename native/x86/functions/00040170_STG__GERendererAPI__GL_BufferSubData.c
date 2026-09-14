/* 00040170 | STG::GERendererAPI::GL_BufferSubData */

/* STG::GERendererAPI::GL_BufferSubData(STG::GEBufferObject::EType, unsigned char const*, unsigned
   long) */

void STG::GERendererAPI::GL_BufferSubData(int param_1,undefined4 param_2,undefined4 param_3)

{
  int unaff_EBX;
  
  FUN_0002e044();
  glBufferSubData(*(undefined4 *)(unaff_EBX + 0x480ca + param_1 * 4),0,param_3,param_2);
  return;
}

