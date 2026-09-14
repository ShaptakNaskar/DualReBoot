/* 0003c558 | STG::GERendererAPI::GL_GetTextureIsSupported */

/* STG::GERendererAPI::GL_GetTextureIsSupported(STG::GEPixelFormat::EFormat) */

undefined4 STG::GERendererAPI::GL_GetTextureIsSupported(undefined4 param_1)

{
  undefined4 uVar1;
  
  switch(param_1) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    goto LAB_0003c5ac;
  case 3:
LAB_0003c5ac:
    uVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003c5d0 + 0x3c5b8));
    return uVar1;
  case 4:
    goto LAB_0003c5a0;
  case 5:
    goto LAB_0003c5a0;
  case 6:
    goto LAB_0003c5a0;
  case 7:
LAB_0003c5a0:
    uVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003c5cc + 0x3c5ac));
    return uVar1;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    uVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003c5c8 + 0x3c5a0));
    return uVar1;
  default:
    return 0;
  }
  return 1;
}

