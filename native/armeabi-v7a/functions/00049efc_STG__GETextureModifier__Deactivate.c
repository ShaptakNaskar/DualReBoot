/* 00049efc | STG::GETextureModifier::Deactivate */

/* STG::GETextureModifier::Deactivate() */

void __thiscall STG::GETextureModifier::Deactivate(GETextureModifier *this)

{
  int iVar1;
  
  iVar1 = DAT_00049f14;
  *(undefined4 *)(this + 0x28) = 0;
  **(undefined4 **)(iVar1 + 0x49f10) = 0;
  return;
}

