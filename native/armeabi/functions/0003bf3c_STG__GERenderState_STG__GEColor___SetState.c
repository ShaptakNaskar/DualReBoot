/* 0003bf3c | STG::GERenderState<STG::GEColor>::SetState */

/* STG::GERenderState<STG::GEColor>::SetState(STG::GEColor const&) */

void __thiscall
STG::GERenderState<STG::GEColor>::SetState(GERenderState<STG::GEColor> *this,GEColor *param_1)

{
  GERendererAPI::GL_SetColor(param_1);
  return;
}

