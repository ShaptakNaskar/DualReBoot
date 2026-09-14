/* 00039f60 | STG::USingleton<STG::GETextureList>::~USingleton */

/* STG::USingleton<STG::GETextureList>::~USingleton() */

void __thiscall
STG::USingleton<STG::GETextureList>::~USingleton(USingleton<STG::GETextureList> *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(unaff_EBX + 0x61f26) + 8;
  operator_delete(this);
  return;
}

