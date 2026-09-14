/* 000737cc | _Unwind_GetLanguageSpecificData */

int _Unwind_GetLanguageSpecificData
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int local_c;
  
  local_c = param_4;
  _Unwind_VRS_Get(param_1,0,0xc,0,&local_c,param_2,param_3);
  return *(int *)(local_c + 0x4c) + (uint)*(byte *)(*(int *)(local_c + 0x4c) + 7) * 4 + 8;
}

