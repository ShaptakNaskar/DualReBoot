/* 00051e80 | STG::GETextureFontContainer::FindByIndex */

/* STG::GETextureFontContainer::FindByIndex(unsigned long, STG::UStringBase<unsigned short, unsigned
   short> const&, STG::GEFont const*&, STG::UStringBase<unsigned short, unsigned short>&) const */

undefined4 __thiscall
STG::GETextureFontContainer::FindByIndex
          (GETextureFontContainer *this,ulong param_1,UStringBase *param_2,GEFont **param_3,
          UStringBase *param_4)

{
  int iVar1;
  undefined4 uVar2;
  UStringBase *pUVar3;
  
  iVar1 = FUN_0002e044();
  pUVar3 = (UStringBase *)(iVar1 * 0x30 + *(int *)(this + 0xc));
  GETextureFont::GetMessageToUse(pUVar3,param_2);
  if (*(int *)(param_4 + 0x28) == *(int *)(param_4 + 0x24)) {
    *param_3 = (GEFont *)0x0;
    uVar2 = 0;
    if (*(undefined2 **)(param_4 + 0x28) != *(undefined2 **)(param_4 + 0x24)) {
      **(undefined2 **)(param_4 + 0x28) = 0;
      *(undefined4 *)(param_4 + 0x24) = *(undefined4 *)(param_4 + 0x28);
    }
  }
  else {
    *param_3 = *(GEFont **)(*(int *)(this + 4) + *(int *)(pUVar3 + 0x2c) * 4);
    uVar2 = 1;
  }
  return uVar2;
}

