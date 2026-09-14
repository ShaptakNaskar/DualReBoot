/* 00084503 | _Unwind_SetIP */

void _Unwind_SetIP(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  return;
}

