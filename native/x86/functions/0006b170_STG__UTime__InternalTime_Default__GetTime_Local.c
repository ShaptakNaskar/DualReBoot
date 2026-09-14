/* 0006b170 | STG::UTime::InternalTime_Default::GetTime_Local */

/* STG::UTime::InternalTime_Default::GetTime_Local(tm*) const */

void __thiscall
STG::UTime::InternalTime_Default::GetTime_Local(InternalTime_Default *this,tm *param_1)

{
  time_t local_10 [2];
  
  FUN_0002e044();
  time(local_10);
  localtime_r(local_10,param_1);
  return;
}

