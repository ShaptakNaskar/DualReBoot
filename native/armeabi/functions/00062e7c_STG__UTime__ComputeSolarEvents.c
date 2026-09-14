/* 00062e7c | STG::UTime::ComputeSolarEvents */

/* STG::UTime::ComputeSolarEvents(STG::MLocation const&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&,
   STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned long>&, long&)
   const */

bool __thiscall
STG::UTime::ComputeSolarEvents
          (UTime *this,MLocation *param_1,MExplicitType *param_2,MExplicitType *param_3,
          long *param_4)

{
  int iVar1;
  TimeStruct aTStack_68 [28];
  long local_4c;
  
  GetTime_UTC();
  iVar1 = ComputeSolarEvents(this,aTStack_68,param_1,param_2,param_3);
  if (iVar1 != 0) {
    *param_4 = local_4c;
  }
  return iVar1 != 0;
}

