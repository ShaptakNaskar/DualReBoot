/* 0004b2ec | STG::GETextureFontContainer::FindByFileHash */

/* STG::GETextureFontContainer::FindByFileHash(STG::FFileHash const&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureFontContainer::FindByFileHash
          (GETextureFontContainer *this,FFileHash *param_1,ulong *param_2)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 != 0) {
    iVar2 = 0;
    uVar1 = 0;
    do {
      while( true ) {
        iVar4 = *(int *)(this + 0xc) + iVar2;
        iVar2 = iVar2 + 0x30;
        if (*(int *)(iVar4 + 0x1c) != *(int *)(param_1 + 0x1c)) break;
        if ((*(int *)(iVar4 + 0x20) != 0) || (*(char *)(iVar4 + 0x28) != '\0')) {
          *param_2 = uVar1;
          return 1;
        }
        uVar1 = uVar1 + 1;
        if (uVar1 == uVar3) goto LAB_0004b364;
      }
      uVar1 = uVar1 + 1;
    } while (uVar1 != uVar3);
  }
LAB_0004b364:
  *param_2 = 0xffffffff;
  return 0;
}

