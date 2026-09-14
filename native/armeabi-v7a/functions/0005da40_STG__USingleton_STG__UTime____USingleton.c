/* 0005da40 | STG::USingleton<STG::UTime>::~USingleton */

/* STG::USingleton<STG::UTime>::~USingleton() */

USingleton<STG::UTime> * __thiscall
STG::USingleton<STG::UTime>::~USingleton(USingleton<STG::UTime> *this)

{
  *(int *)this = *(int *)(DAT_0005da64 + 0x5da50) + 8;
  operator_delete(this);
  return this;
}

