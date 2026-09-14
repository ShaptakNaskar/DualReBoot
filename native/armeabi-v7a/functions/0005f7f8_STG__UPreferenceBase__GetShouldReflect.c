/* 0005f7f8 | STG::UPreferenceBase::GetShouldReflect */

/* STG::UPreferenceBase::GetShouldReflect() const */

bool __thiscall STG::UPreferenceBase::GetShouldReflect(UPreferenceBase *this)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *__s;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  
  if (this[0x78] == (UPreferenceBase)0x0) {
    return false;
  }
  __s = *(char **)(DAT_0005f914 + 0x5f830);
  sVar4 = strlen(__s);
  pcVar7 = *(char **)(this + 0x38);
  pcVar8 = *(char **)(this + 0x34);
  if (pcVar8 == pcVar7) {
    return sVar4 != 0;
  }
  if ((uint)((int)pcVar8 - (int)pcVar7) < sVar4) {
    return true;
  }
  pcVar5 = __s + sVar4;
  pcVar6 = pcVar7;
  if (pcVar8 != pcVar7 && __s != pcVar5) {
    pcVar10 = pcVar7;
    if (pcVar5 == __s + 1) {
      cVar1 = *pcVar7;
      pcVar5 = pcVar7;
      while ((pcVar6 = pcVar5, cVar1 != *__s &&
             (pcVar5 = pcVar5 + 1, pcVar6 = pcVar8, pcVar8 != pcVar5))) {
        pcVar10 = pcVar10 + 1;
        cVar1 = *pcVar10;
      }
    }
    else {
      while (pcVar9 = pcVar10, pcVar6 = pcVar8, pcVar9 != pcVar8) {
        pcVar10 = pcVar9 + 1;
        pcVar2 = __s + 1;
        pcVar3 = pcVar10;
        if (*pcVar9 == *__s) {
          while( true ) {
            pcVar6 = pcVar8;
            if (pcVar8 == pcVar3) goto LAB_0005f8b4;
            pcVar11 = pcVar2 + 1;
            if (*pcVar3 != *pcVar2) break;
            pcVar6 = pcVar9;
            pcVar2 = pcVar11;
            pcVar3 = pcVar3 + 1;
            if (pcVar5 == pcVar11) goto LAB_0005f8b4;
          }
        }
      }
    }
  }
LAB_0005f8b4:
  if (pcVar8 != pcVar6) {
    return (int)pcVar6 - (int)pcVar7 == -1;
  }
  return true;
}

