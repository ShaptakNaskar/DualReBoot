/* 00081460 | FUN_00081460 */

void FUN_00081460(code *param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  if (param_1 == (code *)0x0) {
    param_1 = (code *)(unaff_EBX + -0x26);
  }
  (*param_1)();
  do {
    uVar1 = FUN_00081440();
    FUN_0007fc10(uVar1);
    FUN_0007fcc0();
  } while( true );
}

