/* 0007a660 | STG::UPreference_TextureSwap::Initialize */

/* STG::UPreference_TextureSwap::Initialize(unsigned long, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&, unsigned long) */

void __thiscall
STG::UPreference_TextureSwap::Initialize
          (UPreference_TextureSwap *this,ulong param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4,ulong param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBX;
  
  FUN_0002e044();
  *(ulong *)(this + 0x80) = param_5;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_2,param_3,param_4);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 != 0) {
    piVar4 = operator_new__(iVar2 * 0x1c + 4);
    piVar1 = piVar4 + 1;
    *piVar4 = iVar2;
    iVar3 = *(int *)("_ZNK3STG11UPreferenceINS_11UStringBaseIciEELb1EE12IsValueValidERKS2_" +
                    unaff_EBX + 8);
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
  *(ulong *)(this + 0x88) = param_1;
  return;
}

