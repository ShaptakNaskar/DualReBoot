/* 0003ca50 | STG::GERenderer::BeginCamera */

/* STG::GERenderer::BeginCamera(STG::GECamera const&) */

void __thiscall STG::GERenderer::BeginCamera(GERenderer *this,GECamera *param_1)

{
  undefined8 uVar1;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x100) = 3;
  if (((GERenderer *)(param_1 + 0x14) < this + 0x108) ||
     (this + 0x118 < (GERenderer *)(param_1 + 4))) {
    uVar1 = *(undefined8 *)(param_1 + 0xc);
    *(undefined8 *)(this + 0x108) = *(undefined8 *)(param_1 + 4);
    *(undefined8 *)(this + 0x110) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x1c);
    *(undefined8 *)(this + 0x118) = *(undefined8 *)(param_1 + 0x14);
    *(undefined8 *)(this + 0x120) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x2c);
    *(undefined8 *)(this + 0x128) = *(undefined8 *)(param_1 + 0x24);
    *(undefined8 *)(this + 0x130) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x3c);
    *(undefined8 *)(this + 0x138) = *(undefined8 *)(param_1 + 0x34);
    *(undefined8 *)(this + 0x140) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x4c);
    *(undefined8 *)(this + 0x148) = *(undefined8 *)(param_1 + 0x44);
    *(undefined8 *)(this + 0x150) = uVar1;
    uVar1 = *(undefined8 *)(param_1 + 0x5c);
    *(undefined8 *)(this + 0x158) = *(undefined8 *)(param_1 + 0x54);
    *(undefined8 *)(this + 0x160) = uVar1;
  }
  else {
    *(undefined4 *)(this + 0x108) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 8);
    *(undefined4 *)(this + 0x110) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(this + 0x11c) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(this + 0x120) = *(undefined4 *)(param_1 + 0x1c);
    *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(this + 300) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(this + 0x130) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x34);
    *(undefined4 *)(this + 0x13c) = *(undefined4 *)(param_1 + 0x38);
    *(undefined4 *)(this + 0x140) = *(undefined4 *)(param_1 + 0x3c);
    *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x40);
    *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x44);
    *(undefined4 *)(this + 0x14c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(this + 0x150) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(this + 0x15c) = *(undefined4 *)(param_1 + 0x58);
    *(undefined4 *)(this + 0x160) = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x60);
  }
  *(undefined4 *)(this + 0x168) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x170) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(this + 0x174) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x17c) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(this + 0x180) = *(undefined4 *)(param_1 + 0x7c);
  MMatrix::operator=((MMatrix *)(this + 0x184),(MMatrix *)(param_1 + 0x80));
  MMatrix::operator=((MMatrix *)(this + 0x1c4),(MMatrix *)(param_1 + 0xc0));
  MMatrix::operator=((MMatrix *)(this + 0x204),(MMatrix *)(param_1 + 0x100));
  MMatrix::operator=((MMatrix *)(this + 0x244),(MMatrix *)(param_1 + 0x140));
  MMatrix::operator=((MMatrix *)(this + 0x284),(MMatrix *)(param_1 + 0x180));
  *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x2c8) = *(undefined4 *)(param_1 + 0x1c4);
  *(undefined4 *)(this + 0x2cc) = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(this + 0x2d0) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(this + 0x2d4) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(this + 0x2d8) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x2dc) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x2e0) = *(undefined4 *)(param_1 + 0x1dc);
  *(undefined4 *)(this + 0x2e4) = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(this + 0x2ec) = *(undefined4 *)(param_1 + 0x1e8);
  *(undefined4 *)(this + 0x2f0) = *(undefined4 *)(param_1 + 0x1ec);
  *(undefined4 *)(this + 0x2f4) = *(undefined4 *)(param_1 + 0x1f0);
  *(undefined4 *)(this + 0x2f8) = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(this + 0x2fc) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(this + 0x300) = *(undefined4 *)(param_1 + 0x1fc);
  *(undefined4 *)(this + 0x304) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)(this + 0x30c) = *(undefined4 *)(param_1 + 0x208);
  this[0x310] = *(GERenderer *)(param_1 + 0x20c);
  GECamera::ApplyViewport((GECamera *)(this + 0x104),(GEViewport *)(this + 0x314));
  GECamera::BuildTransforms((GECamera *)(this + 0x104));
  GERendererAPI::GL_LoadMatrixMode(0x1701,(MMatrix *)(this + 0x244));
  GERendererAPI::GL_ResetMatrixMode(0x1700);
  return;
}

