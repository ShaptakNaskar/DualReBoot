/* 0004d3d0 | STG::GETimeOfDayAuto::Update */

/* STG::GETimeOfDayAuto::Update() */

TimeStruct * STG::GETimeOfDayAuto::Update(void)

{
  char *pcVar1;
  UTime *this;
  int iVar2;
  int unaff_EBX;
  TimeStruct *in_stack_00000004;
  TimeStruct *in_stack_00000008;
  UTime *pUVar3;
  
  FUN_0002e044();
  pcVar1 = *(char **)(GETexture::GetPixel + unaff_EBX + 2);
  this = *(UTime **)(unaff_EBX + 0x4eac6);
  if (*pcVar1 == '\0') {
    iVar2 = FUN_00080eb0(pcVar1);
    if (iVar2 != 0) {
      UTime::UTime(this);
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x4eaca),this,*(undefined4 *)(unaff_EBX + 0x4ea7e));
    }
  }
  pUVar3 = this;
  UTime::GetTime_Local();
  if (*pcVar1 == '\0') {
    iVar2 = FUN_00080eb0(pcVar1,pUVar3);
    if (iVar2 != 0) {
      UTime::UTime(this);
      FUN_00080f40(pcVar1);
      __cxa_atexit(*(undefined4 *)(unaff_EBX + 0x4eaca),this,*(undefined4 *)(unaff_EBX + 0x4ea7e));
    }
  }
  UTime::GetTime_UTC();
  Update(in_stack_00000004,in_stack_00000008);
  return in_stack_00000004;
}

