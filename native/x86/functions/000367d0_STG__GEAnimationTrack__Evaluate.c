/* 000367d0 | STG::GEAnimationTrack::Evaluate */

/* STG::GEAnimationTrack::Evaluate(STG::GEAnimationTimeData::EDriver, STG::GEAnimationTimeData
   const&, bool, STG::UTimeValue<unsigned long long, 1ul> const&) const */

longdouble __thiscall
STG::GEAnimationTrack::Evaluate
          (GEAnimationTrack *this,undefined4 param_2,undefined4 param_3,undefined1 param_4,
          undefined4 param_5)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  float fVar3;
  int local_30 [4];
  float local_20 [4];
  undefined4 uStack_10;
  
  uStack_10 = 0x367da;
  FUN_0002e044();
  cVar1 = Evaluate(this,param_2,param_3,param_4,param_5,local_30,local_20);
  if (cVar1 == '\0') {
    fVar3 = *(float *)this;
  }
  else {
    iVar2 = local_30[0] * 0x3c + *(int *)(this + 0x10);
    fVar3 = *(float *)(unaff_EBX + 0x50ece) - local_20[0];
    fVar3 = local_20[0] * local_20[0] *
            (*(float *)(unaff_EBX + 0x50ed6) * *(float *)(iVar2 + 0x28) * fVar3 +
            *(float *)(iVar2 + 0x2c) * local_20[0]) +
            fVar3 * fVar3 *
            (*(float *)(iVar2 + 0x24) * local_20[0] * *(float *)(unaff_EBX + 0x50ed6) +
            *(float *)(iVar2 + 0x20) * fVar3);
  }
  return (longdouble)fVar3;
}

