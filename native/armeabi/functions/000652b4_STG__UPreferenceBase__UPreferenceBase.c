/* 000652b4 | STG::UPreferenceBase::UPreferenceBase */

/* STG::UPreferenceBase::UPreferenceBase() */

void __thiscall STG::UPreferenceBase::UPreferenceBase(UPreferenceBase *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(DAT_00065340 + 0x652c8) + 8;
  iVar2 = *(int *)(DAT_00065344 + 0x652d0);
  *(int *)(this + 4) = iVar1;
  *(int *)(this + 0x20) = iVar1;
  *(int *)(this + 0x3c) = iVar1;
  *(int *)(this + 0x58) = iVar1;
  *(int *)this = iVar2 + 8;
  *(UPreferenceBase **)(this + 0x18) = this + 8;
  *(UPreferenceBase **)(this + 0x1c) = this + 8;
  this[8] = (UPreferenceBase)0x0;
  *(UPreferenceBase **)(this + 0x34) = this + 0x24;
  *(UPreferenceBase **)(this + 0x38) = this + 0x24;
  this[0x24] = (UPreferenceBase)0x0;
  *(UPreferenceBase **)(this + 0x50) = this + 0x40;
  *(UPreferenceBase **)(this + 0x54) = this + 0x40;
  this[0x40] = (UPreferenceBase)0x0;
  *(UPreferenceBase **)(this + 0x6c) = this + 0x5c;
  *(UPreferenceBase **)(this + 0x70) = this + 0x5c;
  this[0x5c] = (UPreferenceBase)0x0;
  *(undefined4 *)(this + 0x74) = 0;
  this[0x78] = (UPreferenceBase)0x1;
  this[0x79] = (UPreferenceBase)0x0;
  return;
}

