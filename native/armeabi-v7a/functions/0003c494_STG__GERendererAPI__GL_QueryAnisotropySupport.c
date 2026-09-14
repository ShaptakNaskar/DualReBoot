/* 0003c494 | STG::GERendererAPI::GL_QueryAnisotropySupport */

/* STG::GERendererAPI::GL_QueryAnisotropySupport() */

undefined1 STG::GERendererAPI::GL_QueryAnisotropySupport(void)

{
  undefined1 uVar1;
  int iVar2;
  float local_c [2];
  
  iVar2 = GL_GetIsExtensionSupported((char *)(DAT_0003c538 + 0x3c4a4));
  uVar1 = 0;
  if (iVar2 != 0) {
    glGetFloatv(0x84ff,local_c);
    if (4.0 <= local_c[0]) {
      uVar1 = 2;
      if (8.0 <= local_c[0]) {
        uVar1 = 3;
      }
      if (16.0 <= local_c[0]) {
        uVar1 = 4;
      }
    }
    else {
      uVar1 = 2.0 <= local_c[0];
      if (8.0 <= local_c[0]) {
        uVar1 = 3;
      }
      if (16.0 <= local_c[0]) {
        uVar1 = 4;
      }
    }
  }
  return uVar1;
}

