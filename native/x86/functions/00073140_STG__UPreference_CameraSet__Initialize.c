/* 00073140 | STG::UPreference_CameraSet::Initialize */

/* STG::UPreference_CameraSet::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_CameraSet::Initialize
          (UPreference_CameraSet *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3,ulong param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBX;
  
  FUN_0002e044();
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 == 0) {
    return;
  }
  piVar4 = operator_new__(iVar2 * 0x1c + 4);
  piVar1 = piVar4 + 1;
  *piVar4 = iVar2;
  iVar3 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x19f);
  iVar5 = 0;
  piVar6 = piVar1;
  do {
    iVar5 = iVar5 + 1;
    *piVar6 = iVar3 + 8;
    *(int **)((int)piVar4 + (int)piVar6 + (0x18 - (int)piVar1)) = piVar6 + 1;
    *(int **)((int)piVar4 + (int)piVar6 + (0x1c - (int)piVar1)) = piVar6 + 1;
    *(undefined1 *)(piVar6 + 1) = 0;
    piVar6 = piVar6 + 7;
  } while (iVar5 != iVar2);
  *(int **)(this + 0x7c) = piVar1;
  return;
}

