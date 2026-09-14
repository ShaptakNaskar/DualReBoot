/* 0003d668 | STG::GERenderer::BeginFrame */

/* STG::GERenderer::BeginFrame(STG::GEColor const&) */

void __thiscall STG::GERenderer::BeginFrame(GERenderer *this,GEColor *param_1)

{
  int iVar1;
  code *pcVar2;
  UTime *this_00;
  int iVar3;
  uint *puVar4;
  uint local_20;
  int local_1c;
  
  iVar3 = DAT_0003d784;
  *(undefined4 *)(this + 0x100) = 1;
  iVar3 = iVar3 + 0x3d684;
  puVar4 = *(uint **)(iVar3 + DAT_0003d788);
  if ((*puVar4 & 1) == 0) {
    iVar1 = thunk_FUN_00074338(puVar4);
    this_00 = *(UTime **)(iVar3 + DAT_0003d78c);
    if (iVar1 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000743a0(puVar4);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_0003d790),
                     *(undefined4 *)(iVar3 + DAT_0003d794));
    }
  }
  UTime::GetCurrentTime_US();
  *(uint *)(this + 0x360) = local_20 - *(uint *)(this + 0x358);
  *(uint *)(this + 0x364) =
       local_1c - (*(int *)(this + 0x35c) + (uint)(local_20 < *(uint *)(this + 0x358)));
  *(uint *)(this + 0x358) = local_20;
  *(int *)(this + 0x35c) = local_1c;
  pcVar2 = *(code **)(*(int *)this + 0x2c);
  *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  (*pcVar2)(this);
  Internal_SetColorMask(this,1);
  Internal_Clear(this,param_1,7);
  GERendererAPI::GL_ResetMatrixMode(0x1700);
  GERendererAPI::GL_ResetMatrixMode(0x1701);
  GERendererAPI::GL_ResetMatrixMode(0x1702);
  Internal_SetColorMask(this,0);
  return;
}

