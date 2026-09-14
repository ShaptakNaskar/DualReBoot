/* 0003cf90 | STG::GERenderState<STG::MMatrix>::SetState */

/* STG::GERenderState<STG::MMatrix>::SetState(STG::MMatrix const&) */

void __thiscall
STG::GERenderState<STG::MMatrix>::SetState(GERenderState<STG::MMatrix> *this,MMatrix *param_1)

{
  FUN_0002e044();
  GERendererAPI::GL_LoadMatrixMode(0x1700,param_1);
  return;
}

