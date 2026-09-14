/* 0005fe38 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::~UPreference */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>, true>::~UPreference() */

UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> * __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::~UPreference
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0005fec4 + 0x5fe54) + 8;
  if (iVar1 != 0) {
    iVar3 = *(int *)(iVar1 + -4) * 0x2c + iVar1;
    if (iVar1 != iVar3) {
      do {
        iVar2 = iVar3 + -0x2c;
        (*(code *)**(undefined4 **)(iVar3 + -0x2c))(iVar2);
        iVar1 = *(int *)(this + 0x7c);
        iVar3 = iVar2;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return this;
}

