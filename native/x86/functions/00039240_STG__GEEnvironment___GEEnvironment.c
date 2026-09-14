/* 00039240 | STG::GEEnvironment::~GEEnvironment */

/* STG::GEEnvironment::~GEEnvironment() */

void __thiscall STG::GEEnvironment::~GEEnvironment(GEEnvironment *this)

{
  GEEnvironmentGroup *pGVar1;
  GEEnvironmentGroup *this_00;
  
  FUN_0002e044();
  if (*(int *)(this + 4) != 0) {
    pGVar1 = *(GEEnvironmentGroup **)this;
    if (pGVar1 != (GEEnvironmentGroup *)0x0) {
      this_00 = pGVar1 + *(int *)(pGVar1 + -4) * 0x1e0;
      if (pGVar1 != this_00) {
        do {
          this_00 = this_00 + -0x1e0;
          GEEnvironmentGroup::~GEEnvironmentGroup(this_00);
          pGVar1 = *(GEEnvironmentGroup **)this;
        } while (pGVar1 != this_00);
      }
      operator_delete__(pGVar1 + -4);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

