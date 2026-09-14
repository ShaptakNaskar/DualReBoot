/* 00039a70 | STG::GERenderer::BeginViewport */

/* STG::GERenderer::BeginViewport(STG::GEViewport const&) */

void __thiscall STG::GERenderer::BeginViewport(GERenderer *this,GEViewport *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined4 *)(this + 0x100) = 2;
  uVar3 = *(undefined4 *)(param_1 + 8);
  uVar2 = *(undefined4 *)param_1;
  uVar1 = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x318) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x314) = uVar2;
  *(undefined4 *)(this + 0x31c) = uVar3;
  *(undefined4 *)(this + 800) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x324) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x328) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x32c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x330) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x334) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x338) = uVar1;
  uVar1 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x33c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x340) = uVar1;
  uVar3 = *(undefined4 *)(param_1 + 0x34);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(this + 0x344) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x348) = uVar3;
  *(undefined4 *)(this + 0x34c) = uVar2;
  *(undefined4 *)(this + 0x350) = uVar4;
  *(undefined4 *)(this + 0x354) = uVar1;
  GERendererAPI::GL_Viewport((URectangle *)(this + 0x314));
  return;
}

