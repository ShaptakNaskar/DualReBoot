/* 00085cdc | _Unwind_DeleteException */

void _Unwind_DeleteException(int param_1)

{
  undefined4 in_ECX;
  
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(1,param_1,in_ECX,in_ECX);
  }
  return;
}

