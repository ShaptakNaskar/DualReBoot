/* 00080af0 | FUN_00080af0 */

void FUN_00080af0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0002e044();
  _Unwind_SetGR(param_2,0,param_1);
  _Unwind_SetGR(param_2,2,*param_3);
  _Unwind_SetIP(param_2,param_3[4]);
  return;
}

