/* 000394c4 | STG::USingleton<STG::GETextureList>::~USingleton */

/* STG::USingleton<STG::GETextureList>::~USingleton() */

USingleton<STG::GETextureList> * __thiscall
STG::USingleton<STG::GETextureList>::~USingleton(USingleton<STG::GETextureList> *this)

{
  *(int *)this = *(int *)(DAT_000394e8 + 0x394d4) + 8;
  operator_delete(this);
  return this;
}

