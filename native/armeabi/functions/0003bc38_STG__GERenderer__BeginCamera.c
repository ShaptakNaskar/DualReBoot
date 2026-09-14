/* 0003bc38 | STG::GERenderer::BeginCamera */

/* STG::GERenderer::BeginCamera(STG::GECamera const&) */

void __thiscall STG::GERenderer::BeginCamera(GERenderer *this,GECamera *param_1)

{
  GERenderer GVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *(undefined4 *)(this + 0x100) = 3;
  uVar4 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(this + 0x10c) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(this + 0x110) = uVar4;
  *(undefined4 *)(this + 0x108) = uVar2;
  *(undefined4 *)(this + 0x114) = *(undefined4 *)(param_1 + 0x10);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(this + 0x118) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(this + 0x11c) = uVar2;
  *(undefined4 *)(this + 0x120) = uVar4;
  *(undefined4 *)(this + 0x124) = *(undefined4 *)(param_1 + 0x20);
  uVar2 = *(undefined4 *)(param_1 + 0x28);
  uVar4 = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(this + 0x128) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(this + 300) = uVar2;
  *(undefined4 *)(this + 0x130) = uVar4;
  *(undefined4 *)(this + 0x134) = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined4 *)(param_1 + 0x38);
  uVar4 = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(this + 0x138) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(this + 0x13c) = uVar2;
  *(undefined4 *)(this + 0x140) = uVar4;
  *(undefined4 *)(this + 0x144) = *(undefined4 *)(param_1 + 0x40);
  uVar2 = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(this + 0x148) = *(undefined4 *)(param_1 + 0x44);
  uVar4 = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(this + 0x14c) = uVar2;
  *(undefined4 *)(this + 0x150) = uVar4;
  *(undefined4 *)(this + 0x154) = *(undefined4 *)(param_1 + 0x50);
  uVar2 = *(undefined4 *)(param_1 + 0x58);
  uVar4 = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(this + 0x158) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(this + 0x15c) = uVar2;
  *(undefined4 *)(this + 0x160) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(this + 0x164) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(this + 0x168) = uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x6c);
  uVar4 = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(this + 0x16c) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(this + 0x170) = uVar2;
  *(undefined4 *)(this + 0x174) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x78);
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(this + 0x178) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(this + 0x17c) = uVar2;
  *(undefined4 *)(this + 0x180) = uVar4;
  MMatrix::operator=((MMatrix *)(this + 0x184),(MMatrix *)(param_1 + 0x80));
  MMatrix::operator=((MMatrix *)(this + 0x1c4),(MMatrix *)(param_1 + 0xc0));
  MMatrix::operator=((MMatrix *)(this + 0x204),(MMatrix *)(param_1 + 0x100));
  MMatrix::operator=((MMatrix *)(this + 0x244),(MMatrix *)(param_1 + 0x140));
  MMatrix::operator=((MMatrix *)(this + 0x284),(MMatrix *)(param_1 + 0x180));
  uVar2 = *(undefined4 *)(param_1 + 0x1c4);
  uVar4 = *(undefined4 *)(param_1 + 0x1c8);
  *(undefined4 *)(this + 0x2c4) = *(undefined4 *)(param_1 + 0x1c0);
  *(undefined4 *)(this + 0x2c8) = uVar2;
  *(undefined4 *)(this + 0x2cc) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x1d0);
  uVar4 = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(this + 0x2d0) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(this + 0x2d4) = uVar2;
  *(undefined4 *)(this + 0x2d8) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x1dc);
  uVar4 = *(undefined4 *)(param_1 + 0x1e0);
  *(undefined4 *)(this + 0x2dc) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(this + 0x2e0) = uVar2;
  *(undefined4 *)(this + 0x2e4) = uVar4;
  uVar2 = *(undefined4 *)(param_1 + 0x1e8);
  uVar4 = *(undefined4 *)(param_1 + 0x1ec);
  uVar3 = *(undefined4 *)(param_1 + 0x1f0);
  uVar5 = *(undefined4 *)(param_1 + 500);
  *(undefined4 *)(this + 0x2e8) = *(undefined4 *)(param_1 + 0x1e4);
  *(undefined4 *)(this + 0x2ec) = uVar2;
  *(undefined4 *)(this + 0x2f0) = uVar4;
  *(undefined4 *)(this + 0x2f4) = uVar3;
  *(undefined4 *)(this + 0x2f8) = uVar5;
  uVar2 = *(undefined4 *)(param_1 + 0x1fc);
  uVar4 = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)(this + 0x2fc) = *(undefined4 *)(param_1 + 0x1f8);
  *(undefined4 *)(this + 0x300) = uVar2;
  *(undefined4 *)(this + 0x304) = uVar4;
  *(undefined4 *)(this + 0x308) = *(undefined4 *)(param_1 + 0x204);
  GVar1 = *(GERenderer *)(param_1 + 0x20c);
  *(undefined4 *)(this + 0x30c) = *(undefined4 *)(param_1 + 0x208);
  this[0x310] = GVar1;
  GECamera::ApplyViewport((GEViewport *)(this + 0x104));
  GECamera::BuildTransforms((GECamera *)(this + 0x104));
  GERendererAPI::GL_LoadMatrixMode(0x1701,(MMatrix *)(this + 0x244));
  GERendererAPI::GL_ResetMatrixMode(0x1700);
  return;
}

