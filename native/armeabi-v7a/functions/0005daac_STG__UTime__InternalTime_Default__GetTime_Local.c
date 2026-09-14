/* 0005daac | STG::UTime::InternalTime_Default::GetTime_Local */

/* STG::UTime::InternalTime_Default::GetTime_Local(tm*) const */

void __thiscall
STG::UTime::InternalTime_Default::GetTime_Local(InternalTime_Default *this,tm *param_1)

{
  time_t tStack_c;
  
  time(&tStack_c);
  localtime_r(&tStack_c,param_1);
  return;
}

