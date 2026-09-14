/* 0006266c | STG::UTime::GetUTCOffset */

/* STG::UTime::GetUTCOffset() const */

void __thiscall STG::UTime::GetUTCOffset(UTime *this)

{
  TimeStruct aTStack_a8 [80];
  TimeStruct aTStack_58 [80];
  
  GetTime_Local();
  GetTime_UTC();
  GetUTCOffset(this,aTStack_a8,aTStack_58);
  return;
}

