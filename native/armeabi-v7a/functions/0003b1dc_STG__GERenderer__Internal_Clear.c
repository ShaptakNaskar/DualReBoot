/* 0003b1dc | STG::GERenderer::Internal_Clear */

/* STG::GERenderer::Internal_Clear(STG::GEColor const&, unsigned long) */

void __thiscall STG::GERenderer::Internal_Clear(GERenderer *this,GEColor *param_1,ulong param_2)

{
  GERendererAPI::GL_Clear(param_1,param_2);
  return;
}

