/* 0003e9b0 | STG::GERendererAPI::GL_QueryAnisotropySupport */

/* STG::GERendererAPI::GL_QueryAnisotropySupport() */

undefined1 STG::GERendererAPI::GL_QueryAnisotropySupport(void)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 local_14 [2];
  
  iVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003ea50 + 0x3e9c4));
  uVar2 = 0;
  if (iVar1 != 0) {
    glGetFloatv(0x84ff,local_14);
    iVar1 = __aeabi_fcmpge(local_14[0],0x40800000);
    if (iVar1 == 0) {
      iVar1 = __aeabi_fcmpge(local_14[0],0x40000000);
      uVar2 = iVar1 != 0;
    }
    else {
      uVar2 = 2;
    }
    iVar1 = __aeabi_fcmpge(local_14[0],0x41000000);
    if (iVar1 != 0) {
      uVar2 = 3;
    }
    iVar1 = __aeabi_fcmpge(local_14[0],0x41800000);
    if (iVar1 != 0) {
      uVar2 = 4;
    }
  }
  return uVar2;
}

