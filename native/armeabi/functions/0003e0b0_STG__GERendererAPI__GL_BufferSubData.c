/* 0003e0b0 | STG::GERendererAPI::GL_BufferSubData */

/* STG::GERendererAPI::GL_BufferSubData(STG::GEBufferObject::EType, unsigned char const*, unsigned
   long) */

void STG::GERendererAPI::GL_BufferSubData(int param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_glBufferSubData_00080f2c)
            (*(undefined4 *)(DAT_0003e0cc + param_1 * 4 + 0x3e498),0,param_3,param_2);
  return;
}

