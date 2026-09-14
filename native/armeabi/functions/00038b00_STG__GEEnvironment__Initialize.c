/* 00038b00 | STG::GEEnvironment::Initialize */

/* STG::GEEnvironment::Initialize(unsigned long) */

void __thiscall STG::GEEnvironment::Initialize(GEEnvironment *this,ulong param_1)

{
  undefined4 *puVar1;
  GEEnvironmentGroup *this_00;
  GEEnvironmentGroup *pGVar2;
  
  if (param_1 == 0) {
    param_1 = 1;
  }
  if (param_1 != *(ulong *)(this + 4)) {
    if (*(ulong *)(this + 4) != 0) {
      pGVar2 = *(GEEnvironmentGroup **)this;
      if (pGVar2 != (GEEnvironmentGroup *)0x0) {
        this_00 = pGVar2 + *(int *)(pGVar2 + -4) * 0x1e0;
        if (pGVar2 != this_00) {
          do {
            this_00 = this_00 + -0x1e0;
            GEEnvironmentGroup::~GEEnvironmentGroup(this_00);
            pGVar2 = *(GEEnvironmentGroup **)this;
          } while (pGVar2 != this_00);
        }
        operator_delete__(pGVar2 + -8);
      }
      *(undefined4 *)this = 0;
    }
    *(ulong *)(this + 4) = param_1;
    puVar1 = operator_new__(param_1 * 0x1e0 + 8);
    *puVar1 = 0x1e0;
    puVar1[1] = param_1;
    pGVar2 = (GEEnvironmentGroup *)(puVar1 + 2);
    while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
      GEEnvironmentGroup::GEEnvironmentGroup(pGVar2);
      pGVar2 = pGVar2 + 0x1e0;
    }
    *(GEEnvironmentGroup **)this = (GEEnvironmentGroup *)(puVar1 + 2);
  }
  this[8] = (GEEnvironment)0x1;
  return;
}

