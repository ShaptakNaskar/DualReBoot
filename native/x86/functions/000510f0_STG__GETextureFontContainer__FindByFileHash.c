/* 000510f0 | STG::GETextureFontContainer::FindByFileHash */

/* STG::GETextureFontContainer::FindByFileHash(STG::FFileHash const&, unsigned long&) const */

undefined4 __thiscall
STG::GETextureFontContainer::FindByFileHash
          (GETextureFontContainer *this,FFileHash *param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  
  uVar2 = *(ulong *)(this + 8);
  if (uVar2 != 0) {
    iVar4 = 0;
    uVar3 = 0;
    do {
      while (iVar1 = *(int *)(this + 0xc) + iVar4,
            *(int *)(iVar1 + 0x1c) == *(int *)(param_1 + 0x1c)) {
        if ((*(int *)(iVar1 + 0x20) != 0) || (*(char *)(iVar1 + 0x28) != '\0')) {
          *param_2 = uVar3;
          return 1;
        }
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + 0x30;
        if (uVar3 == uVar2) goto LAB_00051148;
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x30;
    } while (uVar3 != uVar2);
  }
LAB_00051148:
  *param_2 = 0xffffffff;
  return 0;
}

