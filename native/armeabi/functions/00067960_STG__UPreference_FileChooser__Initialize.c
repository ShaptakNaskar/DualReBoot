/* 00067960 | STG::UPreference_FileChooser::Initialize */

/* STG::UPreference_FileChooser::Initialize(STG::UStringBase<char, int> const&,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_FileChooser::Initialize
          (UPreference_FileChooser *this,UStringBase *param_1,UStringBase *param_2,
          UStringBase *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  *(undefined4 *)(this + 0x80) = 1;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar4 = *(int *)(this + 0x80);
  if (iVar4 == 0) {
    return;
  }
  puVar1 = operator_new__(iVar4 * 0x1c + 8);
  iVar2 = 0;
  iVar6 = *(int *)(DAT_000679f0 + 0x679a8);
  *puVar1 = 0x1c;
  puVar1[1] = iVar4;
  puVar5 = puVar1 + 2;
  puVar3 = puVar1 + 3;
  do {
    iVar2 = iVar2 + 1;
    puVar3[-1] = iVar6 + 8;
    *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar3 + (0xc - (int)puVar5))) = puVar3;
    *(undefined4 **)((int)puVar1 + (int)((int)puVar3 + (0x1c - (int)puVar5))) = puVar3;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 7;
  } while (iVar2 != iVar4);
  *(undefined4 **)(this + 0x7c) = puVar5;
  return;
}

