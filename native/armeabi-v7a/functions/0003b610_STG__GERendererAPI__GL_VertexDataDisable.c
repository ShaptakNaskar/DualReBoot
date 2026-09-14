/* 0003b610 | STG::GERendererAPI::GL_VertexDataDisable */

/* STG::GERendererAPI::GL_VertexDataDisable(STG::GEVertexBuffer::EUsage) */

void STG::GERendererAPI::GL_VertexDataDisable(int param_1)

{
  if (*(int *)(DAT_0003b64c + param_1 * 4 + 0x3b7a4) != 0x500) {
    glClientActiveTexture();
  }
  (*(code *)PTR_glDisableClientState_0007debc)
            (*(undefined4 *)(GL_UnbindTexture + DAT_0003b650 + param_1 * 4));
  return;
}

