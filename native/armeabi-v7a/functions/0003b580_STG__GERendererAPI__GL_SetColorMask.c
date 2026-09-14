/* 0003b580 | STG::GERendererAPI::GL_SetColorMask */

/* STG::GERendererAPI::GL_SetColorMask(STG::GERendererAPI::EColorMask) */

void STG::GERendererAPI::GL_SetColorMask(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003b5a4 + 0x3b6bc + param_1 * 4;
  (*(code *)PTR_glColorMask_0007deb0)
            (*(undefined1 *)(DAT_0003b5a4 + 0x3b6bc + param_1 * 4),*(undefined1 *)(iVar1 + 1),
             *(undefined1 *)(iVar1 + 2),*(undefined1 *)(iVar1 + 3));
  return;
}

