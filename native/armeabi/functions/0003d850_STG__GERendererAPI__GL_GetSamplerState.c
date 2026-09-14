/* 0003d850 | STG::GERendererAPI::GL_GetSamplerState */

/* STG::GERendererAPI::GL_GetSamplerState(STG::GERendererAPI::ETextureFilter const&,
   STG::GERendererAPI::ETextureAddress const&) */

undefined4 STG::GERendererAPI::GL_GetSamplerState(ETextureFilter *param_1,ETextureAddress *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == 0) {
    if (*(int *)param_2 != 0) {
      if (*(int *)param_2 == 1) {
        uVar2 = 4;
      }
      else {
        uVar2 = 1;
      }
      return uVar2;
    }
    return 0;
  }
  if (iVar1 == 1) {
    if (*(int *)param_2 != 0) {
      if (*(int *)param_2 == 1) {
        uVar2 = 5;
      }
      else {
        uVar2 = 1;
      }
      return uVar2;
    }
    return 1;
  }
  if (iVar1 != 2) {
    return 1;
  }
  if (*(int *)param_2 != 0) {
    if (*(int *)param_2 == 1) {
      uVar2 = 6;
    }
    else {
      uVar2 = 1;
    }
    return uVar2;
  }
  return 2;
}

