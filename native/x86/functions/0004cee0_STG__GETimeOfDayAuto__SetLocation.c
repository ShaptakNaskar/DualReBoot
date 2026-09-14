/* 0004cee0 | STG::GETimeOfDayAuto::SetLocation */

/* STG::GETimeOfDayAuto::SetLocation(STG::MLocation const&) */

void __thiscall STG::GETimeOfDayAuto::SetLocation(GETimeOfDayAuto *this,MLocation *param_1)

{
  FUN_0002e044();
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)(param_1 + 4);
  MLocation::IsValid((MLocation *)this);
  return;
}

