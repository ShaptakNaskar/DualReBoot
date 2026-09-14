/* 00064350 | STG::UPreferenceBase::GetShouldReflect */

/* STG::UPreferenceBase::GetShouldReflect() const */

bool __thiscall STG::UPreferenceBase::GetShouldReflect(UPreferenceBase *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  size_t sVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *__s;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  
  bVar4 = false;
  if (this[0x78] != (UPreferenceBase)0x0) {
    __s = *(char **)(DAT_00064474 + 0x6438c);
    sVar5 = strlen(__s);
    pcVar8 = *(char **)(this + 0x38);
    pcVar9 = *(char **)(this + 0x34);
    if (pcVar9 == pcVar8) {
      return sVar5 != 0;
    }
    if ((uint)((int)pcVar9 - (int)pcVar8) < sVar5) {
      return true;
    }
    pcVar6 = __s + sVar5;
    pcVar7 = pcVar8;
    if (pcVar9 != pcVar8 && __s != pcVar6) {
      pcVar11 = pcVar8;
      if (pcVar6 == __s + 1) {
        cVar1 = *pcVar8;
        pcVar6 = pcVar8;
        while ((pcVar7 = pcVar6, cVar1 != *__s &&
               (pcVar6 = pcVar6 + 1, pcVar7 = pcVar9, pcVar9 != pcVar6))) {
          pcVar11 = pcVar11 + 1;
          cVar1 = *pcVar11;
        }
      }
      else {
        while (pcVar10 = pcVar11, pcVar7 = pcVar9, pcVar10 != pcVar9) {
          pcVar11 = pcVar10 + 1;
          pcVar2 = __s + 1;
          pcVar3 = pcVar11;
          if (*pcVar10 == *__s) {
            while( true ) {
              pcVar7 = pcVar9;
              if (pcVar9 == pcVar3) goto LAB_00064420;
              pcVar12 = pcVar2 + 1;
              if (*pcVar3 != *pcVar2) break;
              pcVar7 = pcVar10;
              pcVar2 = pcVar12;
              pcVar3 = pcVar3 + 1;
              if (pcVar6 == pcVar12) goto LAB_00064420;
            }
          }
        }
      }
    }
LAB_00064420:
    if (pcVar9 != pcVar7) {
      return (int)pcVar7 - (int)pcVar8 == -1;
    }
    bVar4 = true;
  }
  return bVar4;
}

