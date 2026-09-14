/* 0003b1f0 | STG::GERenderer::BeginFrame */

/* STG::GERenderer::BeginFrame(STG::GEColor const&) */

void __thiscall STG::GERenderer::BeginFrame(GERenderer *this,GEColor *param_1)

{
  int iVar1;
  code *pcVar2;
  UTime *this_00;
  int iVar3;
  uint *puVar4;
  uint local_28;
  int local_24;
  
  iVar3 = DAT_0003b30c;
  *(undefined4 *)(this + 0x100) = 1;
  iVar3 = iVar3 + 0x3b214;
  puVar4 = *(uint **)(iVar3 + DAT_0003b310);
  if ((*puVar4 & 1) == 0) {
    iVar1 = thunk_FUN_0007004c(puVar4);
    this_00 = *(UTime **)(iVar3 + DAT_0003b314);
    if (iVar1 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000700b0(puVar4);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_0003b318),
                     *(undefined4 *)(iVar3 + DAT_0003b31c));
    }
  }
  UTime::GetCurrentTime_US();
  pcVar2 = *(code **)(*(int *)this + 0x2c);
  *(uint *)(this + 0x360) = local_28 - *(uint *)(this + 0x358);
  *(uint *)(this + 0x364) =
       local_24 - (*(int *)(this + 0x35c) + (uint)(local_28 < *(uint *)(this + 0x358)));
  *(uint *)(this + 0x358) = local_28;
  *(int *)(this + 0x35c) = local_24;
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

