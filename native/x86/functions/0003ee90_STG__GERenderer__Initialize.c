/* 0003ee90 | STG::GERenderer::Initialize */

/* STG::GERenderer::Initialize() */

GERenderer __thiscall STG::GERenderer::Initialize(GERenderer *this)

{
  char *pcVar1;
  UTime *this_00;
  GERenderer GVar2;
  int iVar3;
  int unaff_EBX;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 uStack_20;
  
  FUN_0002e044();
  pcVar1 = *(char **)(unaff_EBX + 0x5d00b);
  this_00 = *(UTime **)(unaff_EBX + 0x5d00f);
  if (*pcVar1 == '\0') {
    iVar3 = FUN_00080eb0(pcVar1);
    if (iVar3 != 0) {
      UTime::UTime(this_00);
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x5d013),this_00,*(undefined4 *)(unaff_EBX + 0x5cfc7)
                  );
    }
  }
  UTime::GetCurrentTime_US();
  *(long *)(this + 0x358) = local_34;
  *(undefined4 *)(this + 0x35c) = local_30;
  *(undefined4 *)(this + 0x360) = 0;
  *(undefined4 *)(this + 0x364) = 0;
  srand48(local_34);
  *(undefined4 *)(this + 0x368) = 0;
  *(undefined4 *)(this + 0xfc) = 0;
  SetFogEnabled(SUB41(this,0));
  puVar4 = &local_2c;
  local_2c = 0x3f800000;
  local_28 = 0x3f800000;
  local_24 = 0x3f800000;
  uStack_20 = 0x3f800000;
  uVar6 = 0x3f800000;
  uVar5 = 0;
  SetFogState((GEColor *)this,(float)puVar4,0.0);
  GVar2 = (GERenderer)(**(code **)(*(int *)this + 0x24))(this,puVar4,uVar5,uVar6);
  this[0x378] = GVar2;
  GERendererAPI::GL_RegisterExtensions();
  GERendererAPI::GL_QueryCapabilities((Capabilities *)(this + 0x374));
  AllocateResources(this);
  SetMultiSampleEnabled(this,false);
  return this[0x378];
}

