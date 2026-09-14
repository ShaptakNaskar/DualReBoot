/* 0003ce10 | STG::GERenderer::BeginViewport */

/* STG::GERenderer::BeginViewport(STG::GEViewport const&) */

void __thiscall STG::GERenderer::BeginViewport(GERenderer *this,GEViewport *param_1)

{
  undefined4 uVar1;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x100) = 2;
  *(undefined4 *)(this + 0x314) = *(undefined4 *)param_1;
  *(undefined4 *)(this + 0x318) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x31c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 800) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(this + 0x324) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x328) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x32c) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(this + 0x330) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x334) = *(undefined4 *)(param_1 + 0x20);
  *(undefined4 *)(this + 0x338) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 0x33c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(this + 0x340) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x344) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(this + 0x348) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x34c) = *(undefined4 *)(param_1 + 0x38);
  uVar1 = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(this + 0x350) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x354) = uVar1;
  GERendererAPI::GL_Viewport((URectangle *)(this + 0x314));
  return;
}

