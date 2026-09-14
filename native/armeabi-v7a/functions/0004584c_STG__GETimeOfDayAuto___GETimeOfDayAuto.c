/* 0004584c | STG::GETimeOfDayAuto::~GETimeOfDayAuto */

/* STG::GETimeOfDayAuto::~GETimeOfDayAuto() */

GETimeOfDayAuto * __thiscall STG::GETimeOfDayAuto::~GETimeOfDayAuto(GETimeOfDayAuto *this)

{
  SolarData::~SolarData((SolarData *)(this + 8));
  return this;
}

