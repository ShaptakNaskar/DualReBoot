/* 0007f3d0 | android_setCpu */

undefined4 android_setCpu(int param_1,undefined4 param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBX;
  
  uVar2 = FUN_0002e044();
  if (*(int *)("_ZNK3STG22GETextureFontContainer14FindByFileHashERKNS_9FFileHashERm" +
              unaff_EBX + 0x1b) == 0) {
    pcVar1 = "_ZNK3STG22GETextureFontContainer14FindByFileHashERKNS_9FFileHashERm" + unaff_EBX + 0xb
    ;
    pcVar1[0] = '\x02';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(undefined4 *)
     ("_ZNK3STG22GETextureFontContainer14FindByFileHashERKNS_9FFileHashERm" + unaff_EBX + 0xf) =
         param_2;
    iVar3 = CONCAT31((int3)((uint)uVar2 >> 8),1);
    if (0 < param_1) {
      iVar3 = param_1;
    }
    *(undefined4 *)
     ("_ZNK3STG22GETextureFontContainer14FindByFileHashERKNS_9FFileHashERm" + unaff_EBX + 0x13) =
         param_3;
    *(int *)("_ZNK3STG22GETextureFontContainer14FindByFileHashERKNS_9FFileHashERm" +
            unaff_EBX + 0x17) = iVar3;
    pthread_once((pthread_once_t *)
                 ("_ZNK3STG22GETextureFontContainer14FindByFileHashERKNS_9FFileHashERm" +
                 unaff_EBX + 7),(__init_routine *)(unaff_EBX + -0x523));
    uVar2 = 1;
  }
  return uVar2;
}

