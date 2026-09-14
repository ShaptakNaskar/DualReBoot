/* 000373dc | STG::GEFont::Finalize */

/* STG::GEFont::Finalize() */

void __thiscall STG::GEFont::Finalize(GEFont *this)

{
  short *psVar1;
  short sVar2;
  GEFont *pGVar3;
  short sVar4;
  int iVar5;
  short sVar6;
  
  if (*(short *)(this + 0x5c) != 0) {
    iVar5 = *(int *)(this + 0x58);
    sVar2 = 0;
    sVar4 = 0;
    do {
      psVar1 = (short *)(iVar5 + 0x20);
      sVar6 = sVar4 + 1;
      iVar5 = iVar5 + 0x24;
      if (*psVar1 == 0x3f) {
        sVar2 = sVar4;
      }
      sVar4 = sVar6;
    } while (sVar6 != *(short *)(this + 0x5c));
    sVar4 = 0x180;
    pGVar3 = this + 0x5e;
    do {
      sVar4 = sVar4 + -1;
      if (*(short *)pGVar3 == 0x180) {
        *(short *)pGVar3 = sVar2;
      }
      pGVar3 = pGVar3 + 2;
    } while (sVar4 != 0);
  }
  return;
}

