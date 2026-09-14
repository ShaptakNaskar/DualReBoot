/* 0006c0a0 | STG::UTime::ComputeSolarEvents */

/* STG::UTime::ComputeSolarEvents(STG::MLocation const&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&, long&)
   const */

bool STG::UTime::ComputeSolarEvents
               (MLocation *param_1,MExplicitType *param_2,MExplicitType *param_3,long *param_4)

{
  UTime *this;
  MExplicitType *pMVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined4 *extraout_ECX;
  undefined8 uVar4;
  TimeStruct local_70 [28];
  undefined4 local_54;
  MLocation **local_18;
  
  local_18 = &param_1;
  uVar4 = FUN_0002e044();
  this = (UTime *)*extraout_ECX;
  pMVar1 = (MExplicitType *)extraout_ECX[3];
  puVar2 = (undefined4 *)extraout_ECX[4];
  GetTime_UTC();
  cVar3 = ComputeSolarEvents(this,local_70,(MLocation *)uVar4,
                             (MExplicitType *)((ulonglong)uVar4 >> 0x20),pMVar1);
  if (cVar3 != '\0') {
    *puVar2 = local_54;
  }
  return cVar3 != '\0';
}

