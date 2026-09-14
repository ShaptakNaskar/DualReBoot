/* 00039b64 | STG::GERenderState<STG::MMatrix>::RestoreState */

/* STG::GERenderState<STG::MMatrix>::RestoreState() */

void STG::GERenderState<STG::MMatrix>::RestoreState(void)

{
  GERendererAPI::GL_ResetMatrixMode(0x1700);
  return;
}

