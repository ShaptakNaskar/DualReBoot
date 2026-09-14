/* 0002ffa4 | STG::FFileManager::GetPathFlags */

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
  char *pcVar11;
  int *piVar12;
  char *pcVar13;
  char *pcVar14;
  byte bVar15;
  char local_44 [16];
  char *local_34;
  char *local_30;
  int local_2c;
  
  pcVar14 = *(char **)(param_2 + 0x18);
  pcVar13 = *(char **)(param_2 + 0x14);
  piVar12 = *(int **)(DAT_00030170 + 0x2ffc4);
  local_2c = *piVar12;
  bVar15 = *(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14);
  if (pcVar14 == pcVar13) goto LAB_00030048;
  pcVar11 = local_44 + 1;
  local_44[0] = '/';
  local_44[1] = 0;
  local_34 = pcVar11;
  local_30 = local_44;
  sVar4 = strlen(local_44);
  if (pcVar13 == pcVar14) {
    iVar5 = 0;
    if (sVar4 != 0) {
      iVar5 = -1;
    }
  }
  else {
    if (sVar4 <= (uint)((int)pcVar13 - (int)pcVar14)) {
      pcVar6 = local_44 + sVar4;
      pcVar10 = pcVar14;
      if (pcVar13 != pcVar14 && local_44 != pcVar6) {
        pcVar8 = pcVar14;
        if (pcVar6 == pcVar11) {
          cVar1 = *pcVar14;
          pcVar11 = pcVar14;
          pcVar6 = pcVar14;
          while ((pcVar10 = pcVar11, cVar1 != '/' &&
                 (pcVar11 = pcVar11 + 1, pcVar10 = pcVar13, pcVar13 != pcVar11))) {
            pcVar6 = pcVar6 + 1;
            cVar1 = *pcVar6;
          }
        }
        else {
          while (pcVar7 = pcVar8, pcVar10 = pcVar13, pcVar7 != pcVar13) {
            pcVar8 = pcVar7 + 1;
            pcVar2 = pcVar11;
            pcVar3 = pcVar8;
            if (*pcVar7 == local_44[0]) {
              while( true ) {
                pcVar10 = pcVar13;
                if (pcVar13 == pcVar3) goto LAB_00030114;
                pcVar9 = pcVar2 + 1;
                if (*pcVar3 != *pcVar2) break;
                pcVar10 = pcVar7;
                pcVar2 = pcVar9;
                pcVar3 = pcVar3 + 1;
                if (pcVar6 == pcVar9) goto LAB_00030114;
              }
            }
          }
        }
      }
LAB_00030114:
      if (pcVar13 != pcVar10) {
        iVar5 = (int)pcVar10 - (int)pcVar14;
        goto LAB_00030038;
      }
    }
    iVar5 = -1;
  }
LAB_00030038:
  if (iVar5 == 0) {
    bVar15 = bVar15 | 2;
  }
LAB_00030048:
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x14)) {
    bVar15 = bVar15 | 4;
  }
  if (*(int *)(param_4 + 0x18) != *(int *)(param_4 + 0x14)) {
    bVar15 = bVar15 | 8;
  }
  if (local_2c == *piVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar15);
}

