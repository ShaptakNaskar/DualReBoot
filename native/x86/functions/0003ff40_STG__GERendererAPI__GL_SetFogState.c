/* 0003ff40 | STG::GERendererAPI::GL_SetFogState */

/* STG::GERendererAPI::GL_SetFogState(bool, STG::GEColor const&, float, float) */

void STG::GERendererAPI::GL_SetFogState(bool param_1,GEColor *param_2,float param_3,float param_4)

{
  FUN_0002e044();
  if (!param_1) {
    glDisable();
    return;
  }
  glEnable(0xb60);
  glFogf(0xb65,0x46180400);
  glFogfv(0xb66,param_2);
  glFogf(0xb63,param_3);
  glFogf(0xb64,param_4);
  return;
}

