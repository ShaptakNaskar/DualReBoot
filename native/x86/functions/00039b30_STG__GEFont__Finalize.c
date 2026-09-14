/* 00039b30 | STG::GEFont::Finalize */

/* STG::GEFont::Finalize() */

void __thiscall STG::GEFont::Finalize(GEFont *this)

{
  short *psVar1;
  short sVar2;
  int iVar3;
  short sVar4;
  
  if (*(short *)(this + 0x5c) != 0) {
    iVar3 = *(int *)(this + 0x58);
    sVar2 = 0;
    sVar4 = 0;
    do {
      psVar1 = (short *)(iVar3 + 0x20);
      iVar3 = iVar3 + 0x24;
      if (*psVar1 == 0x3f) {
        sVar4 = sVar2;
      }
      sVar2 = sVar2 + 1;
    } while (sVar2 != *(short *)(this + 0x5c));
    iVar3 = 0;
    do {
      while (*(short *)(this + iVar3 + 0x5e) != 0x180) {
        iVar3 = iVar3 + 2;
        if (iVar3 == 0x300) {
          return;
        }
      }
      *(short *)(this + iVar3 + 0x5e) = sVar4;
      iVar3 = iVar3 + 2;
    } while (iVar3 != 0x300);
  }
  return;
}

