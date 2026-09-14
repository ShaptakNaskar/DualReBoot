/* 0003cf60 | STG::GERenderState<STG::GEColor>::SetState */

/* STG::GERenderState<STG::GEColor>::SetState(STG::GEColor const&) */

void __thiscall
STG::GERenderState<STG::GEColor>::SetState(GERenderState<STG::GEColor> *this,GEColor *param_1)

{
  FUN_0002e044();
  GERendererAPI::GL_SetColor(param_1);
  return;
}

