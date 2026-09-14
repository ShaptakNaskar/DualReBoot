/* 00038c18 | STG::GEEnvironmentGroup::~GEEnvironmentGroup */

/* STG::GEEnvironmentGroup::~GEEnvironmentGroup() */

GEEnvironmentGroup * __thiscall
STG::GEEnvironmentGroup::~GEEnvironmentGroup(GEEnvironmentGroup *this)

{
  GEEnvironmentGroup *this_00;
  
  if (this != (GEEnvironmentGroup *)0x0) {
    this_00 = this + 0x1e0;
    do {
      this_00 = this_00 + -0x3c;
      GEEnvironmentSettings::~GEEnvironmentSettings((GEEnvironmentSettings *)this_00);
    } while (this != this_00);
  }
  return this;
}

