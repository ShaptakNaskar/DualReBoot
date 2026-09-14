/* 00062e08 | STG::UPreference_FileChooser::Initialize */

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
  int iVar5;
  undefined4 *puVar6;
  
  *(undefined4 *)(this + 0x80) = 1;
  UPreferenceBase::Initialize((UPreferenceBase *)this,param_1,param_2,param_3);
  iVar2 = DAT_00062e98;
  iVar4 = *(int *)(this + 0x80);
  if (iVar4 == 0) {
    return;
  }
  puVar1 = operator_new__(iVar4 * 0x1c + 8);
  iVar5 = *(int *)(iVar2 + 0x62e44);
  iVar2 = 0;
  puVar6 = puVar1 + 2;
  puVar1[1] = iVar4;
  *puVar1 = 0x1c;
  puVar3 = puVar1 + 3;
  do {
    iVar2 = iVar2 + 1;
    puVar3[-1] = iVar5 + 8;
    *(undefined4 **)((int)(puVar1 + 3) + (int)((int)puVar3 + (0xc - (int)puVar6))) = puVar3;
    *(undefined4 **)((int)puVar1 + (int)((int)puVar3 + (0x1c - (int)puVar6))) = puVar3;
    *(undefined1 *)puVar3 = 0;
    puVar3 = puVar3 + 7;
  } while (iVar2 != iVar4);
  *(undefined4 **)(this + 0x7c) = puVar6;
  return;
}

