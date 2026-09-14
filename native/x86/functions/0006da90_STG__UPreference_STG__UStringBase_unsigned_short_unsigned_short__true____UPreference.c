/* 0006da90 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::~UPreference */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>, true>::~UPreference() */

void __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::~UPreference
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x2e493) + 8;
  puVar1 = *(undefined4 **)(this + 0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + puVar1[-1] * 0xb;
    if (puVar1 != puVar2) {
      do {
        puVar2 = puVar2 + -0xb;
        (**(code **)*puVar2)(puVar2);
        puVar1 = *(undefined4 **)(this + 0x7c);
      } while (puVar1 != puVar2);
    }
    operator_delete__(puVar1 + -1);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return;
}

