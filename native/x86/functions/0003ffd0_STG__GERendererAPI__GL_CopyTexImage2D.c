/* 0003ffd0 | STG::GERendererAPI::GL_CopyTexImage2D */

/* STG::GERendererAPI::GL_CopyTexImage2D(unsigned long, unsigned long) */

void STG::GERendererAPI::GL_CopyTexImage2D(ulong param_1,ulong param_2)

{
  FUN_0002e044();
  glCopyTexImage2D(0xde1,0,0x1907,0,0,param_1,param_2,0);
  return;
}

