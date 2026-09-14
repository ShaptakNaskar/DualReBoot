/* 0003bb80 | STG::GERendererAPI::GL_BufferSubData */

/* STG::GERendererAPI::GL_BufferSubData(STG::GEBufferObject::EType, unsigned char const*, unsigned
   long) */

void STG::GERendererAPI::GL_BufferSubData(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_glBufferSubData_0007df24)
            (*(undefined4 *)(DAT_0003bb9c + param_1 * 4 + 0x3bf68),0,param_3,param_2);
  return;
}

