/* 0006b130 | STG::UTime::InternalTime_Default::GetTime_UTC */

/* STG::UTime::InternalTime_Default::GetTime_UTC(tm*) const */

void __thiscall
STG::UTime::InternalTime_Default::GetTime_UTC(InternalTime_Default *this,tm *param_1)

{
  time_t local_10 [2];
  
  FUN_0002e044();
  time(local_10);
  gmtime_r(local_10,param_1);
  return;
}

