/* 0008567b | FUN_0008567b */

void __regparm1 FUN_0008567b(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int extraout_ECX;
  int iVar2;
  int unaff_EBX;
  undefined4 *puVar3;
  byte bVar4;
  undefined4 unaff_retaddr;
  __init_routine *__init_routine;
  undefined1 local_e0 [152];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 uStack_14;
  
  bVar4 = 0;
  uStack_14 = 0x8568f;
  uVar1 = FUN_0002e044();
  puVar3 = param_1;
  for (iVar2 = extraout_ECX; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = uVar1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  param_1[0x18] = 0x40000000;
  param_1[0x13] = unaff_retaddr;
  iVar2 = FUN_000853d5();
  if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  __init_routine = (__init_routine *)(unaff_EBX + -0x13cc);
  iVar2 = pthread_once((pthread_once_t *)
                       (
                       "_ZNK3STG16GEAnimationTrack8EvaluateENS_19GEAnimationTimeData7EDriverERKS1_bRKNS_10UTimeValueIyLm1EEE"
                       + unaff_EBX + 99),__init_routine);
  if ((iVar2 != 0) && ("_ZN3STG14GEBufferObjectC2ENS0_5ETypeENS0_6EUsageE"[unaff_EBX + 2] == '\0'))
  {
    FUN_000842c3();
  }
  FUN_0008428d(local_e0,__init_routine,puVar3);
  local_3c = 1;
  local_44 = 4;
  local_48 = 0;
  FUN_00084c8b();
  param_1[0x13] = param_2;
  return;
}

