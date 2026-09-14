/* 00040120 | STG::GERendererAPI::GL_BufferData */

/* STG::GERendererAPI::GL_BufferData(STG::GEBufferObject::EType, STG::GEBufferObject::EUsage,
   unsigned long) */

void STG::GERendererAPI::GL_BufferData(int param_1,int param_2,undefined4 param_3)

{
  int unaff_EBX;
  
  FUN_0002e044();
  glBufferData(*(undefined4 *)(unaff_EBX + 0x48112 + param_1 * 4),param_3,0,
               *(undefined4 *)(unaff_EBX + 0x4810a + param_2 * 4));
  return;
}

