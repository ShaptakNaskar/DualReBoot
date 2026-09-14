/* 0003ea70 | STG::GERendererAPI::GL_GetTextureIsSupported */

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
    goto LAB_0003eac4;
  case 3:
LAB_0003eac4:
    uVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003eae8 + 0x3ead0));
    return uVar1;
  case 4:
    goto LAB_0003eab8;
  case 5:
    goto LAB_0003eab8;
  case 6:
    goto LAB_0003eab8;
  case 7:
LAB_0003eab8:
    uVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003eae4 + 0x3eac4));
    return uVar1;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    uVar1 = GL_GetIsExtensionSupported((char *)(DAT_0003eae0 + 0x3eab8));
    return uVar1;
  default:
    return 0;
  }
  return 1;
}

