/* 0003f710 | STG::GERendererAPI::GL_SetColorMask */

/* STG::GERendererAPI::GL_SetColorMask(STG::GERendererAPI::EColorMask) */

void STG::GERendererAPI::GL_SetColorMask(int param_1)

{
  undefined1 *puVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  puVar1 = (undefined1 *)(unaff_EBX + 0x4884a + param_1 * 4);
  glColorMask(*puVar1,puVar1[1],puVar1[2],puVar1[3]);
  return;
}

