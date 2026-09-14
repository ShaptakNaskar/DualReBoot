/* 00084527 | _Unwind_FindEnclosingFunction */

undefined4 _Unwind_FindEnclosingFunction(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_18 [8];
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = 0x84530;
  FUN_0002e044();
  iVar1 = _Unwind_Find_FDE(param_1 + -1,local_18);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = local_10;
  }
  return uVar2;
}

