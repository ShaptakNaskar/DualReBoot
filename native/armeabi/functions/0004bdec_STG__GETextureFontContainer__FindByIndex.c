/* 0004bdec | STG::GETextureFontContainer::FindByIndex */

/* STG::GETextureFontContainer::FindByIndex(unsigned long, STG::UStringBase<unsigned short, unsigned
   short> const&, STG::GEFont const*&, STG::UStringBase<unsigned short, unsigned short>&) const */

undefined4 __thiscall
STG::GETextureFontContainer::FindByIndex
          (GETextureFontContainer *this,ulong param_1,UStringBase *param_2,GEFont **param_3,
          UStringBase *param_4)

{
  undefined2 *puVar1;
  GETextureFont *this_00;
  
  this_00 = (GETextureFont *)(param_1 * 0x30 + *(int *)(this + 0xc));
  GETextureFont::GetMessageToUse(this_00,param_2,param_4);
  if (*(int *)(param_4 + 0x28) == *(int *)(param_4 + 0x24)) {
    *param_3 = (GEFont *)0x0;
    puVar1 = *(undefined2 **)(param_4 + 0x28);
    if (puVar1 != *(undefined2 **)(param_4 + 0x24)) {
      *puVar1 = 0;
      *(undefined2 **)(param_4 + 0x24) = puVar1;
    }
    return 0;
  }
  *param_3 = *(GEFont **)(*(int *)(this + 4) + *(int *)(this_00 + 0x2c) * 4);
  return 1;
}

