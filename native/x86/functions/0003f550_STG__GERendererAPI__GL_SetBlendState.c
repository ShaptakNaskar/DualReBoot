/* 0003f550 | STG::GERendererAPI::GL_SetBlendState */

/* STG::GERendererAPI::GL_SetBlendState(STG::GERendererAPI::EBlendState) */

void STG::GERendererAPI::GL_SetBlendState(int param_1)

{
  undefined4 *puVar1;
  char cVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  puVar1 = (undefined4 *)(unaff_EBX + 0x48909 + param_1 * 0x18);
  glBlendFunc(*puVar1,puVar1[1]);
  glAlphaFunc(puVar1[3],puVar1[4]);
  if (*(char *)(puVar1 + 2) == '\0') {
    glDisable(0xbe2);
    cVar2 = *(char *)(puVar1 + 5);
  }
  else {
    glEnable();
    cVar2 = *(char *)(puVar1 + 5);
  }
  if (cVar2 == '\0') {
    glDisable();
    return;
  }
  glEnable(0xbc0);
  return;
}

