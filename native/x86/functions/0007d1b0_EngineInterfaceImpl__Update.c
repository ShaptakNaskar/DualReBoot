/* 0007d1b0 | EngineInterfaceImpl::Update */

/* EngineInterfaceImpl::Update(int, int, int, float, float, long long, double, float, unsigned char)
   const */

undefined4 *
EngineInterfaceImpl::Update
          (int param_1,int param_2,int param_3,float param_4,float param_5,longlong param_6,
          double param_7,float param_8,uchar param_9)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  int iVar5;
  undefined4 *puVar6;
  UTimeValue *this;
  GERenderer_Android *this_00;
  char *pcVar7;
  code *pcVar8;
  bool bVar9;
  bool bVar10;
  longlong lVar11;
  uint uVar12;
  int iVar13;
  int extraout_ECX;
  uint uVar14;
  int unaff_EBX;
  undefined4 uVar15;
  GECamera *local_2e4;
  uint local_2e0;
  uint local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  int local_2d0;
  int local_2cc;
  UTimeValue local_2c4 [8];
  undefined4 local_2bc;
  float local_2b8;
  undefined4 local_2b4;
  uint local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined1 local_2a4 [16];
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  float local_278;
  undefined4 local_274;
  undefined4 local_270;
  undefined4 local_26c;
  undefined4 local_268;
  GECamera local_230 [100];
  undefined4 local_1cc;
  undefined4 local_18;
  
  local_18 = 0x7d1c5;
  FUN_0002e044();
  uVar12 = *(uint *)(extraout_ECX + 0x18);
  uVar1 = *(undefined4 *)(extraout_ECX + 0x10);
  iVar5 = *(int *)(extraout_ECX + 0x1c);
  fVar2 = *(float *)(extraout_ECX + 0x14);
  puVar6 = *(undefined4 **)(extraout_ECX + 4);
  fVar3 = *(float *)(extraout_ECX + 0x28);
  local_2d8 = *(undefined4 *)(extraout_ECX + 0x20);
  local_2d4 = *(undefined4 *)(extraout_ECX + 0x24);
  local_2e4._0_1_ = (char)*(undefined4 *)(extraout_ECX + 0x2c);
  if (puVar6 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  this = (UTimeValue *)puVar6[2];
  this_00 = (GERenderer_Android *)*puVar6;
  if ((int)(*(ulong *)(extraout_ECX + 8) * *(ulong *)(extraout_ECX + 0xc)) < 1) {
    return puVar6;
  }
  STG::GERenderer_Android::SetWindowData
            (this_00,*(ulong *)(extraout_ECX + 8),*(ulong *)(extraout_ECX + 0xc));
  if (this_00[0x378] == (GERenderer_Android)0x0) {
    STG::GERenderer::Initialize((GERenderer *)this_00);
    pcVar7 = *(char **)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0xf);
    cVar4 = *pcVar7;
  }
  else {
    pcVar7 = *(char **)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0xf);
    cVar4 = *pcVar7;
  }
  if ((cVar4 == '\0') && (iVar13 = FUN_00080eb0(pcVar7), iVar13 != 0)) {
    STG::UTime::UTime(*(UTime **)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x13));
    FUN_00080f40(*(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0xf));
    __cxa_atexit(*(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x17),
                 *(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x13),
                 *(undefined4 *)
                  (
                  "_ZNK3STG13GETextureSwap14FindByFileHashERKNS_9FFileHashERmRbS5_RNS_11GETimeOfDayES4_"
                  + unaff_EBX + 0x20));
  }
  uVar15 = *(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x13);
  STG::UTime::GetCurrentTime_US();
  if ((**(char **)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0xf) == '\0') &&
     (iVar13 = FUN_00080eb0(*(char **)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0xf),
                            uVar15), iVar13 != 0)) {
    STG::UTime::UTime(*(UTime **)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x13));
    FUN_00080f40(*(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0xf));
    __cxa_atexit(*(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x17),
                 *(undefined4 *)("_ZN3STG22GETextureSwapContainerC2Ev" + unaff_EBX + 0x13),
                 *(undefined4 *)
                  (
                  "_ZNK3STG13GETextureSwap14FindByFileHashERKNS_9FFileHashERmRbS5_RNS_11GETimeOfDayES4_"
                  + unaff_EBX + 0x20));
  }
  STG::UTime::GetStartTime_US((UTime *)&local_2e0);
  lVar11 = (ulonglong)uVar12 * 1000;
  uVar12 = (uint)lVar11;
  uVar14 = (int)((ulonglong)lVar11 >> 0x20) + iVar5 * 1000;
  if ((uVar14 < local_2dc) || ((uVar14 <= local_2dc && (uVar12 <= local_2e0)))) {
    local_2d0 = 0;
    local_2cc = 0;
  }
  else {
    local_2d0 = uVar12 - local_2e0;
    local_2cc = (uVar14 - local_2dc) - (uint)(uVar12 < local_2e0);
  }
  STG::GERenderer::SetFocus((GERenderer *)this_00);
  uVar12 = *(uint *)(this_00 + 0x370);
  local_2ac = *(undefined4 *)(this_00 + 0x36c);
  local_2b4 = 0;
  local_2a8 = 0;
  local_2b0 = uVar12;
  STG::GEViewport::GEViewport((GEViewport *)&local_274,(URectangle *)&local_2b4);
  local_2b8 = ((float)(uVar12 >> 0x10) * *(float *)(unaff_EBX + 0xa4f7) + (float)(uVar12 & 0xffff))
              - fVar2;
  local_2bc = uVar1;
  STG::GEScene::UpdateSimulation(this,local_2c4,(double *)&local_2d0);
  STG::GEScene::UpdateRendering
            ((GEScene *)this,(UTimeValue *)&local_2d0,(MVector2 *)&local_2bc,
             (GEViewport *)&local_274);
  pcVar8 = *(code **)(*(int *)this_00 + 8);
  STG::GEScene::GetClearColor();
  (*pcVar8)(this_00,local_2a4);
  (**(code **)(*(int *)this_00 + 0xc))(this_00,(GEViewport *)&local_274);
  (**(code **)(*(int *)this_00 + 0x10))(this_00,this + 0x350);
  STG::GERenderer::Draw((GERenderer *)this_00,(GEScene *)this);
  (**(code **)(*(int *)this_00 + 0x14))(this_00);
  bVar9 = fVar3 != *(float *)(unaff_EBX + 0xa5b3);
  bVar10 = *(float *)(unaff_EBX + 0xa5b3) <= fVar3;
  if ((char)local_2e4 == '\x01') {
    STG::GECamera::GECamera(local_230);
    local_1cc = 2;
    (**(code **)(*(int *)this_00 + 0x10))(this_00,local_230);
    STG::GERenderer::DrawVignette((GERenderer *)this_00);
    if (bVar10 && bVar9) goto LAB_0007d4ee;
  }
  else {
    if (!bVar10 || !bVar9) goto LAB_0007d5e3;
    STG::GECamera::GECamera(local_230);
    local_1cc = 2;
    (**(code **)(*(int *)this_00 + 0x10))(this_00,local_230);
LAB_0007d4ee:
    local_294 = local_274;
    local_290 = local_270;
    local_28c = local_26c;
    local_288 = local_268;
    local_284 = 0;
    local_280 = 0;
    local_27c = 0;
    local_278 = fVar3;
    STG::GERenderer::Draw
              ((GERenderer *)this_00,(URectangle *)&local_294,(GEMaterial *)puVar6[1],
               (GEColor *)&local_284,false);
  }
  local_2e4 = local_230;
  (**(code **)(*(int *)this_00 + 0x14))(this_00);
  STG::GECamera::~GECamera(local_2e4);
LAB_0007d5e3:
  (**(code **)(*(int *)this_00 + 0x18))(this_00);
  (**(code **)(*(int *)this_00 + 0x1c))(this_00);
  return puVar6;
}

