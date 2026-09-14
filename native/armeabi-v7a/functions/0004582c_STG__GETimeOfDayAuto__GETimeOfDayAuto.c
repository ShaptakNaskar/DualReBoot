/* 0004582c | STG::GETimeOfDayAuto::GETimeOfDayAuto */

/* STG::GETimeOfDayAuto::GETimeOfDayAuto() */

GETimeOfDayAuto * __thiscall STG::GETimeOfDayAuto::GETimeOfDayAuto(GETimeOfDayAuto *this)

{
  MLocation::MLocation((MLocation *)this);
  SolarData::SolarData((SolarData *)(this + 8));
  return this;
}

