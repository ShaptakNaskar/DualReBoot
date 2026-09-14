/* 00070370 | FUN_00070370 */

void FUN_00070370(code *param_1)

{
  if (param_1 == (code *)0x0) goto LAB_0007037a;
  (*param_1)();
  do {
    FUN_0007035c();
LAB_0007037a:
    (*(code *)(DAT_00070390 + 0x70380))();
  } while( true );
}

