/* 00072180 | STG::UPreference_IAB::Initialize */

/* STG::UPreference_IAB::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_IAB::Initialize
          (UPreference_IAB *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          ulong param_4)

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
  iVar3 = *(int *)(this + 0x80);
  if (iVar3 != 0) {
    piVar4 = operator_new__(iVar3 * 0x38 + 4);
    piVar1 = piVar4 + 1;
    *piVar4 = iVar3;
    iVar5 = 0;
    iVar2 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x115f) + 8;
    piVar6 = piVar1;
    do {
      *piVar6 = iVar2;
      iVar5 = iVar5 + 1;
      *(int **)((int)piVar4 + (int)piVar6 + (0x18 - (int)piVar1)) = piVar6 + 1;
      *(int **)((int)piVar4 + (int)piVar6 + (0x1c - (int)piVar1)) = piVar6 + 1;
      *(undefined1 *)(piVar6 + 1) = 0;
      *(int *)((int)piVar4 + (int)piVar6 + (0x20 - (int)piVar1)) = iVar2;
      *(int **)((int)piVar4 + (int)piVar6 + (0x34 - (int)piVar1)) = piVar6 + 8;
      *(int **)((int)piVar4 + (int)piVar6 + (0x38 - (int)piVar1)) = piVar6 + 8;
      *(undefined1 *)(piVar6 + 8) = 0;
      piVar6 = piVar6 + 0xe;
    } while (iVar5 != iVar3);
    *(int **)(this + 0x7c) = piVar1;
  }
  this[0x88] = (UPreference_IAB)0x0;
  return;
}

