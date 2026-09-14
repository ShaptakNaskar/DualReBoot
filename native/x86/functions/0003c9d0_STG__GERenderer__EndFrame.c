/* 0003c9d0 | STG::GERenderer::EndFrame */

/* STG::GERenderer::EndFrame() */

void __thiscall STG::GERenderer::EndFrame(GERenderer *this)

{
  FUN_0002e044();
  *(undefined4 *)(this + 0x100) = 0;
  GERendererAPI::GL_Flush();
  (**(code **)(*(int *)this + 0x30))(this);
  return;
}

