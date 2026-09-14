/* 0003bc14 | STG::GERenderer::EndCamera */

/* STG::GERenderer::EndCamera() */

void __thiscall STG::GERenderer::EndCamera(GERenderer *this)

{
  *(undefined4 *)(this + 0x100) = 2;
  GERendererAPI::GL_ResetMatrixMode(0x1700);
  GERendererAPI::GL_ResetMatrixMode(0x1701);
  return;
}

