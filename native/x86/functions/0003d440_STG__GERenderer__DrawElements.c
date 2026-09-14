/* 0003d440 | STG::GERenderer::DrawElements */

/* STG::GERenderer::DrawElements(STG::GEIndexBuffer const&, unsigned long) */

void __thiscall STG::GERenderer::DrawElements(GERenderer *this,GEIndexBuffer *param_1,ulong param_2)

{
  GEBufferObject *this_00;
  int iVar1;
  
  iVar1 = FUN_0002e044();
  this_00 = *(GEBufferObject **)(iVar1 + 4);
  GEBufferObject::Bind(this_00);
  GERendererAPI::GL_DrawElements(param_2 * 3,(ushort *)0x0);
  GEBufferObject::Unbind(this_00);
  return;
}

