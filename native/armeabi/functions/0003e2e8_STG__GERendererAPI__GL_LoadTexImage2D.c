/* 0003e2e8 | STG::GERendererAPI::GL_LoadTexImage2D */

/* STG::GERendererAPI::GL_LoadTexImage2D(STG::GEPixelFormat::EFormat, STG::GEPixelFormat::EFormat,
   unsigned long, unsigned long, unsigned long, unsigned char const*) */

void STG::GERendererAPI::GL_LoadTexImage2D
               (int param_1,int param_2,uint param_3,uint param_4,uint param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  
  if (param_2 == param_1) {
    iVar4 = GL_GetTextureIsCompressed();
    bVar9 = iVar4 != 0;
  }
  else {
    bVar9 = false;
  }
  uVar1 = GL_GetTextureEnum(param_1);
  uVar2 = GL_GetTextureEnum(param_2);
  uVar3 = GL_GetTextureDataType(param_1);
  if (param_5 != 0) {
    if (bVar9) {
      uVar5 = 0;
      do {
        uVar8 = param_3 >> (uVar5 & 0xff);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        uVar7 = param_4 >> (uVar5 & 0xff);
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        iVar4 = GL_GetTextureDataSize(uVar8,uVar7,param_1);
        uVar1 = GL_GetTextureDataSize(uVar8,uVar7,param_2);
        uVar6 = uVar5 + 1;
        glCompressedTexImage2D(0xde1,uVar5,uVar2,uVar8,uVar7,0,uVar1,param_6);
        if (param_6 != 0) {
          param_6 = param_6 + iVar4;
        }
        uVar5 = uVar6;
      } while (uVar6 != param_5);
    }
    else {
      uVar5 = 0;
      do {
        uVar8 = param_3 >> (uVar5 & 0xff);
        if (uVar8 == 0) {
          uVar8 = 1;
        }
        uVar7 = param_4 >> (uVar5 & 0xff);
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        iVar4 = GL_GetTextureDataSize(uVar8,uVar7,param_1);
        GL_GetTextureDataSize(uVar8,uVar7,param_2);
        uVar6 = uVar5 + 1;
        glTexImage2D(0xde1,uVar5,uVar2,uVar8,uVar7,0,uVar1,uVar3,param_6);
        if (param_6 != 0) {
          param_6 = param_6 + iVar4;
        }
        uVar5 = uVar6;
      } while (uVar6 != param_5);
    }
  }
  return;
}

