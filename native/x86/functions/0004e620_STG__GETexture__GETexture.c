/* 0004e620 | STG::GETexture::GETexture */

/* STG::GETexture::GETexture() */

void __thiscall STG::GETexture::GETexture(GETexture *this)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int unaff_EBX;
  
  FUN_0002e044();
  iVar1 = *(int *)(GEVertexBlender::Update + unaff_EBX + 3);
  uVar3 = *(undefined4 *)(unaff_EBX + 0x3924b);
  uVar4 = *(undefined4 *)(unaff_EBX + 0x3924f);
  uVar5 = *(undefined4 *)(unaff_EBX + 0x39253);
  *(undefined4 *)(this + 0x88) = *(undefined4 *)(GEEnvironment::~GEEnvironment + unaff_EBX + 7);
  *(undefined4 *)(this + 0x8c) = uVar3;
  *(undefined4 *)(this + 0x90) = uVar4;
  *(undefined4 *)(this + 0x94) = uVar5;
  *(GETexture **)(this + 0x1c) = this + 0xc;
  *(GETexture **)(this + 0x20) = this + 0xc;
  iVar2 = *(int *)(unaff_EBX + 0x4d89b);
  *(int *)(this + 8) = iVar1 + 8;
  *(int *)this = iVar2 + 8;
  iVar2 = *(int *)(unaff_EBX + 0x4d897);
  *(int *)(this + 0x6c) = iVar1 + 8;
  *(int *)(this + 0x3c) = iVar2 + 8;
  *(undefined4 *)(this + 4) = 1;
  this[0xc] = (GETexture)0x0;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 3;
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x34) = 0;
  *(undefined4 *)(this + 0x38) = 0;
  *(undefined2 *)(this + 0x40) = 0;
  *(GETexture **)(this + 0x60) = this + 0x40;
  *(GETexture **)(this + 100) = this + 0x40;
  *(undefined4 *)(this + 0x68) = 0;
  this[0x70] = (GETexture)0x0;
  *(GETexture **)(this + 0x80) = this + 0x70;
  *(GETexture **)(this + 0x84) = this + 0x70;
  return;
}

