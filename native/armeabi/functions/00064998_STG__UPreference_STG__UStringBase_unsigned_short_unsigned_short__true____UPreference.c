/* 00064998 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::~UPreference */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>, true>::~UPreference() */

UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> * __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::~UPreference
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_00064a24 + 0x649b0) + 8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4) * 0x2c + iVar2;
    if (iVar2 != iVar3) {
      do {
        puVar1 = (undefined4 *)(iVar3 + -0x2c);
        iVar3 = iVar3 + -0x2c;
        (**(code **)*puVar1)(iVar3);
        iVar2 = *(int *)(this + 0x7c);
      } while (iVar2 != iVar3);
    }
    operator_delete__((void *)(iVar2 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

