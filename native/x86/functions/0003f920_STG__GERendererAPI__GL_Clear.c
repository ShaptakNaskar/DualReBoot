/* 0003f920 | STG::GERendererAPI::GL_Clear */

/* STG::GERendererAPI::GL_Clear(STG::GEColor const&, unsigned long) */

void STG::GERendererAPI::GL_Clear(GEColor *param_1,ulong param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  
  puVar2 = (undefined4 *)FUN_0002e044();
  glClearColor(*puVar2,puVar2[1],puVar2[2],puVar2[3]);
  uVar3 = param_2 & 1;
  uVar4 = -uVar3 & 0x4000;
  uVar1 = (-(uint)(uVar3 == 0) & 0xffffc000) + 0x4400;
  if ((param_2 & 2) != 0) {
    uVar4 = (-(uint)(uVar3 == 0) & 0xffffc000) + 0x4100;
    uVar1 = (-(uint)(uVar3 == 0) & 0xffffc000) + 0x4500;
  }
  if ((param_2 & 4) != 0) {
    uVar4 = uVar1;
  }
  glClear(uVar4);
  return;
}

