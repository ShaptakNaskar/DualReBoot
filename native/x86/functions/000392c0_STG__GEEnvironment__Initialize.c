/* 000392c0 | STG::GEEnvironment::Initialize */

/* STG::GEEnvironment::Initialize(unsigned long) */

void __thiscall STG::GEEnvironment::Initialize(GEEnvironment *this,ulong param_1)

{
  ulong uVar1;
  ulong *puVar2;
  GEEnvironmentGroup *pGVar3;
  GEEnvironmentGroup *this_00;
  
  uVar1 = FUN_0002e044();
  if (param_1 == 0) {
    param_1 = uVar1;
  }
  if (param_1 != *(ulong *)(this + 4)) {
    if (*(ulong *)(this + 4) != 0) {
      pGVar3 = *(GEEnvironmentGroup **)this;
      if (pGVar3 != (GEEnvironmentGroup *)0x0) {
        this_00 = pGVar3 + *(int *)(pGVar3 + -4) * 0x1e0;
        if (pGVar3 != this_00) {
          do {
            this_00 = this_00 + -0x1e0;
            GEEnvironmentGroup::~GEEnvironmentGroup(this_00);
            pGVar3 = *(GEEnvironmentGroup **)this;
          } while (pGVar3 != this_00);
        }
        operator_delete__(pGVar3 + -4);
      }
      *(undefined4 *)this = 0;
    }
    *(ulong *)(this + 4) = param_1;
    puVar2 = operator_new__(param_1 * 0x1e0 + 4);
    *puVar2 = param_1;
    pGVar3 = (GEEnvironmentGroup *)(puVar2 + 1);
    while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
      GEEnvironmentGroup::GEEnvironmentGroup(pGVar3);
      pGVar3 = pGVar3 + 0x1e0;
    }
    *(GEEnvironmentGroup **)this = (GEEnvironmentGroup *)(puVar2 + 1);
  }
  this[8] = (GEEnvironment)0x1;
  return;
}

