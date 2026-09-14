/* 0003da04 | STG::GERendererAPI::GL_SetColorMask */

/* STG::GERendererAPI::GL_SetColorMask(STG::GERendererAPI::EColorMask) */

void STG::GERendererAPI::GL_SetColorMask(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_0003da28 + 0x3db40 + param_1 * 4;
  (*(code *)PTR_glColorMask_00080eb8)
            (*(undefined1 *)(DAT_0003da28 + 0x3db40 + param_1 * 4),*(undefined1 *)(iVar1 + 1),
             *(undefined1 *)(iVar1 + 2),*(undefined1 *)(iVar1 + 3));
  return;
}

