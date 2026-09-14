/* 00047c18 | STG::GETimeOfDayAuto::ResultData::ResultData */

/* STG::GETimeOfDayAuto::ResultData::ResultData() */

ResultData * __thiscall STG::GETimeOfDayAuto::ResultData::ResultData(ResultData *this)

{
  GETimeOfDay::GETimeOfDay((GETimeOfDay *)this);
  MLocation::MLocation((MLocation *)(this + 8));
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  *(undefined4 *)(this + 0x14) = 0xffffffff;
  *(undefined4 *)(this + 0x18) = 0xffffffff;
  *(undefined4 *)(this + 0x1c) = 0xffffffff;
  this[0x20] = (ResultData)0x0;
  return this;
}

