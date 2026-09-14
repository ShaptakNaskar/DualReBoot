/* 0007ef80 | FUN_0007ef80 */

void __regparm3 FUN_0007ef80(uint *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int unaff_EBX;
  char *pcVar7;
  char *pcVar8;
  char local_60 [64];
  int local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x7ef8d;
  FUN_0002e044();
  pcVar7 = local_60;
  local_20 = **(int **)("_ZNK3STG11GETimeOfDay26GetNormalizedSec_NighttimeEv" + unaff_EBX + 0x21);
  *param_1 = 0;
  iVar2 = FUN_0007eee0(0x40);
  if (((-1 < iVar2) && (pcVar3 = pcVar7 + iVar2, pcVar7 < pcVar3)) && (local_60[0] != '\n')) {
    while( true ) {
      pcVar4 = memchr(pcVar7,0x2c,(int)pcVar3 - (int)pcVar7);
      if (pcVar4 == (char *)0x0) {
        pcVar4 = pcVar3;
      }
      if (pcVar4 <= pcVar7) break;
      uVar5 = 0;
      cVar1 = *pcVar7;
      pcVar8 = pcVar7;
      while ((int)cVar1 - 0x30U < 10) {
        pcVar8 = pcVar8 + 1;
        uVar5 = ((int)cVar1 - 0x30U) + uVar5 * 10;
        if (pcVar8 == pcVar4) break;
        cVar1 = *pcVar8;
      }
      if ((pcVar7 == pcVar8) || (pcVar8 == (char *)0x0)) break;
      uVar6 = uVar5;
      if ((pcVar8 < pcVar4) && (*pcVar8 == '-')) {
        pcVar7 = pcVar8 + 1;
        if (pcVar4 <= pcVar7) break;
        uVar6 = 0;
        cVar1 = pcVar8[1];
        pcVar8 = pcVar7;
        while ((int)cVar1 - 0x30U < 10) {
          pcVar8 = pcVar8 + 1;
          uVar6 = ((int)cVar1 - 0x30U) + uVar6 * 10;
          if (pcVar8 == pcVar4) break;
          cVar1 = *pcVar8;
        }
        if ((pcVar7 == pcVar8) || (pcVar8 == (char *)0x0)) break;
        if ((int)uVar5 <= (int)uVar6) goto LAB_0007f020;
      }
      else {
LAB_0007f020:
        do {
          if (uVar5 < 0x20) {
            *param_1 = *param_1 | 1 << ((byte)uVar5 & 0x1f);
          }
          uVar5 = uVar5 + 1;
        } while ((int)uVar5 <= (int)uVar6);
      }
      if (((pcVar3 <= pcVar4) || (pcVar7 = pcVar4 + 1, pcVar3 <= pcVar7)) || (pcVar4[1] == '\n'))
      break;
    }
  }
  if (local_20 ==
      **(int **)("_ZNK3STG11GETimeOfDay26GetNormalizedSec_NighttimeEv" + unaff_EBX + 0x21)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

