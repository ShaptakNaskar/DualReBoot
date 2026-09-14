/* 0003cff0 | STG::GERenderer::GERenderer */

/* STG::GERenderer::GERenderer() */

void __thiscall STG::GERenderer::GERenderer(GERenderer *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int unaff_EBX;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = 0x3cffa;
  FUN_0002e044();
  uVar1 = *(undefined8 *)(unaff_EBX + 0x4a7d6);
  uVar2 = *(undefined8 *)(unaff_EBX + 0x4a7de);
  uVar3 = *(undefined8 *)(unaff_EBX + 0x4a7e6);
  uVar4 = *(undefined8 *)(unaff_EBX + 0x4a7ee);
  uVar5 = *(undefined8 *)(unaff_EBX + 0x4a7f6);
  uVar6 = *(undefined8 *)(unaff_EBX + 0x4a7fe);
  *(int *)this = *(int *)(unaff_EBX + 0x5eeae) + 8;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined8 *)(this + 0xc) = uVar2;
  *(undefined8 *)(this + 0x14) = uVar3;
  *(undefined8 *)(this + 0x1c) = uVar4;
  *(undefined8 *)(this + 0x24) = uVar5;
  *(undefined8 *)(this + 0x2c) = uVar6;
  *(undefined8 *)(this + 0x34) = uVar1;
  *(undefined8 *)(this + 0x3c) = uVar1;
  *(undefined8 *)(this + 0x44) = uVar3;
  *(undefined8 *)(this + 0x4c) = uVar1;
  *(undefined8 *)(this + 0x54) = uVar1;
  *(undefined8 *)(this + 0x5c) = uVar3;
  *(undefined8 *)(this + 100) = uVar1;
  *(undefined8 *)(this + 0x6c) = uVar1;
  *(undefined8 *)(this + 0x74) = uVar3;
  *(undefined8 *)(this + 0x7c) = uVar1;
  *(undefined8 *)(this + 0x84) = uVar1;
  *(undefined8 *)(this + 0x8c) = uVar3;
  *(undefined8 *)(this + 0x94) = uVar1;
  *(undefined8 *)(this + 0x9c) = uVar1;
  *(undefined8 *)(this + 0xa4) = uVar3;
  *(undefined8 *)(this + 0xac) = uVar1;
  *(undefined8 *)(this + 0xb4) = uVar1;
  *(undefined8 *)(this + 0xbc) = uVar3;
  *(undefined4 *)(this + 0xc4) = 8;
  this[200] = (GERenderer)0x0;
  this[0xc9] = (GERenderer)0x1;
  *(undefined4 *)(this + 0xcc) = 0;
  *(undefined4 *)(this + 0xd0) = 0;
  *(undefined4 *)(this + 0xd4) = 0;
  *(undefined4 *)(this + 0xd8) = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  *(undefined4 *)(this + 0xe0) = 0;
  *(undefined4 *)(this + 0xe4) = 0;
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined4 *)(this + 0xec) = 0;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined4 *)(this + 0xf4) = 0;
  *(undefined4 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  *(undefined4 *)(this + 0x100) = 0;
  GECamera::GECamera((GECamera *)(this + 0x104));
  local_20 = 0;
  local_1c = 1;
  local_18 = 1;
  local_14 = 0;
  GEViewport::GEViewport((GEViewport *)(this + 0x314),(URectangle *)&local_20);
  *(undefined4 *)(this + 0x358) = 0;
  *(undefined4 *)(this + 0x35c) = 0;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0x36c) = 0;
  *(undefined4 *)(this + 0x370) = 0;
  *(undefined4 *)(this + 0x374) = 0;
  this[0x378] = (GERenderer)0x0;
  return;
}

