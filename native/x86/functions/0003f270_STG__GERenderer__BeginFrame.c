/* 0003f270 | STG::GERenderer::BeginFrame */

/* STG::GERenderer::BeginFrame(STG::GEColor const&) */

void __thiscall STG::GERenderer::BeginFrame(GERenderer *this,GEColor *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int unaff_EBX;
  UTime *this_00;
  uint local_24;
  int iStack_20;
  
  FUN_0002e044();
  pcVar2 = *(char **)(unaff_EBX + 0x5cc2b);
  this_00 = *(UTime **)(unaff_EBX + 0x5cc2f);
  cVar1 = *pcVar2;
  *(undefined4 *)(this + 0x100) = 1;
  if (cVar1 == '\0') {
    iVar3 = FUN_00080eb0(pcVar2);
    if (iVar3 != 0) {
      UTime::UTime(this_00);
      FUN_00080f40(pcVar2);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x5cc33),this_00,*(undefined4 *)(unaff_EBX + 0x5cbe7)
                  );
    }
  }
  UTime::GetCurrentTime_US();
  *(uint *)(this + 0x360) = local_24 - *(uint *)(this + 0x358);
  *(uint *)(this + 0x364) =
       (iStack_20 - *(int *)(this + 0x35c)) - (uint)(local_24 < *(uint *)(this + 0x358));
  *(uint *)(this + 0x358) = local_24;
  *(int *)(this + 0x35c) = iStack_20;
  *(int *)(this + 0x368) = *(int *)(this + 0x368) + 1;
  (**(code **)(*(int *)this + 0x2c))(this,this_00);
  Internal_SetColorMask(this,1);
  Internal_Clear(this,param_1,7);
  GERendererAPI::GL_ResetMatrixMode(0x1700);
  GERendererAPI::GL_ResetMatrixMode(0x1701);
  GERendererAPI::GL_ResetMatrixMode(0x1702);
  Internal_SetColorMask(this,0);
  return;
}

