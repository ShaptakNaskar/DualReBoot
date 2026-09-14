/* 0002f77c | STG::FFileManager::GetPathFlags */

/* STG::FFileManager::GetPathFlags(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) const */

void __thiscall
STG::FFileManager::GetPathFlags
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  size_t sVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int *piVar11;
  char *pcVar12;
  char *pcVar13;
  byte bVar14;
  char *local_58;
  char local_44 [16];
  char *local_34;
  char *local_30;
  int local_2c;
  
  piVar11 = *(int **)(DAT_0002f948 + 0x2f79c);
  pcVar12 = *(char **)(param_2 + 0x18);
  bVar14 = *(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14);
  pcVar13 = *(char **)(param_2 + 0x14);
  local_2c = *piVar11;
  if (pcVar12 == pcVar13) goto LAB_0002f820;
  local_44[0] = '/';
  pcVar10 = local_44 + 1;
  local_44[1] = 0;
  local_34 = pcVar10;
  local_30 = local_44;
  sVar4 = strlen(local_44);
  if (pcVar13 == pcVar12) {
    iVar5 = 0;
    if (sVar4 != 0) {
      iVar5 = -1;
    }
  }
  else {
    if (sVar4 <= (uint)((int)pcVar13 - (int)pcVar12)) {
      pcVar6 = local_44 + sVar4;
      pcVar9 = pcVar12;
      if (pcVar13 != pcVar12 && local_44 != pcVar6) {
        pcVar7 = pcVar12;
        if (pcVar6 == pcVar10) {
          cVar1 = *pcVar12;
          pcVar10 = pcVar12;
          pcVar6 = pcVar12;
          while ((pcVar9 = pcVar10, cVar1 != '/' &&
                 (pcVar10 = pcVar10 + 1, pcVar9 = pcVar13, pcVar13 != pcVar10))) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
        }
        else {
          while (local_58 = pcVar7, pcVar9 = pcVar13, local_58 != pcVar13) {
            pcVar7 = local_58 + 1;
            pcVar2 = pcVar10;
            pcVar3 = pcVar7;
            if (*local_58 == local_44[0]) {
              while( true ) {
                pcVar9 = pcVar13;
                if (pcVar13 == pcVar3) goto LAB_0002f8f0;
                pcVar8 = pcVar2 + 1;
                if (*pcVar3 != *pcVar2) break;
                pcVar9 = local_58;
                pcVar2 = pcVar8;
                pcVar3 = pcVar3 + 1;
                if (pcVar6 == pcVar8) goto LAB_0002f8f0;
              }
            }
          }
        }
      }
LAB_0002f8f0:
      if (pcVar13 != pcVar9) {
        iVar5 = (int)pcVar9 - (int)pcVar12;
        goto LAB_0002f810;
      }
    }
    iVar5 = -1;
  }
LAB_0002f810:
  if (iVar5 == 0) {
    bVar14 = bVar14 | 2;
  }
LAB_0002f820:
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x14)) {
    bVar14 = bVar14 | 4;
  }
  if (*(int *)(param_4 + 0x18) != *(int *)(param_4 + 0x14)) {
    bVar14 = bVar14 | 8;
  }
  if (local_2c == *piVar11) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar14);
}

