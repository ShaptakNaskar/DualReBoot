/* 00072b60 | STG::UPreference_ModelToggle::Initialize */

/* STG::UPreference_ModelToggle::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, bool) */

void __thiscall
STG::UPreference_ModelToggle::Initialize
          (UPreference_ModelToggle *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,bool param_5)

{
  void *pvVar1;
  uint uVar2;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x80) = 2;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  if (*(uint *)(this + 0x80) == 0) {
    pvVar1 = *(void **)(this + 0x7c);
  }
  else {
    pvVar1 = operator_new__(*(uint *)(this + 0x80));
    *(void **)(this + 0x7c) = pvVar1;
  }
  *(bool *)pvVar1 = param_5;
  *(bool *)(*(int *)(this + 0x7c) + 1) = !param_5;
  if (param_1 == *(ulong *)(this + 0x8c)) {
    if (param_1 != 0) {
      pvVar1 = *(void **)(this + 0x88);
      goto LAB_00072c22;
    }
  }
  else {
    if (*(ulong *)(this + 0x8c) != 0) {
      if (*(void **)(this + 0x88) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x88));
      }
      *(undefined4 *)(this + 0x88) = 0;
    }
    *(ulong *)(this + 0x8c) = param_1;
    if (param_1 != 0) {
      pvVar1 = operator_new__(param_1 * 4);
      *(void **)(this + 0x88) = pvVar1;
LAB_00072c22:
      uVar2 = 0;
      while( true ) {
        *(undefined4 *)((int)pvVar1 + uVar2 * 4) = 0xffffffff;
        uVar2 = uVar2 + 1;
        if (param_1 <= uVar2) break;
        pvVar1 = *(void **)(this + 0x88);
      }
      return;
    }
  }
  return;
}

