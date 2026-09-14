/* 0003b6e8 | STG::GERendererAPI::GL_Clear */

/* STG::GERendererAPI::GL_Clear(STG::GEColor const&, unsigned long) */

void STG::GERendererAPI::GL_Clear(GEColor *param_1,ulong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  glClearColor(*(undefined4 *)param_1,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  if ((param_2 & 1) == 0) {
    uVar2 = 0x500;
    uVar3 = 0x100;
    uVar4 = 0x400;
    uVar1 = 0;
  }
  else {
    uVar2 = 0x4500;
    uVar3 = 0x4100;
    uVar4 = 0x4400;
    uVar1 = 0x4000;
  }
  if ((param_2 & 2) != 0) {
    uVar1 = uVar3;
    uVar4 = uVar2;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar4;
  }
  (*(code *)PTR_glClear_0007decc)(uVar1);
  return;
}

