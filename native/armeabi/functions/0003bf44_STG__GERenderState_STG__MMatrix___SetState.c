/* 0003bf44 | STG::GERenderState<STG::MMatrix>::SetState */

/* STG::GERenderState<STG::MMatrix>::SetState(STG::MMatrix const&) */

void __thiscall
STG::GERenderState<STG::MMatrix>::SetState(GERenderState<STG::MMatrix> *this,MMatrix *param_1)

{
  GERendererAPI::GL_LoadMatrixMode(0x1700,param_1);
  return;
}

