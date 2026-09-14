/* 0006d760 | STG::UPreferenceBase::GetShouldReflect */

/* STG::UPreferenceBase::GetShouldReflect() const */

undefined1 __thiscall STG::UPreferenceBase::GetShouldReflect(UPreferenceBase *this)

{
  char cVar1;
  char *__s;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 uVar8;
  size_t sVar9;
  int unaff_EBX;
  char *pcVar10;
  char *local_20;
  
  uVar8 = FUN_0002e044();
  if (this[0x78] != (UPreferenceBase)0x0) {
    __s = *(char **)(unaff_EBX + 0x2fedd);
    sVar9 = strlen(__s);
    pcVar2 = *(char **)(this + 0x34);
    pcVar3 = *(char **)(this + 0x38);
    uVar8 = sVar9 != 0;
    if ((pcVar2 != pcVar3) && (uVar8 = 1, sVar9 <= (uint)((int)pcVar2 - (int)pcVar3))) {
      pcVar10 = __s + sVar9;
      local_20 = pcVar3;
      if ((__s != pcVar10) && (pcVar2 != pcVar3)) {
        if (pcVar10 == __s + 1) {
          cVar1 = *pcVar3;
          pcVar10 = pcVar3;
          while ((local_20 = pcVar10, cVar1 != *__s &&
                 (pcVar10 = pcVar10 + 1, local_20 = pcVar2, pcVar2 != pcVar10))) {
            cVar1 = *pcVar10;
          }
        }
        else {
          pcVar5 = pcVar3;
          while (pcVar4 = pcVar5, pcVar5 = pcVar4 + 1, local_20 = pcVar2, pcVar5 != pcVar2 + 1) {
            pcVar6 = __s + 1;
            pcVar7 = pcVar5;
            if (*pcVar4 == *__s) {
              while( true ) {
                local_20 = pcVar2;
                if (pcVar2 == pcVar7) goto LAB_0006d830;
                if (*pcVar7 != *pcVar6) break;
                local_20 = pcVar4;
                if (pcVar10 == pcVar6 + 1) goto LAB_0006d830;
                pcVar6 = pcVar6 + 1;
                pcVar7 = pcVar7 + 1;
              }
            }
          }
        }
      }
LAB_0006d830:
      uVar8 = 1;
      if (pcVar2 != local_20) {
        uVar8 = (int)local_20 - (int)pcVar3 == -1;
      }
    }
  }
  return uVar8;
}

