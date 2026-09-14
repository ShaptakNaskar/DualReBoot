/* 000700e8 | STG::UPreference_Theme::Initialize */

/* STG::UPreference_Theme::Initialize(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_Theme::Initialize
          (UPreference_Theme *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          ulong param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  
  *(ulong *)(this + 0x80) = param_4;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar4 = *(int *)(this + 0x80);
  if (iVar4 != 0) {
    puVar1 = operator_new__(iVar4 * 0x38 + 8);
    piVar6 = puVar1 + 2;
    iVar5 = *(int *)(DAT_000701d0 + 0x7013c);
    iVar7 = 0;
    *puVar1 = 0x38;
    puVar1[1] = iVar4;
    puVar2 = puVar1 + 7;
    iVar5 = iVar5 + 8;
    piVar3 = piVar6;
    do {
      *piVar3 = iVar5;
      *puVar2 = piVar3 + 1;
      *(int **)((int)puVar1 + (int)piVar3 + (0x20 - (int)piVar6)) = piVar3 + 1;
      *(undefined1 *)(piVar3 + 1) = 0;
      *(int *)((int)puVar1 + (int)piVar3 + (0x24 - (int)piVar6)) = iVar5;
      iVar7 = iVar7 + 1;
      puVar2[7] = piVar3 + 8;
      puVar2 = puVar2 + 0xe;
      *(int **)((int)puVar1 + (int)piVar3 + (0x3c - (int)piVar6)) = piVar3 + 8;
      *(undefined1 *)(piVar3 + 8) = 0;
      piVar3 = piVar3 + 0xe;
    } while (iVar7 != iVar4);
    *(int **)(this + 0x7c) = piVar6;
  }
  return;
}

