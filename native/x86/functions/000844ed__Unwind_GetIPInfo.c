/* 000844ed | _Unwind_GetIPInfo */

undefined4 _Unwind_GetIPInfo(int param_1,uint *param_2)

{
  *param_2 = *(uint *)(param_1 + 0x60) >> 0x1f;
  return *(undefined4 *)(param_1 + 0x4c);
}

