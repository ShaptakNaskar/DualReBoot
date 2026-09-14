/* 0003c2b8 | STG::GERenderer::Draw */

/* STG::GERenderer::Draw(STG::GEVertexBuffer const&, STG::GEIndexBuffer const&) */

void __thiscall
STG::GERenderer::Draw(GERenderer *this,GEVertexBuffer *param_1,GEIndexBuffer *param_2)

{
  VertexBufferInstall(this,param_1);
  DrawElements(this,param_2);
  VertexBufferUninstall(this,param_1);
  return;
}

