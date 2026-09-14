/* 0003f4e0 | STG::GERendererAPI::GL_GetSamplerState */

/* STG::GERendererAPI::GL_GetSamplerState(STG::GERendererAPI::ETextureFilter const&,
   STG::GERendererAPI::ETextureAddress const&) */

char STG::GERendererAPI::GL_GetSamplerState(ETextureFilter *param_1,ETextureAddress *param_2)

{
  int iVar1;
  char cVar2;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    cVar2 = '\0';
    if (*(int *)param_2 != 0) {
      return (*(int *)param_2 == 1) * '\x03' + '\x01';
    }
  }
  else if (iVar1 == 1) {
    cVar2 = '\x01';
    if (*(int *)param_2 != 0) {
      return (*(int *)param_2 == 1) * '\x04' + '\x01';
    }
  }
  else {
    cVar2 = '\x01';
    if (iVar1 == 2) {
      cVar2 = '\x02';
      if (*(int *)param_2 != 0) {
        return (*(int *)param_2 == 1) * '\x05' + '\x01';
      }
    }
  }
  return cVar2;
}

