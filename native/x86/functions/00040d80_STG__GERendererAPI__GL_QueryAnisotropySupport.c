/* 00040d80 | STG::GERendererAPI::GL_QueryAnisotropySupport */

/* STG::GERendererAPI::GL_QueryAnisotropySupport() */

undefined1 STG::GERendererAPI::GL_QueryAnisotropySupport(void)

{
  char cVar1;
  undefined1 uVar2;
  int unaff_EBX;
  float local_10 [2];
  undefined4 uStack_8;
  
  uStack_8 = 0x40d86;
  FUN_0002e044();
  cVar1 = GL_GetIsExtensionSupported((char *)(unaff_EBX + 0x46c72));
  if (cVar1 == '\0') {
    return 0;
  }
  glGetFloatv(0x84ff,local_10);
  uVar2 = 2;
  if (local_10[0] < *(float *)(GEScene::GetValidAnimCount_Camera_Pos + unaff_EBX + 6)) {
    uVar2 = *(float *)(unaff_EBX + 0x4695a) <= local_10[0];
  }
  if (*(float *)(unaff_EBX + 0x4695e) <= local_10[0]) {
    uVar2 = 3;
  }
  if (*(float *)(unaff_EBX + 0x46962) <= local_10[0]) {
    uVar2 = 4;
  }
  return uVar2;
}

