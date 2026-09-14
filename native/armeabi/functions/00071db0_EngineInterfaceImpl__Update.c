/* 00071db0 | EngineInterfaceImpl::Update */

/* EngineInterfaceImpl::Update(int, int, int, float, float, long long, double, float, unsigned char)
   const */

int EngineInterfaceImpl::Update
              (int param_1,int param_2,int param_3,float param_4,float param_5,longlong param_6,
              double param_7,float param_8,uchar param_9)

{
  int iVar1;
  uint uVar2;
  ulong in_r3;
  uint uVar3;
  GERenderer_Android *this;
  GEScene *this_00;
  int iVar4;
  uint *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  UTime *this_01;
  bool bVar8;
  undefined3 in_stack_00000009;
  int in_stack_0000000c;
  undefined4 in_stack_00000018;
  char in_stack_0000001c;
  uint local_2e0;
  uint local_2dc;
  UTimeValue aUStack_2d8 [8];
  int iStack_2d0;
  int iStack_2cc;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined1 auStack_2ac [16];
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined4 local_270;
  GECamera aGStack_238 [100];
  undefined4 local_1d4;
  
  iVar4 = DAT_00072154 + 0x71dc8;
  if (param_2 == 0) {
    return 0;
  }
  this = *(GERenderer_Android **)param_2;
  this_00 = *(GEScene **)(param_2 + 8);
  if ((int)(in_r3 * param_3) < 1) {
    return param_2;
  }
  STG::GERenderer_Android::SetWindowData(this,param_3,in_r3);
  if (this[0x378] == (GERenderer_Android)0x0) {
    STG::GERenderer::Initialize((GERenderer *)this);
    puVar5 = *(uint **)(iVar4 + DAT_00072158);
    if ((*puVar5 & 1) != 0) goto LAB_00071e14;
LAB_0007204c:
    iVar1 = thunk_FUN_00074338(puVar5);
    this_01 = *(UTime **)(iVar4 + DAT_0007215c);
    if (iVar1 != 0) {
      STG::UTime::UTime(this_01);
      thunk_FUN_000743a0(puVar5);
      __aeabi_atexit(this_01,*(undefined4 *)(iVar4 + DAT_00072164),
                     *(undefined4 *)(iVar4 + DAT_00072168));
    }
  }
  else {
    puVar5 = *(uint **)(iVar4 + DAT_00072158);
    if ((*puVar5 & 1) == 0) goto LAB_0007204c;
LAB_00071e14:
    this_01 = *(UTime **)(iVar4 + DAT_0007215c);
  }
  STG::UTime::GetCurrentTime_US();
  if (((*puVar5 & 1) == 0) && (iVar1 = thunk_FUN_00074338(puVar5), iVar1 != 0)) {
    STG::UTime::UTime(this_01);
    thunk_FUN_000743a0(puVar5);
    __aeabi_atexit(this_01,*(undefined4 *)(iVar4 + DAT_00072164),
                   *(undefined4 *)(iVar4 + DAT_00072168));
  }
  STG::UTime::GetStartTime_US();
  uVar2 = (uint)((ulonglong)_param_9 * 1000);
  uVar3 = in_stack_0000000c * 1000 + (int)((ulonglong)_param_9 * 1000 >> 0x20);
  bVar8 = uVar3 <= local_2dc;
  if (local_2dc == uVar3) {
    bVar8 = uVar2 <= local_2e0;
  }
  if (bVar8) {
    iStack_2d0 = 0;
    iStack_2cc = 0;
  }
  else {
    iStack_2d0 = uVar2 - local_2e0;
    iStack_2cc = uVar3 - (local_2dc + (uVar2 < local_2e0));
  }
  STG::GERenderer::SetFocus((GERenderer *)this);
  uVar6 = *(undefined4 *)(this + 0x370);
  local_2b4 = *(undefined4 *)(this + 0x36c);
  local_2bc = 0;
  local_2b0 = 0;
  local_2b8 = uVar6;
  STG::GEViewport::GEViewport((GEViewport *)&local_27c,(URectangle *)&local_2bc);
  local_2c4 = (undefined4)param_6;
  uVar6 = __floatunsisf(uVar6);
  local_2c0 = __subsf3(uVar6,param_6._4_4_);
  STG::GEScene::UpdateSimulation
            (this_00,aUStack_2d8,(UTimeValue *)&iStack_2d0,(double *)&stack0x00000010);
  STG::GEScene::UpdateRendering
            (this_00,(UTimeValue *)&iStack_2d0,(MVector2 *)&local_2c4,(GEViewport *)&local_27c);
  pcVar7 = *(code **)(*(int *)this + 8);
  STG::GEScene::GetClearColor();
  (*pcVar7)(this,auStack_2ac);
  (**(code **)(*(int *)this + 0xc))(this,&local_27c);
  (**(code **)(*(int *)this + 0x10))(this,this_00 + 0x35c);
  STG::GERenderer::Draw((GERenderer *)this,this_00);
  (**(code **)(*(int *)this + 0x14))(this);
  iVar4 = __aeabi_fcmpgt(in_stack_00000018,DAT_00072160);
  if (in_stack_0000001c == '\x01') {
    STG::GECamera::GECamera(aGStack_238);
    local_1d4 = 2;
    (**(code **)(*(int *)this + 0x10))(this,aGStack_238);
    STG::GERenderer::DrawVignette((GERenderer *)this);
    if (iVar4 == 0) {
      (**(code **)(*(int *)this + 0x14))(this);
      STG::GECamera::~GECamera(aGStack_238);
      goto LAB_00072020;
    }
  }
  else {
    if (iVar4 == 0) goto LAB_00072020;
    STG::GECamera::GECamera(aGStack_238);
    local_1d4 = 2;
    (**(code **)(*(int *)this + 0x10))(this,aGStack_238);
  }
  local_29c = local_27c;
  local_298 = local_278;
  local_294 = local_274;
  local_28c = 0;
  local_288 = 0;
  local_284 = 0;
  local_290 = local_270;
  local_280 = in_stack_00000018;
  STG::GERenderer::Draw
            ((URectangle *)this,(GEMaterial *)&local_29c,*(GEColor **)(param_2 + 4),
             (bool)((char)&stack0xffffffdc + -0x68));
  (**(code **)(*(int *)this + 0x14))(this);
  STG::GECamera::~GECamera(aGStack_238);
LAB_00072020:
  (**(code **)(*(int *)this + 0x18))(this);
  (**(code **)(*(int *)this + 0x1c))(this);
  return param_2;
}

