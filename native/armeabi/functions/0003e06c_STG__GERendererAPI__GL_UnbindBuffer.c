/* 0003e06c | STG::GERendererAPI::GL_UnbindBuffer */

/* STG::GERendererAPI::GL_UnbindBuffer(STG::GEBufferObject::EType) */

void STG::GERendererAPI::GL_UnbindBuffer(int param_1)

{
  (*(code *)PTR_glBindBuffer_00080f24)(*(undefined4 *)(DAT_0003e084 + param_1 * 4 + 0x3e438),0);
  return;
}

