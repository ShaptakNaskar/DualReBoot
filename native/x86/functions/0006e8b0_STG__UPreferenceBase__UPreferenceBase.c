/* 0006e8b0 | STG::UPreferenceBase::UPreferenceBase */

/* STG::UPreferenceBase::UPreferenceBase() */

void __thiscall STG::UPreferenceBase::UPreferenceBase(UPreferenceBase *this)

{
  int iVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)((int)&__DT_JMPREL[0x52].r_offset + unaff_EBX + 2) + 8;
  iVar1 = *(int *)((int)&__DT_JMPREL[0x35].r_info + unaff_EBX + 2) + 8;
  *(int *)(this + 4) = iVar1;
  *(UPreferenceBase **)(this + 0x18) = this + 8;
  *(UPreferenceBase **)(this + 0x1c) = this + 8;
  *(int *)(this + 0x20) = iVar1;
  *(int *)(this + 0x3c) = iVar1;
  *(UPreferenceBase **)(this + 0x34) = this + 0x24;
  *(UPreferenceBase **)(this + 0x38) = this + 0x24;
  *(int *)(this + 0x58) = iVar1;
  this[8] = (UPreferenceBase)0x0;
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

