/* 0003bb58 | STG::GERendererAPI::GL_BufferData */

/* STG::GERendererAPI::GL_BufferData(STG::GEBufferObject::EType, STG::GEBufferObject::EUsage,
   unsigned long) */

void STG::GERendererAPI::GL_BufferData(int param_1,int param_2,undefined4 param_3)

{
  (*(code *)PTR_glBufferData_0007df20)
            (*(undefined4 *)(DAT_0003bb7c + 0x3bb64 + param_1 * 4 + 0x3c4),param_3,0,
             *(undefined4 *)(DAT_0003bb7c + 0x3bb64 + param_2 * 4 + 0x3cc));
  return;
}

