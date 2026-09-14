/* 000730b0 | STG::UPreference_CameraSet::~UPreference_CameraSet */

/* STG::UPreference_CameraSet::~UPreference_CameraSet() */

void __thiscall STG::UPreference_CameraSet::~UPreference_CameraSet(UPreference_CameraSet *this)

{
  undefined4 *puVar1;
  int unaff_EBX;
  undefined4 *puVar2;
  
  FUN_0002e044();
  *(int *)this = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x2e3) + 8;
  puVar1 = *(undefined4 **)(this + 0x7c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = puVar1 + puVar1[-1] * 7;
    if (puVar1 != puVar2) {
      do {
        puVar2 = puVar2 + -7;
        (**(code **)*puVar2)(puVar2);
        puVar1 = *(undefined4 **)(this + 0x7c);
      } while (puVar1 != puVar2);
    }
    operator_delete__(puVar1 + -1);
  }
  *(undefined4 *)(this + 0x7c) = 0;
  UPreferenceBase::~UPreferenceBase((UPreferenceBase *)this);
  operator_delete(this);
  return;
}

