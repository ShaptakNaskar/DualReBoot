/* 000727c4 | _Unwind_VRS_Get */

undefined4 _Unwind_VRS_Get(int param_1,uint param_2,uint param_3,int param_4,undefined4 *param_5)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (param_2 == 0) {
    bVar2 = param_3 == 0xf;
    if (param_3 < 0x10) {
      bVar2 = param_4 == 0;
    }
    if (bVar2) {
      uVar1 = 0;
      *param_5 = *(undefined4 *)(param_1 + param_3 * 4 + 4);
    }
    else {
      uVar1 = 2;
    }
    return uVar1;
  }
  if (param_2 < 5) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}

