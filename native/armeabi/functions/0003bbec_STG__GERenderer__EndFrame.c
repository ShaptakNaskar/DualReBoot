/* 0003bbec | STG::GERenderer::EndFrame */

/* STG::GERenderer::EndFrame() */

void __thiscall STG::GERenderer::EndFrame(GERenderer *this)

{
  *(undefined4 *)(this + 0x100) = 0;
  GERendererAPI::GL_Flush();
  (**(code **)(*(int *)this + 0x30))(this);
  return;
}

