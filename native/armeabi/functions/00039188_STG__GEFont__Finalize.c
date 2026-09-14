/* 00039188 | STG::GEFont::Finalize */

/* STG::GEFont::Finalize() */

void __thiscall STG::GEFont::Finalize(GEFont *this)

{
  short sVar1;
  GEFont *pGVar2;
  short sVar3;
  int iVar4;
  short sVar5;
  
  if (*(short *)(this + 0x5c) != 0) {
    iVar4 = *(int *)(this + 0x58);
    sVar1 = 0;
    sVar3 = 0;
    do {
      sVar5 = sVar3 + 1;
      if (*(short *)(iVar4 + 0x20) == 0x3f) {
        sVar1 = sVar3;
      }
      iVar4 = iVar4 + 0x24;
      sVar3 = sVar5;
    } while (sVar5 != *(short *)(this + 0x5c));
    sVar3 = 0x180;
    pGVar2 = this + 0x5e;
    do {
      sVar3 = sVar3 + -1;
      if (*(short *)pGVar2 == 0x180) {
        *(short *)pGVar2 = sVar1;
      }
      pGVar2 = pGVar2 + 2;
    } while (sVar3 != 0);
  }
  return;
}

