/* 0003d3dc | STG::GERenderer::SetMultiSampleEnabled */

/* STG::GERenderer::SetMultiSampleEnabled(bool) */

void __thiscall STG::GERenderer::SetMultiSampleEnabled(GERenderer *this,bool param_1)

{
  this[0xc9] = (GERenderer)param_1;
  GERendererAPI::GL_SetMultiSample(param_1);
  return;
}

