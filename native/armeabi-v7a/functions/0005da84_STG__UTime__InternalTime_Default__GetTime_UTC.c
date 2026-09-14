/* 0005da84 | STG::UTime::InternalTime_Default::GetTime_UTC */

/* STG::UTime::InternalTime_Default::GetTime_UTC(tm*) const */

void __thiscall
STG::UTime::InternalTime_Default::GetTime_UTC(InternalTime_Default *this,tm *param_1)

{
  time_t tStack_c;
  
  time(&tStack_c);
  gmtime_r(&tStack_c,param_1);
  return;
}

