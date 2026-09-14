/* 0006f4ac | STG::UPreference_TextureFont::Initialize */

/* STG::UPreference_TextureFont::Initialize(unsigned long, bool, STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_TextureFont::Initialize
          (UPreference_TextureFont *this,ulong param_1,bool param_2,UStringBase *param_3,
          UStringBase *param_4,UStringBase *param_5)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(this + 0x80) = 1;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_3,param_4,param_5);
  iVar4 = *(int *)(this + 0x80);
  if (iVar4 == 0) {
    *(ulong *)(this + 0x88) = param_1;
    this[0x8c] = (UPreference_TextureFont)param_2;
    return;
  }
  puVar1 = operator_new__(iVar4 * 0x2c + 8);
  iVar2 = 0;
  iVar5 = *(int *)(DAT_0006f560 + 0x6f510);
  *puVar1 = 0x2c;
  puVar1[1] = iVar4;
  puVar6 = puVar1 + 2;
  puVar3 = puVar1 + 3;
  do {
    iVar2 = iVar2 + 1;
    puVar3[-1] = iVar5 + 8;
    *(undefined4 **)((int)(puVar1 + 3) + (int)puVar3 + (0x1c - (int)puVar6)) = puVar3;
    *(undefined4 **)((int)puVar1 + (int)puVar3 + (0x2c - (int)puVar6)) = puVar3;
    *(undefined2 *)puVar3 = 0;
    puVar3 = puVar3 + 0xb;
  } while (iVar2 != iVar4);
  *(undefined4 **)(this + 0x7c) = puVar6;
  *(ulong *)(this + 0x88) = param_1;
  this[0x8c] = (UPreference_TextureFont)param_2;
  return;
}

