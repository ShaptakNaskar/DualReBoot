/* 0003bb3c | STG::GERendererAPI::GL_UnbindBuffer */

/* STG::GERendererAPI::GL_UnbindBuffer(STG::GEBufferObject::EType) */

void STG::GERendererAPI::GL_UnbindBuffer(int param_1)

{
  (*(code *)PTR_glBindBuffer_0007df1c)(*(undefined4 *)(DAT_0003bb54 + param_1 * 4 + 0x3bf08),0);
  return;
}

