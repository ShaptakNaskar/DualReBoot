/* 0003f6d0 | STG::GERendererAPI::GL_SetColor */

/* STG::GERendererAPI::GL_SetColor(STG::GEColor const&) */

void STG::GERendererAPI::GL_SetColor(GEColor *param_1)

{
  FUN_0002e044();
  glColor4f(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
            *(undefined4 *)(param_1 + 0xc));
  return;
}

