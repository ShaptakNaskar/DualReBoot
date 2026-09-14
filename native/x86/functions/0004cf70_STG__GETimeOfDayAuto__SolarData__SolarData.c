/* 0004cf70 | STG::GETimeOfDayAuto::SolarData::SolarData */

/* STG::GETimeOfDayAuto::SolarData::SolarData() */

void __thiscall STG::GETimeOfDayAuto::SolarData::SolarData(SolarData *this)

{
  FUN_0002e044();
  *(undefined4 *)this = 0xffffffff;
  *(undefined4 *)(this + 4) = 0xffffffff;
  MLocation::MLocation((MLocation *)(this + 8));
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  this[0x14] = (SolarData)0x0;
  return;
}

