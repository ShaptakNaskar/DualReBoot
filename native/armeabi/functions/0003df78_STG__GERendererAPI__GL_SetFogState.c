/* 0003df78 | STG::GERendererAPI::GL_SetFogState */

/* STG::GERendererAPI::GL_SetFogState(bool, STG::GEColor const&, float, float) */

void STG::GERendererAPI::GL_SetFogState(bool param_1,GEColor *param_2,float param_3,float param_4)

{
  if (!param_1) {
    glDisable();
    return;
  }
  glEnable(0xb60);
  glFogf(0xb65,DAT_0003dfe4);
  glFogfv(0xb66,param_2);
  glFogf(0xb63);
  glFogf(0xb64);
  return;
}

