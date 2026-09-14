/* 00046f20 | STG::GEScene::GEScene */

/* STG::GEScene::GEScene(STG::MLocation const&) */

void __thiscall STG::GEScene::GEScene(GEScene *this,MLocation *param_1)

{
  GEScene *pGVar1;
  int iVar2;
  GEScene *pGVar3;
  uint uVar4;
  uint uVar5;
  int unaff_EBX;
  GEScene *pGVar6;
  bool bVar7;
  byte bVar8;
  
  bVar8 = 0;
  FUN_0002e044();
  *(int *)(this + 8) = *(int *)(unaff_EBX + 0x54f13) + 8;
  *(GEScene **)(this + 0x1c) = this + 0xc;
  *(GEScene **)(this + 0x20) = this + 0xc;
  iVar2 = *(int *)(unaff_EBX + 0x54f8f);
  *(undefined4 *)(this + 4) = 1;
  this[0xc] = (GEScene)0x0;
  *(int *)this = iVar2 + 8;
  *(undefined4 *)(this + 0x24) = 0xffffffff;
  *(undefined4 *)(this + 0x28) = 0;
  UPreference_Scene::UPreference_Scene((UPreference_Scene *)(this + 0x2c));
  *(undefined4 *)(this + 0xa4) = 0;
  *(undefined4 *)(this + 0xa8) = 0;
  *(undefined4 *)(this + 0xac) = 0;
  *(undefined4 *)(this + 0xb0) = 0;
  *(undefined4 *)(this + 0xb4) = 0;
  *(undefined4 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xbc) = 0;
  *(undefined4 *)(this + 0xc0) = 0;
  *(undefined4 *)(this + 0xc4) = 0;
  *(undefined4 *)(this + 200) = 0;
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
  *(undefined4 *)(this + 0x104) = 0;
  *(undefined4 *)(this + 0x108) = 0;
  *(undefined4 *)(this + 0x10c) = 0;
  *(undefined4 *)(this + 0x110) = 0;
  *(undefined4 *)(this + 0x114) = 0;
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined4 *)(this + 0x11c) = 0;
  *(undefined4 *)(this + 0x120) = 0;
  *(undefined4 *)(this + 0x124) = 0;
  pGVar6 = this + 0x22c;
  *(undefined4 *)(this + 0x128) = 0;
  *(undefined4 *)(this + 300) = 0;
  *(undefined4 *)(this + 0x130) = 0;
  *(undefined4 *)(this + 0x134) = 0;
  *(undefined4 *)(this + 0x138) = 0;
  *(undefined4 *)(this + 0x13c) = 0;
  *(undefined4 *)(this + 0x140) = 0;
  *(undefined4 *)(this + 0x144) = 0;
  *(undefined4 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x14c) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined4 *)(this + 0x154) = 0;
  *(undefined4 *)(this + 0x158) = 0;
  *(undefined4 *)(this + 0x15c) = 0;
  *(undefined4 *)(this + 0x160) = 0;
  *(undefined4 *)(this + 0x164) = 0;
  *(undefined4 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x16c) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined4 *)(this + 0x174) = 0;
  *(undefined4 *)(this + 0x178) = 0;
  *(undefined4 *)(this + 0x17c) = 0;
  *(undefined4 *)(this + 0x180) = 0;
  *(undefined4 *)(this + 0x184) = 0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x18c) = 0;
  *(undefined4 *)(this + 400) = 0;
  *(undefined4 *)(this + 0x194) = 0;
  *(undefined4 *)(this + 0x198) = 0;
  *(undefined4 *)(this + 0x19c) = 0;
  *(undefined4 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 0x1a4) = 0;
  *(undefined4 *)(this + 0x1a8) = 0;
  *(undefined4 *)(this + 0x1ac) = 0;
  *(undefined4 *)(this + 0x1b0) = 0;
  *(undefined4 *)(this + 0x1b4) = 0;
  *(undefined4 *)(this + 0x1b8) = 0;
  *(undefined4 *)(this + 0x1bc) = 0;
  *(undefined4 *)(this + 0x1c0) = 0;
  *(undefined4 *)(this + 0x1c4) = 0;
  *(undefined4 *)(this + 0x1c8) = 0;
  *(undefined4 *)(this + 0x1cc) = 0;
  *(undefined4 *)(this + 0x1d0) = 0;
  *(undefined4 *)(this + 0x1d4) = 0;
  *(undefined4 *)(this + 0x1d8) = 0;
  *(undefined4 *)(this + 0x1dc) = 0;
  *(undefined4 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1e4) = 0;
  *(undefined4 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1ec) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined4 *)(this + 500) = 0;
  *(undefined4 *)(this + 0x1f8) = 0;
  *(undefined4 *)(this + 0x1fc) = 0;
  *(undefined4 *)(this + 0x200) = 0;
  *(undefined4 *)(this + 0x204) = 0;
  *(undefined4 *)(this + 0x208) = 0;
  *(undefined4 *)(this + 0x20c) = 0;
  *(undefined4 *)(this + 0x210) = 0;
  *(undefined4 *)(this + 0x214) = 0;
  *(undefined4 *)(this + 0x218) = 0;
  this[0x21c] = (GEScene)0x1;
  this[0x21d] = (GEScene)0x0;
  this[0x21e] = (GEScene)0x0;
  this[0x228] = (GEScene)0x0;
  *(undefined8 *)(this + 0x220) = 0;
  pGVar3 = pGVar6;
  do {
    *(undefined4 *)pGVar3 = 0;
    *(undefined4 *)(pGVar3 + 4) = 0;
    pGVar1 = pGVar3 + 0x10;
    *(undefined4 *)(this + (int)(pGVar3 + (0x234 - (int)pGVar6))) = 1;
    *(undefined4 *)(this + (int)(pGVar3 + (0x238 - (int)pGVar6))) = 0;
    pGVar3 = pGVar1;
  } while (pGVar1 != this + 0x2ec);
  *(undefined4 *)(this + 0x2ec) = 0;
  *(undefined4 *)(this + 0x2f0) = 0;
  *(undefined4 *)(this + 0x2f4) = 0;
  *(undefined4 *)(this + 0x2f8) = 0;
  *(undefined4 *)(this + 0x2fc) = 0;
  *(undefined4 *)(this + 0x300) = 0;
  *(undefined4 *)(this + 0x304) = 0;
  pGVar6 = this + 0x654;
  GEEnvironment::GEEnvironment((GEEnvironment *)(this + 0x308));
  *(undefined4 *)(this + 0x314) = 0;
  GETextureModifier::GETextureModifier((GETextureModifier *)(this + 0x318));
  GECamera::GECamera((GECamera *)(this + 0x350));
  *(undefined4 *)(this + 0x560) = 0;
  *(undefined4 *)(this + 0x564) = 0;
  *(undefined4 *)(this + 0x568) = 0;
  *(undefined4 *)(this + 0x56c) = 0;
  *(undefined4 *)(this + 0x570) = 0;
  *(undefined4 *)(this + 0x574) = 0;
  *(undefined4 *)(this + 0x578) = 0;
  *(undefined4 *)(this + 0x57c) = 0;
  *(undefined4 *)(this + 0x580) = 0;
  *(undefined4 *)(this + 0x584) = 0;
  *(undefined4 *)(this + 0x588) = 0;
  *(undefined4 *)(this + 0x58c) = 0;
  *(undefined4 *)(this + 0x590) = 0;
  *(undefined4 *)(this + 0x594) = 0;
  this[0x598] = (GEScene)0x0;
  *(undefined4 *)(this + 0x59c) = 0;
  *(undefined4 *)(this + 0x5a0) = 0;
  *(undefined4 *)(this + 0x5a4) = 0;
  *(undefined4 *)(this + 0x5a8) = 0;
  *(undefined4 *)(this + 0x5ac) = 0;
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)(this + 0x5b0));
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)(this + 0x5b8));
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)(this + 0x5c0));
  GETimeOfDayAuto::GETimeOfDayAuto((GETimeOfDayAuto *)(this + 0x5c8));
  GETimeOfDayAuto::ResultData::ResultData((ResultData *)(this + 0x5e8));
  GETimeOfDayAuto::ResultData::ResultData((ResultData *)(this + 0x60c));
  bVar7 = ((uint)pGVar6 & 1) != 0;
  *(undefined4 *)(this + 0x630) = 0xffffffff;
  *(undefined4 *)(this + 0x634) = 0xffffffff;
  *(undefined4 *)(this + 0x638) = 0xffffffff;
  *(undefined4 *)(this + 0x63c) = 0xffffffff;
  *(undefined4 *)(this + 0x640) = 0xffffffff;
  *(undefined4 *)(this + 0x644) = 0xffffffff;
  *(undefined4 *)(this + 0x648) = 0xffffffff;
  *(undefined4 *)(this + 0x64c) = 0xffffffff;
  *(undefined4 *)(this + 0x650) = 0xffffffff;
  uVar5 = 0x2c;
  if (bVar7) {
    pGVar6 = this + 0x655;
    this[0x654] = (GEScene)0x0;
    uVar5 = 0x2b;
  }
  if (((uint)pGVar6 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    uVar5 = uVar5 - 2;
    pGVar6 = pGVar6 + 2;
  }
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pGVar6 = 0;
    pGVar6 = pGVar6 + (uint)bVar8 * -8 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    pGVar6 = pGVar6 + 2;
  }
  if (bVar7) {
    *pGVar6 = (GEScene)0x0;
  }
  pGVar6 = this + 0x6a4;
  *(undefined4 *)(this + 0x680) = 0xffffffff;
  bVar7 = ((uint)pGVar6 & 1) != 0;
  *(undefined4 *)(this + 0x684) = 0xffffffff;
  *(undefined4 *)(this + 0x688) = 0xffffffff;
  *(undefined4 *)(this + 0x68c) = 0xffffffff;
  *(undefined4 *)(this + 0x690) = 0xffffffff;
  *(undefined4 *)(this + 0x694) = 0xffffffff;
  *(undefined4 *)(this + 0x698) = 0xffffffff;
  *(undefined4 *)(this + 0x69c) = 0xffffffff;
  *(undefined4 *)(this + 0x6a0) = 0xffffffff;
  uVar5 = 0x2c;
  if (bVar7) {
    pGVar6 = this + 0x6a5;
    this[0x6a4] = (GEScene)0x0;
    uVar5 = 0x2b;
  }
  if (((uint)pGVar6 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    uVar5 = uVar5 - 2;
    pGVar6 = pGVar6 + 2;
  }
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pGVar6 = 0;
    pGVar6 = pGVar6 + (uint)bVar8 * -8 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    pGVar6 = pGVar6 + 2;
  }
  if (bVar7) {
    *pGVar6 = (GEScene)0x0;
  }
  pGVar6 = this + 0x6f4;
  *(undefined4 *)(this + 0x6d0) = 0xffffffff;
  bVar7 = ((uint)pGVar6 & 1) != 0;
  *(undefined4 *)(this + 0x6d4) = 0xffffffff;
  *(undefined4 *)(this + 0x6d8) = 0xffffffff;
  *(undefined4 *)(this + 0x6dc) = 0xffffffff;
  *(undefined4 *)(this + 0x6e0) = 0xffffffff;
  *(undefined4 *)(this + 0x6e4) = 0xffffffff;
  *(undefined4 *)(this + 0x6e8) = 0xffffffff;
  *(undefined4 *)(this + 0x6ec) = 0xffffffff;
  *(undefined4 *)(this + 0x6f0) = 0xffffffff;
  uVar5 = 0x2c;
  if (bVar7) {
    pGVar6 = this + 0x6f5;
    this[0x6f4] = (GEScene)0x0;
    uVar5 = 0x2b;
  }
  if (((uint)pGVar6 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    uVar5 = uVar5 - 2;
    pGVar6 = pGVar6 + 2;
  }
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pGVar6 = 0;
    pGVar6 = pGVar6 + (uint)bVar8 * -8 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    pGVar6 = pGVar6 + 2;
  }
  if (bVar7) {
    *pGVar6 = (GEScene)0x0;
  }
  pGVar6 = this + 0x744;
  *(undefined4 *)(this + 0x720) = 0xffffffff;
  bVar7 = ((uint)pGVar6 & 1) != 0;
  *(undefined4 *)(this + 0x724) = 0xffffffff;
  *(undefined4 *)(this + 0x728) = 0xffffffff;
  *(undefined4 *)(this + 0x72c) = 0xffffffff;
  *(undefined4 *)(this + 0x730) = 0xffffffff;
  *(undefined4 *)(this + 0x734) = 0xffffffff;
  *(undefined4 *)(this + 0x738) = 0xffffffff;
  *(undefined4 *)(this + 0x73c) = 0xffffffff;
  *(undefined4 *)(this + 0x740) = 0xffffffff;
  uVar5 = 0x2c;
  if (bVar7) {
    pGVar6 = this + 0x745;
    this[0x744] = (GEScene)0x0;
    uVar5 = 0x2b;
  }
  if (((uint)pGVar6 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    uVar5 = uVar5 - 2;
    pGVar6 = pGVar6 + 2;
  }
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined4 *)pGVar6 = 0;
    pGVar6 = pGVar6 + (uint)bVar8 * -8 + 4;
  }
  if ((uVar5 & 2) != 0) {
    *(undefined2 *)pGVar6 = 0;
    pGVar6 = pGVar6 + 2;
  }
  if (bVar7) {
    *pGVar6 = (GEScene)0x0;
  }
  this[0x770] = (GEScene)0x0;
  *(undefined4 *)(this + 0x774) = 0;
  *(undefined4 *)(this + 0x778) = 0;
  this[0x77c] = (GEScene)0x0;
  SetLocation(this,param_1);
  return;
}

