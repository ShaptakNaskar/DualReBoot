/* 00062270 | STG::USingleton<STG::UTime>::~USingleton */

/* STG::USingleton<STG::UTime>::~USingleton() */

USingleton<STG::UTime> * __thiscall
STG::USingleton<STG::UTime>::~USingleton(USingleton<STG::UTime> *this)

{
  *(int *)this = *(int *)(DAT_00062294 + 0x62280) + 8;
  operator_delete(this);
  return this;
}

