/* 0006f17c | android_setCpu */

undefined4 android_setCpu(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_0006f1ac;
  if (*(int *)(DAT_0006f1ac + 0x6f184) == 0) {
    *(undefined4 *)(DAT_0006f1ac + 0x6f18c) = param_3;
    *(undefined4 *)(iVar1 + 0x6f190) = param_4;
    *(undefined4 *)(iVar1 + 0x6f188) = 1;
    if (param_1 < 1) {
      param_1 = 1;
    }
    *(int *)(iVar1 + 0x6f194) = param_1;
    pthread_once((pthread_once_t *)(iVar1 + 0x6f19c),(__init_routine *)(DAT_0006f1b0 + 0x6f1a0));
    return 1;
  }
  return 0;
}

