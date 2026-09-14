/* 0004f120 | STG::GETexture::CompositeUserImage */

/* STG::GETexture::CompositeUserImage(STG::UStringBase<char, int> const&,
   STG::GEPixelFormat::EFormat const&, unsigned long, unsigned long, STG::GETextureShading::EEffect,
   unsigned char*&) */

void STG::GETexture::CompositeUserImage
               (UStringBase *param_1,int *param_2,uint param_3,uint param_4,undefined4 param_5,
               int *param_6)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  int iVar7;
  uchar *puVar8;
  int iVar9;
  uint uVar10;
  uchar *puVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  uint local_7c;
  int local_78;
  int local_74;
  int local_70;
  uchar local_58;
  uchar local_57;
  uchar local_56;
  uchar local_55;
  uchar local_54;
  uchar local_53;
  uchar local_52;
  uchar local_51;
  int local_50 [4];
  uchar *local_40 [4];
  ulong local_30 [4];
  ulong local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x4f12b;
  FUN_0002e044();
  *param_6 = 0;
  if ((*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) &&
     ((((iVar4 = *param_2, iVar4 == 1 || (iVar4 == 10)) || (iVar4 == 9)) || (iVar4 == 0)))) {
    local_50[0] = 0xc;
    local_40[0] = (uchar *)0x0;
    local_30[0] = 0;
    local_20[0] = 0;
    cVar2 = Platform_AcquireUserImage
                      (param_1,param_3,param_4,(EFormat *)local_50,local_40,local_30,local_20);
    if (cVar2 != '\0') {
      bVar14 = true;
      if (((local_50[0] != 1) && (local_50[0] != 10)) && (local_50[0] != 9)) {
        bVar14 = local_50[0] == 0;
      }
      if (((local_40[0] != (uchar *)0x0) && (bVar14)) && ((local_30[0] != 0 && (local_20[0] != 0))))
      {
        uVar3 = GERendererAPI::GL_GetTextureBitPerPixel(local_50[0]);
        iVar4 = (uVar3 >> 3) * local_30[0];
        uVar5 = GERendererAPI::GL_GetTextureBitPerPixel(*param_2);
        uVar5 = uVar5 >> 3;
        local_7c = 0;
        uVar6 = param_4;
        uVar10 = param_3;
        if (param_4 != 0 || param_3 != 0) {
          do {
            if (uVar10 == 0) {
              uVar10 = 1;
            }
            if (uVar6 == 0) {
              uVar6 = 1;
            }
            local_7c = local_7c + uVar6 * uVar10 * uVar5;
            uVar1 = uVar6 | uVar10;
            uVar6 = uVar6 >> 1;
            uVar10 = uVar10 >> 1;
          } while (uVar1 >> 1 != 0);
        }
        __s = operator_new__(local_7c);
        *param_6 = (int)__s;
        memset(__s,0,local_7c);
        iVar12 = (param_3 >> 1) - (local_30[0] >> 1);
        iVar9 = local_30[0] + iVar12;
        local_70 = (param_4 >> 1) + (local_20[0] >> 1);
        iVar7 = local_70 - local_20[0];
        if (iVar7 < local_70) {
          local_78 = 0;
          local_74 = uVar5 * param_3 * local_70;
          puVar8 = (uchar *)*param_6;
          do {
            if ((local_70 < (int)param_4) && (-1 < local_70)) {
              puVar11 = local_40[0] + local_78;
              if (iVar12 < iVar9) {
                puVar8 = puVar8 + uVar5 * iVar12 + local_74;
                iVar13 = iVar12;
                do {
                  if ((iVar13 < (int)param_3) && (-1 < iVar13)) {
                    GetPixel((EFormat *)local_50,puVar11,&local_58,&local_57,&local_56,&local_55);
                    GETextureShading::ShadePixel
                              (param_5,local_58,local_57,local_56,local_55,&local_54,&local_53,
                               &local_52,&local_51);
                    SetPixel((EFormat *)param_2,puVar8,local_54,local_53,local_52,local_51);
                  }
                  iVar13 = iVar13 + 1;
                  puVar11 = puVar11 + (uVar3 >> 3);
                  puVar8 = puVar8 + uVar5;
                } while (iVar9 != iVar13);
                puVar8 = (uchar *)*param_6;
              }
            }
            local_70 = local_70 + -1;
            local_74 = local_74 - uVar5 * param_3;
            local_78 = local_78 + iVar4;
          } while (iVar7 != local_70);
        }
        else {
          puVar8 = (uchar *)*param_6;
        }
        GenerateMipChain((EFormat *)param_2,param_3,param_4,local_7c,puVar8,0);
      }
      Platform_ReleaseUserImage(local_40);
    }
  }
  return;
}

