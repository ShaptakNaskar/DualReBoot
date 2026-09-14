/* 00074678 | FUN_00074678 */

void FUN_00074678(code *param_1)

{
  if (param_1 == (code *)0x0) goto LAB_00074684;
  do {
    (*param_1)();
    FUN_00074668();
LAB_00074684:
    param_1 = (code *)(&UNK_0007468a + DAT_00074694);
  } while( true );
}

