/* 00048e48 | STG::GETextureFontContainer::FindByFileHash */

/* STG::GETextureFontContainer::FindByFileHash(STG::FFileHash const&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureFontContainer::FindByFileHash
          (GETextureFontContainer *this,FFileHash *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar3 = *(ulong *)(this + 8);
  if (uVar3 != 0) {
    iVar1 = 0;
    uVar2 = 0;
    do {
      while( true ) {
        iVar4 = *(int *)(this + 0xc) + iVar1;
        iVar1 = iVar1 + 0x30;
        if (*(int *)(iVar4 + 0x1c) != *(int *)(param_1 + 0x1c)) break;
        if ((*(int *)(iVar4 + 0x20) != 0) || (*(char *)(iVar4 + 0x28) != '\0')) {
          *param_2 = uVar2;
          return 1;
        }
        uVar2 = uVar2 + 1;
        if (uVar2 == uVar3) goto LAB_00048ec0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != uVar3);
  }
LAB_00048ec0:
  *param_2 = 0xffffffff;
  return 0;
}

