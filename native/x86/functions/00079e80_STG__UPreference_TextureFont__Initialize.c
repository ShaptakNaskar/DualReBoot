/* 00079e80 | STG::UPreference_TextureFont::Initialize */

/* STG::UPreference_TextureFont::Initialize(unsigned long, bool, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_TextureFont::Initialize
          (UPreference_TextureFont *this,ulong param_1,bool param_2,UStringBase *param_3,
          UStringBase *param_4,UStringBase *param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int unaff_EBX;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x80) = 1;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_3,param_4,param_5);
  iVar2 = *(int *)(this + 0x80);
  if (iVar2 != 0) {
    piVar4 = operator_new__(iVar2 * 0x2c + 4);
    *piVar4 = iVar2;
    piVar1 = piVar4 + 1;
    iVar3 = *(int *)("_ZN3STG10USerialize4LoadEPKNS_9FFileBaseERNS_22GETextureSwapContainerE" +
                    unaff_EBX + 0xc);
    iVar5 = 0;
    piVar6 = piVar1;
    do {
      iVar5 = iVar5 + 1;
      *piVar6 = iVar3 + 8;
      *(int **)((int)piVar4 + (int)piVar6 + (0x28 - (int)piVar1)) = piVar6 + 1;
      *(int **)((int)piVar4 + (int)piVar6 + (0x2c - (int)piVar1)) = piVar6 + 1;
      *(undefined2 *)(piVar6 + 1) = 0;
      piVar6 = piVar6 + 0xb;
    } while (iVar5 != iVar2);
    *(int **)(this + 0x7c) = piVar1;
  }
  *(ulong *)(this + 0x88) = param_1;
  this[0x8c] = (UPreference_TextureFont)param_2;
  return;
}

