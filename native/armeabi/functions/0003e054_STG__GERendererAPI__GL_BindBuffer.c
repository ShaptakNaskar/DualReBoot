/* 0003e054 | STG::GERendererAPI::GL_BindBuffer */

/* STG::GERendererAPI::GL_BindBuffer(STG::GEBufferObject::EType, unsigned long) */

void STG::GERendererAPI::GL_BindBuffer(int param_1)

{
  (*(code *)PTR_glBindBuffer_00080f24)(*(undefined4 *)(DAT_0003e068 + param_1 * 4 + 0x3e414));
  return;
}

