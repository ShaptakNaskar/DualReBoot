/* 0003b568 | STG::GERendererAPI::GL_SetColor */

/* STG::GERendererAPI::GL_SetColor(STG::GEColor const&) */

void STG::GERendererAPI::GL_SetColor(GEColor *param_1)

{
  (*(code *)PTR_glColor4f_0007deac)
            (*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
             *(undefined4 *)(param_1 + 0xc));
  return;
}

