/* 00083ee4 | __popcountsi2 */

int __popcountsi2(uint param_1)

{
  int iVar1;
  byte bVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBX;
  
  iVar1 = FUN_0002e044();
  iVar3 = extraout_ECX;
  do {
    bVar2 = (byte)iVar3;
    iVar3 = iVar3 + 8;
    iVar1 = iVar1 + (uint)*(byte *)(*(int *)("_ZN3STG18FFileManagerScopedC2EP7_JNIEnvP8_jobject" +
                                            unaff_EBX + 0x2c) + (param_1 >> (bVar2 & 0x1f) & 0xff));
  } while (iVar3 != 0x20);
  return iVar1;
}

