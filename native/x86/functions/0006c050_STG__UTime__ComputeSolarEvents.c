/* 0006c050 | STG::UTime::ComputeSolarEvents */

/* STG::UTime::ComputeSolarEvents(STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0> const&,
   STG::MLocation const&, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>,
   unsigned long>&, STG::MExplicitType<STG::UTime::TimeStruct<(STG::UTime::ETimeValue)0>, unsigned
   long>&) const */

void __thiscall
STG::UTime::ComputeSolarEvents
          (UTime *this,TimeStruct *param_1,MLocation *param_2,MExplicitType *param_3,
          MExplicitType *param_4)

{
  FUN_0002e044();
  ComputeSolarEvents(this,*(long *)(param_1 + 0x1c),param_2,param_3,param_4);
  return;
}

