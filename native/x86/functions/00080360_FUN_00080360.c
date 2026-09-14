/* 00080360 | FUN_00080360 */

void FUN_00080360(undefined4 param_1)

{
  int iVar1;
  code *pcVar2;
  int unaff_EBX;
  
  FUN_0002e044();
  fprintf((FILE *)(*(int *)("_ZN3STG13GERendererAPI17GL_GetTextureEnumENS_13GEPixelFormat7EFormatE"
                           + unaff_EBX + 4) + 0xa8),(char *)(unaff_EBX + 0x71fc),param_1);
  iVar1 = dlopen(unaff_EBX + 0x720d,0);
  if (iVar1 != 0) {
    pcVar2 = (code *)dlsym(iVar1,unaff_EBX + 0x7217);
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(7,unaff_EBX + 0x722b,param_1);
    }
    dlclose(iVar1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_000814f0();
}

