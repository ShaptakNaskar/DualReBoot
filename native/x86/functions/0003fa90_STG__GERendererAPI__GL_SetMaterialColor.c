/* 0003fa90 | STG::GERendererAPI::GL_SetMaterialColor */

/* STG::GERendererAPI::GL_SetMaterialColor(STG::GEColor const&) */

void STG::GERendererAPI::GL_SetMaterialColor(GEColor *param_1)

{
  FUN_0002e044();
  glEnable(0xb57);
  glColor4f(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
            *(undefined4 *)(param_1 + 0xc));
  return;
}

