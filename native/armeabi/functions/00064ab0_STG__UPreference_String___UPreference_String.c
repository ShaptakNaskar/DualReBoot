/* 00064ab0 | STG::UPreference_String::~UPreference_String */

/* STG::UPreference_String::~UPreference_String() */

UPreference_String * __thiscall
STG::UPreference_String::~UPreference_String(UPreference_String *this)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_00064b3c + 0x64ac8) + 8;
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + -4) * 0x1c + iVar2;
    if (iVar2 != iVar3) {
      do {
        puVar1 = (undefined4 *)(iVar3 + -0x1c);
        iVar3 = iVar3 + -0x1c;
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

