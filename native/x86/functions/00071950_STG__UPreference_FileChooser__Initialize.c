/* 00071950 | STG::UPreference_FileChooser::Initialize */

/* STG::UPreference_FileChooser::Initialize(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_FileChooser::Initialize
          (UPreference_FileChooser *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  UPreferenceBase *this_00;
  int *piVar6;
  int unaff_EBX;
  
  FUN_0002e044();
  *(undefined4 *)(this_00 + 0x80) = 1;
  UPreferenceBase::Initialize(this_00,param_1,param_2,param_3);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 != 0) {
    piVar4 = operator_new__(iVar2 * 0x1c + 4);
    piVar1 = piVar4 + 1;
    *piVar4 = iVar2;
    iVar3 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x1987);
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
  }
  return;
}

