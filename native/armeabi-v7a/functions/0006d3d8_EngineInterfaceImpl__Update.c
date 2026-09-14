/* 0006d3d8 | EngineInterfaceImpl::Update */

/* EngineInterfaceImpl::Update(int, int, int, float, float, long long, double, float, unsigned char)
   const */

int EngineInterfaceImpl::Update
              (int param_1,int param_2,int param_3,float param_4,float param_5,longlong param_6,
              double param_7,float param_8,uchar param_9)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong in_r3;
  GERenderer_Android *this;
  int iVar5;
  undefined4 uVar6;
  code *pcVar7;
  uint *puVar8;
  UTime *this_00;
  GEScene *this_01;
  bool bVar9;
  uint in_fpscr;
  uint local_2f8;
  uint local_2f4;
  double local_2f0;
  UTimeValue aUStack_2e8 [8];
  int iStack_2e0;
  int iStack_2dc;
  float local_2d4;
  float local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined1 auStack_2bc [16];
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  float local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  GECamera aGStack_248 [100];
  undefined4 local_1e4;
  
  iVar5 = DAT_0006d778 + 0x6d3fc;
  if (param_2 == 0) {
    return 0;
  }
  this = *(GERenderer_Android **)param_2;
  this_01 = *(GEScene **)(param_2 + 8);
  if ((int)(in_r3 * param_3) < 1) {
    return param_2;
  }
  local_2f0 = param_7;
  STG::GERenderer_Android::SetWindowData(this,param_3,in_r3);
  if (this[0x378] == (GERenderer_Android)0x0) {
    STG::GERenderer::Initialize((GERenderer *)this);
    puVar8 = *(uint **)(iVar5 + DAT_0006d77c);
    if ((*puVar8 & 1) == 0) goto LAB_0006d66c;
LAB_0006d450:
    this_00 = *(UTime **)(iVar5 + DAT_0006d780);
  }
  else {
    puVar8 = *(uint **)(iVar5 + DAT_0006d77c);
    if ((*puVar8 & 1) != 0) goto LAB_0006d450;
LAB_0006d66c:
    iVar3 = thunk_FUN_0007004c(puVar8);
    this_00 = *(UTime **)(iVar5 + DAT_0006d780);
    if (iVar3 != 0) {
      STG::UTime::UTime(this_00);
      thunk_FUN_000700b0(puVar8);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar5 + DAT_0006d784),
                     *(undefined4 *)(iVar5 + DAT_0006d788));
    }
  }
  STG::UTime::GetCurrentTime_US();
  if (((*puVar8 & 1) == 0) && (iVar3 = thunk_FUN_0007004c(puVar8), iVar3 != 0)) {
    STG::UTime::UTime(this_00);
    thunk_FUN_000700b0(puVar8);
    __aeabi_atexit(this_00,*(undefined4 *)(iVar5 + DAT_0006d784),
                   *(undefined4 *)(iVar5 + DAT_0006d788));
  }
  STG::UTime::GetStartTime_US();
  lVar1 = (param_6 & 0xffffffffU) * 1000;
  uVar2 = (uint)lVar1;
  uVar4 = param_6._4_4_ * 1000 + (int)((ulonglong)lVar1 >> 0x20);
  bVar9 = uVar4 <= local_2f4;
  if (local_2f4 == uVar4) {
    bVar9 = uVar2 <= local_2f8;
  }
  if (bVar9) {
    iStack_2e0 = 0;
    iStack_2dc = 0;
  }
  else {
    iStack_2e0 = uVar2 - local_2f8;
    iStack_2dc = uVar4 - (local_2f4 + (uVar2 < local_2f8));
  }
  STG::GERenderer::SetFocus((GERenderer *)this);
  uVar6 = *(undefined4 *)(this + 0x370);
  local_2c4 = *(undefined4 *)(this + 0x36c);
  local_2cc = 0;
  local_2c0 = 0;
  local_2c8 = uVar6;
  STG::GEViewport::GEViewport((GEViewport *)&local_28c,(URectangle *)&local_2cc);
  local_2d0 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  local_2d0 = local_2d0 - param_5;
  local_2d4 = param_4;
  STG::GEScene::UpdateSimulation(this_01,aUStack_2e8,(UTimeValue *)&iStack_2e0,&local_2f0);
  STG::GEScene::UpdateRendering
            (this_01,(UTimeValue *)&iStack_2e0,(MVector2 *)&local_2d4,(GEViewport *)&local_28c);
  pcVar7 = *(code **)(*(int *)this + 8);
  STG::GEScene::GetClearColor();
  (*pcVar7)(this,auStack_2bc);
  (**(code **)(*(int *)this + 0xc))(this,&local_28c);
  (**(code **)(*(int *)this + 0x10))(this,this_01 + 0x35c);
  STG::GERenderer::Draw((GERenderer *)this,this_01);
  (**(code **)(*(int *)this + 0x14))(this);
  bVar9 = param_8 <= DAT_0006d774;
  if (param_9 == '\x01') {
    STG::GECamera::GECamera(aGStack_248);
    local_1e4 = 2;
    (**(code **)(*(int *)this + 0x10))(this,aGStack_248);
    STG::GERenderer::DrawVignette((GERenderer *)this);
    if (bVar9) {
      (**(code **)(*(int *)this + 0x14))(this);
      STG::GECamera::~GECamera(aGStack_248);
      goto LAB_0006d63c;
    }
  }
  else {
    if (param_8 <= DAT_0006d774) goto LAB_0006d63c;
    STG::GECamera::GECamera(aGStack_248);
    local_1e4 = 2;
    (**(code **)(*(int *)this + 0x10))(this,aGStack_248);
  }
  local_2ac = local_28c;
  local_29c = 0;
  local_298 = 0;
  local_2a8 = local_288;
  local_294 = 0;
  local_2a4 = local_284;
  local_2a0 = local_280;
  local_290 = param_8;
  STG::GERenderer::Draw
            ((GERenderer *)this,(URectangle *)&local_2ac,*(GEMaterial **)(param_2 + 4),
             (GEColor *)&local_29c,false);
  (**(code **)(*(int *)this + 0x14))(this);
  STG::GECamera::~GECamera(aGStack_248);
LAB_0006d63c:
  (**(code **)(*(int *)this + 0x18))(this);
  (**(code **)(*(int *)this + 0x1c))(this);
  return param_2;
}

