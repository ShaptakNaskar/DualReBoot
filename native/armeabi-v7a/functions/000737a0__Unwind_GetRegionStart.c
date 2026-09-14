/* 000737a0 | _Unwind_GetRegionStart */

undefined4
_Unwind_GetRegionStart(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_c;
  
  local_c = param_4;
  _Unwind_VRS_Get(param_1,0,0xc,0,&local_c,param_2,param_3);
  return *(undefined4 *)(local_c + 0x48);
}

