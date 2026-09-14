/* 0002f3a0 | STG::FFileManager::GetPathFlags */

/* STG::FFileManager::GetPathFlags(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>
   const&, STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) const */

byte __thiscall
STG::FFileManager::GetPathFlags
          (FFileManager *this,UStringBase *param_1,UStringBase *param_2,UStringBase *param_3,
          UStringBase *param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  uint uVar7;
  char *pcVar8;
  char *pcVar9;
  int unaff_EBX;
  char *pcVar10;
  byte bVar11;
  char *local_44;
  char local_2c [16];
  char *local_1c;
  char *local_18;
  int local_14;
  
  local_14 = 0x2f3ab;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x6ca8d);
  bVar11 = *(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14);
  pcVar2 = *(char **)(param_2 + 0x18);
  if (pcVar2 != *(char **)(param_2 + 0x14)) {
    local_1c = local_2c + 1;
    local_2c[0] = '/';
    local_2c[1] = 0;
    local_18 = local_2c;
    sVar6 = strlen(local_2c);
    pcVar3 = *(char **)(param_2 + 0x14);
    if (pcVar3 == pcVar2) {
      uVar7 = ~-(uint)(sVar6 == 0);
    }
    else {
      uVar7 = 0xffffffff;
      if (sVar6 <= (uint)((int)pcVar3 - (int)pcVar2)) {
        pcVar10 = local_2c + sVar6;
        local_44 = pcVar2;
        if ((local_2c != pcVar10) && (pcVar3 != pcVar2)) {
          if (pcVar10 == local_2c + 1) {
            cVar1 = *pcVar2;
            pcVar10 = pcVar2;
            while ((local_44 = pcVar10, cVar1 != local_2c[0] &&
                   (pcVar10 = pcVar10 + 1, local_44 = pcVar3, pcVar3 != pcVar10))) {
              cVar1 = *pcVar10;
            }
          }
          else {
            pcVar5 = pcVar2;
            while (pcVar4 = pcVar5, pcVar5 = pcVar4 + 1, local_44 = pcVar3, pcVar5 != pcVar3 + 1) {
              if (*pcVar4 == local_2c[0]) {
                if (pcVar3 == pcVar5) break;
                pcVar9 = local_2c + 1;
                pcVar8 = pcVar5;
                while (*pcVar8 == *pcVar9) {
                  pcVar9 = pcVar9 + 1;
                  local_44 = pcVar4;
                  if ((pcVar10 == pcVar9) ||
                     (pcVar8 = pcVar8 + 1, local_44 = pcVar3, pcVar3 == pcVar8)) goto LAB_0002f538;
                }
              }
            }
          }
        }
LAB_0002f538:
        uVar7 = 0xffffffff;
        if (pcVar3 != local_44) {
          uVar7 = (int)local_44 - (int)pcVar2;
        }
      }
    }
    if (uVar7 == 0) {
      bVar11 = bVar11 | 2;
    }
  }
  if (*(int *)(param_3 + 0x18) != *(int *)(param_3 + 0x14)) {
    bVar11 = bVar11 | 4;
  }
  if (*(int *)(param_4 + 0x18) != *(int *)(param_4 + 0x14)) {
    bVar11 = bVar11 | 8;
  }
  if (local_14 != **(int **)(unaff_EBX + 0x6ca8d)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return bVar11;
}

