/* 0006b640 | STG::UTime::GetUTCOffset */

/* STG::UTime::GetUTCOffset() const */

void __thiscall STG::UTime::GetUTCOffset(UTime *this)

{
  TimeStruct aTStack_bc [80];
  TimeStruct local_6c [92];
  
  FUN_0002e044();
  GetTime_UTC();
  GetTime_Local();
  GetUTCOffset(this,aTStack_bc,local_6c);
  return;
}

