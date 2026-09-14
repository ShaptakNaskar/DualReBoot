/* 0003dc14 | STG::GERendererAPI::GL_SetMaterialColor */

/* STG::GERendererAPI::GL_SetMaterialColor(STG::GEColor const&) */

void STG::GERendererAPI::GL_SetMaterialColor(GEColor *param_1)

{
  glEnable(0xb57);
  (*(code *)PTR_glColor4f_00080eb4)
            (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  return;
}

