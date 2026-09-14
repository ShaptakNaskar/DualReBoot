/* 00078d00 | __gnu_Unwind_Backtrace */

int __gnu_Unwind_Backtrace(code *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_2a8 [16];
  code *local_298;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  undefined4 uStack_238;
  undefined4 uStack_234;
  undefined4 uStack_230;
  undefined4 local_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 local_210;
  
  *(undefined4 *)(param_3 + 0x40) = *(undefined4 *)(param_3 + 0x3c);
  local_24c = *(undefined4 *)(param_3 + 4);
  uStack_248 = *(undefined4 *)(param_3 + 8);
  uStack_244 = *(undefined4 *)(param_3 + 0xc);
  uStack_240 = *(undefined4 *)(param_3 + 0x10);
  local_23c = *(undefined4 *)(param_3 + 0x14);
  uStack_238 = *(undefined4 *)(param_3 + 0x18);
  uStack_234 = *(undefined4 *)(param_3 + 0x1c);
  uStack_230 = *(undefined4 *)(param_3 + 0x20);
  local_22c = *(undefined4 *)(param_3 + 0x24);
  uStack_228 = *(undefined4 *)(param_3 + 0x28);
  uStack_224 = *(undefined4 *)(param_3 + 0x2c);
  uStack_220 = *(undefined4 *)(param_3 + 0x30);
  local_21c = *(undefined4 *)(param_3 + 0x34);
  uStack_218 = *(undefined4 *)(param_3 + 0x38);
  uStack_214 = *(undefined4 *)(param_3 + 0x3c);
  local_210 = *(undefined4 *)(param_3 + 0x40);
  local_250 = 0xffffffff;
  do {
    iVar1 = FUN_00077ffc(auStack_2a8,local_210);
    if (iVar1 != 0) {
LAB_00078da8:
      iVar1 = 9;
      break;
    }
    FUN_00078458(&local_250,0xc,auStack_2a8);
    iVar1 = (*param_1)(&local_250,param_2);
    if (iVar1 != 0) goto LAB_00078da8;
    iVar1 = (*local_298)(8,auStack_2a8,&local_250);
  } while (iVar1 != 9 && iVar1 != 5);
  FUN_000781d0(&local_250);
  return iVar1;
}

