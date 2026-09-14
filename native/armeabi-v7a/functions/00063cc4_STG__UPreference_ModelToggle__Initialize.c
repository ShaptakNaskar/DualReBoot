/* 00063cc4 | STG::UPreference_ModelToggle::Initialize */

/* STG::UPreference_ModelToggle::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, bool) */

void __thiscall
STG::UPreference_ModelToggle::Initialize
          (UPreference_ModelToggle *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,bool param_5)

{
  void *pvVar1;
  ulong uVar2;
  uint uVar3;
  
  *(undefined4 *)(this + 0x80) = 2;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  if (*(uint *)(this + 0x80) == 0) {
    pvVar1 = *(void **)(this + 0x7c);
  }
  else {
    pvVar1 = operator_new__(*(uint *)(this + 0x80));
    *(void **)(this + 0x7c) = pvVar1;
  }
  uVar2 = *(ulong *)(this + 0x8c);
  *(bool *)pvVar1 = param_5;
  *(bool *)((int)pvVar1 + 1) = !param_5;
  if (param_1 == uVar2) {
    if (param_1 == 0) {
      return;
    }
    pvVar1 = *(void **)(this + 0x88);
  }
  else {
    if (uVar2 != 0) {
      if (*(void **)(this + 0x88) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x88));
      }
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(ulong *)(this + 0x8c) = param_1;
    if (param_1 == 0) {
      return;
    }
    pvVar1 = operator_new__(param_1 << 2);
    *(void **)(this + 0x88) = pvVar1;
  }
  uVar3 = 0;
  do {
    *(undefined4 *)((int)pvVar1 + uVar3 * 4) = 0xffffffff;
    uVar3 = uVar3 + 1;
  } while (uVar3 < param_1);
  return;
}

