/* 0003af6c | STG::GERenderer::Initialize */

/* STG::GERenderer::Initialize() */

GERenderer __thiscall STG::GERenderer::Initialize(GERenderer *this)

{
  GERenderer GVar1;
  int iVar2;
  UTime *this_00;
  int iVar3;
  uint *puVar4;
  long local_30;
  undefined4 local_2c;
  
  iVar3 = DAT_0003b098 + 0x3af88;
  puVar4 = *(uint **)(iVar3 + DAT_0003b09c);
  if ((*puVar4 & 1) == 0) {
    iVar2 = thunk_FUN_0007004c(puVar4);
    this_00 = *(UTime **)(iVar3 + DAT_0003b0a0);
    if (iVar2 != 0) {
      UTime::UTime(this_00);
      thunk_FUN_000700b0(puVar4);
      __aeabi_atexit(this_00,*(undefined4 *)(iVar3 + DAT_0003b0a4),
                     *(undefined4 *)(iVar3 + DAT_0003b0a8));
    }
  }
  UTime::GetCurrentTime_US();
  *(long *)(this + 0x358) = local_30;
  *(undefined4 *)(this + 0x35c) = local_2c;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  srand48(local_30);
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  SetFogEnabled(SUB41(this,0));
  SetFogState((GEColor *)this,DAT_0003b094,1.0);
  GVar1 = (GERenderer)(**(code **)(*(int *)this + 0x24))(this);
  this[0x378] = GVar1;
  GERendererAPI::GL_RegisterExtensions();
  GERendererAPI::GL_QueryCapabilities((Capabilities *)(this + 0x374));
  AllocateResources();
  SetMultiSampleEnabled(this,false);
  return this[0x378];
}

