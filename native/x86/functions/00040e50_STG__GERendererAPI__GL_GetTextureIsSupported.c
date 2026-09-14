/* 00040e50 | STG::GERendererAPI::GL_GetTextureIsSupported */

/* STG::GERendererAPI::GL_GetTextureIsSupported(STG::GEPixelFormat::EFormat) */

void STG::GERendererAPI::GL_GetTextureIsSupported(void)

{
  uint extraout_EDX;
  int unaff_EBX;
  
  FUN_0002e044();
  if (extraout_EDX < 0xc) {
                    /* WARNING: Could not recover jumptable at 0x00040e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(*(int *)(unaff_EBX + 0x46f80 + extraout_EDX * 4) + unaff_EBX + 0x5b194))();
    return;
  }
  return;
}

