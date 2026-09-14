/* 00039420 | STG::GEEnvironmentGroup::~GEEnvironmentGroup */

/* STG::GEEnvironmentGroup::~GEEnvironmentGroup() */

void __thiscall STG::GEEnvironmentGroup::~GEEnvironmentGroup(GEEnvironmentGroup *this)

{
  GEEnvironmentSettings *this_00;
  
  FUN_0002e044();
  if (this != (GEEnvironmentGroup *)0x0) {
    this_00 = (GEEnvironmentSettings *)(this + 0x1e0);
    do {
      this_00 = this_00 + -0x3c;
      GEEnvironmentSettings::~GEEnvironmentSettings(this_00);
    } while (this != (GEEnvironmentGroup *)this_00);
  }
  return;
}

