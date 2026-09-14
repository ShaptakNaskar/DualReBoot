/* 00084391 | FUN_00084391 */

int FUN_00084391(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  undefined4 *puVar7;
  byte bVar8;
  undefined8 uVar9;
  undefined1 local_24 [4];
  undefined4 *local_20;
  undefined4 uStack_14;
  
  bVar8 = 0;
  uStack_14 = 0x8439c;
  uVar9 = FUN_0002e044();
  iVar5 = (int)((ulonglong)uVar9 >> 0x20);
  iVar1 = (int)uVar9;
  if (((*(byte *)(iVar5 + 99) & 0x40) == 0) || (*(char *)(iVar5 + 0x70) == '\0')) {
    iVar2 = *(int *)(iVar5 + 0x10);
  }
  else {
    iVar2 = iVar5 + 0x10;
  }
  if (iVar2 == 0) {
    FUN_0008428d(local_24);
  }
  iVar2 = 0;
  while( true ) {
    puVar7 = *(undefined4 **)(iVar1 + iVar2 * 4);
    puVar6 = *(undefined4 **)(iVar5 + iVar2 * 4);
    if (*(char *)(iVar1 + 0x6c + iVar2) != '\0') break;
    if ((puVar7 == (undefined4 *)0x0) || (*(char *)(iVar5 + 0x6c + iVar2) == '\0')) {
      if ((puVar6 != (undefined4 *)0x0) && ((puVar7 != (undefined4 *)0x0 && (puVar6 != puVar7)))) {
        for (uVar4 = (uint)(byte)"_ZNK3STG12FFileManager12OpenFilePathERKNS_11UStringBaseIciEENS_9FFileBase7EAccessE"
                                 [iVar2 + 0x1c18 + unaff_EBX + 0x1d]; uVar4 != 0; uVar4 = uVar4 - 1)
        {
          *(undefined1 *)puVar7 = *(undefined1 *)puVar6;
          puVar6 = (undefined4 *)((int)puVar6 + (uint)bVar8 * -2 + 1);
          puVar7 = (undefined4 *)((int)puVar7 + (uint)bVar8 * -2 + 1);
        }
      }
    }
    else {
      if ("_ZNK3STG12FFileManager12OpenFilePathERKNS_11UStringBaseIciEENS_9FFileBase7EAccessE"
          [iVar2 + 0x1c18 + unaff_EBX + 0x1d] != '\x04') break;
      *puVar7 = puVar6;
      local_20 = puVar6;
    }
    iVar2 = iVar2 + 1;
    if (iVar2 == 0x11) {
      if (((*(byte *)(iVar1 + 99) & 0x40) == 0) || (*(char *)(iVar1 + 0x70) == '\0')) {
        iVar2 = *(int *)(iVar1 + 0x10);
      }
      else {
        iVar2 = iVar1 + 0x10;
      }
      iVar3 = 0;
      if (iVar2 == 0) {
        iVar2 = _Unwind_GetGR(iVar5,4,puVar6,puVar6);
        iVar3 = (iVar2 - *(int *)(iVar1 + 0x48)) + *(int *)(iVar5 + 0x68);
      }
      return iVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  abort();
}

