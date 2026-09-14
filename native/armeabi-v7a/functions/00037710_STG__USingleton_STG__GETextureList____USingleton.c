/* 00037710 | STG::USingleton<STG::GETextureList>::~USingleton */

/* STG::USingleton<STG::GETextureList>::~USingleton() */

USingleton<STG::GETextureList> * __thiscall
STG::USingleton<STG::GETextureList>::~USingleton(USingleton<STG::GETextureList> *this)

{
  *(int *)this = *(int *)(DAT_00037734 + 0x37720) + 8;
  operator_delete(this);
  return this;
}

