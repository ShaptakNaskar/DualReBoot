/* 0006b0c0 | STG::USingleton<STG::UTime>::~USingleton */

/* STG::USingleton<STG::UTime>::~USingleton() */

void __thiscall STG::USingleton<STG::UTime>::~USingleton(USingleton<STG::UTime> *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x30e4e) + 8;
  operator_delete(this);
  return;
}

