/* 000404f0 | STG::GERendererAPI::GL_LoadTexImage2D */

/* STG::GERendererAPI::GL_LoadTexImage2D(STG::GEPixelFormat::EFormat, STG::GEPixelFormat::EFormat,
   unsigned long, unsigned long, unsigned long, unsigned char const*) */

void STG::GERendererAPI::GL_LoadTexImage2D
               (int param_1,int param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  bVar9 = false;
  FUN_0002e044();
  if (param_2 == param_1) {
    cVar1 = GL_GetTextureIsCompressed(param_2);
    bVar9 = cVar1 != '\0';
  }
  uVar2 = GL_GetTextureEnum(param_1);
  uVar3 = GL_GetTextureEnum(param_2);
  uVar4 = GL_GetTextureDataType(param_1);
  if (param_5 != 0) {
    iVar8 = 0;
    if (bVar9) {
      do {
        uVar7 = param_3 >> ((byte)iVar8 & 0x1f);
        uVar6 = param_4 >> ((byte)iVar8 & 0x1f);
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        iVar5 = GL_GetTextureDataSize(uVar7,uVar6,param_1);
        uVar2 = GL_GetTextureDataSize(uVar7,uVar6,param_2);
        glCompressedTexImage2D(0xde1,iVar8,uVar3,uVar7,uVar6,0,uVar2,param_6);
        if (param_6 != 0) {
          param_6 = iVar5 + param_6;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != param_5);
    }
    else {
      do {
        uVar7 = param_3 >> ((byte)iVar8 & 0x1f);
        uVar6 = param_4 >> ((byte)iVar8 & 0x1f);
        if (uVar7 == 0) {
          uVar7 = 1;
        }
        if (uVar6 == 0) {
          uVar6 = 1;
        }
        iVar5 = GL_GetTextureDataSize(uVar7,uVar6,param_1);
        GL_GetTextureDataSize(uVar7,uVar6,param_2);
        glTexImage2D(0xde1,iVar8,uVar3,uVar7,uVar6,0,uVar2,uVar4,param_6);
        if (param_6 != 0) {
          param_6 = iVar5 + param_6;
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 != param_5);
    }
  }
  return;
}

