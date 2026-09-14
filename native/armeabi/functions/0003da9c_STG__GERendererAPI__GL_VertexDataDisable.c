/* 0003da9c | STG::GERendererAPI::GL_VertexDataDisable */

/* STG::GERendererAPI::GL_VertexDataDisable(STG::GEVertexBuffer::EUsage) */

void STG::GERendererAPI::GL_VertexDataDisable(int param_1)

{
  if (*(int *)(DAT_0003dad8 + param_1 * 4 + 0x3dc30) != 0x500) {
    glClientActiveTexture();
  }
  (*(code *)PTR_glDisableClientState_00080ec4)
            (*(undefined4 *)(GL_BindTexture + DAT_0003dadc + param_1 * 4));
  return;
}

