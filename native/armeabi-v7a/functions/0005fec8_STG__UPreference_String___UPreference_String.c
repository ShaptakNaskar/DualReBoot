/* 0005fec8 | STG::UPreference_String::~UPreference_String */

/* STG::UPreference_String::~UPreference_String() */

UPreference_String * __thiscall
STG::UPreference_String::~UPreference_String(UPreference_String *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(this + 0x7c);
  *(int *)this = *(int *)(DAT_0005ff4c + 0x5fee4) + 8;
  if (iVar1 != 0) {
    iVar3 = iVar1 + *(int *)(iVar1 + -4) * 0x1c;
    if (iVar1 != iVar3) {
      do {
        iVar2 = iVar3 + -0x1c;
        (*(code *)**(undefined4 **)(iVar3 + -0x1c))(iVar2);
        iVar1 = *(int *)(this + 0x7c);
        iVar3 = iVar2;
      } while (iVar1 != iVar2);
    }
    operator_delete__((void *)(iVar1 + -8));
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  return this;
}

