/* 0003b0f8 | STG::GERenderer::CaptureScreenShot */

/* STG::GERenderer::CaptureScreenShot(STG::URectangle<unsigned long> const&, STG::GEPixelData&) */

void __thiscall
STG::GERenderer::CaptureScreenShot(GERenderer *this,URectangle *param_1,GEPixelData *param_2)

{
  GERendererAPI::GL_ReadPixels(param_1,param_2);
  return;
}

