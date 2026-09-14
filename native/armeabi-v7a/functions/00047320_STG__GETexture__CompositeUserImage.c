/* 00047320 | STG::GETexture::CompositeUserImage */

/* STG::GETexture::CompositeUserImage(STG::UStringBase<char, int> const&,
   STG::GEPixelFormat::EFormat const&, unsigned long, unsigned long, STG::GETextureShading::EEffect,
   unsigned char*&) */

void STG::GETexture::CompositeUserImage
               (UStringBase *param_1,int *param_2,ulong param_3,uint param_4,undefined4 param_5,
               undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  void *__s;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uchar *puVar11;
  uchar *puVar12;
  bool bVar13;
  bool bVar14;
  int local_6c;
  int local_68;
  int local_64;
  size_t local_48;
  uchar local_40;
  uchar local_3f;
  uchar local_3e;
  uchar local_3d;
  uchar local_3c;
  uchar local_3b;
  uchar local_3a;
  uchar local_39;
  uint local_38;
  uchar *local_34;
  ulong local_30;
  ulong local_2c [2];
  
  *param_6 = 0;
  if ((*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x18)) &&
     (((iVar8 = *param_2, iVar8 == 10 || iVar8 == 1 || (iVar8 == 9)) || (iVar8 == 0)))) {
    local_34 = (uchar *)0x0;
    local_30 = 0;
    local_2c[0] = 0;
    local_38 = 0xc;
    iVar8 = Platform_AcquireUserImage
                      (param_1,param_3,param_4,(EFormat *)&local_38,&local_34,&local_30,local_2c);
    if (iVar8 != 0) {
      if ((local_38 == 10 || local_38 == 1) || (local_38 == 9)) {
        iVar8 = 1;
      }
      else {
        iVar8 = 1 - local_38;
        if (1 < local_38) {
          iVar8 = 0;
        }
      }
      if (((local_34 != (uchar *)0x0) && (iVar8 != 0)) && ((local_30 != 0 && (local_2c[0] != 0)))) {
        uVar1 = GERendererAPI::GL_GetTextureBitPerPixel();
        iVar8 = local_30 * (uVar1 >> 3);
        uVar2 = GERendererAPI::GL_GetTextureBitPerPixel(*param_2);
        bVar14 = param_4 == 0 && param_3 == 0;
        if (bVar14) {
          local_48 = 0;
        }
        uVar2 = uVar2 >> 3;
        if (bVar14) {
          uVar4 = 0;
        }
        else {
          uVar4 = 0;
          uVar6 = param_3;
          uVar9 = param_4;
          do {
            if (uVar6 == 0) {
              uVar6 = 1;
            }
            if (uVar9 == 0) {
              uVar9 = 1;
            }
            iVar3 = uVar6 * uVar9;
            uVar6 = uVar6 >> 1;
            uVar9 = uVar9 >> 1;
            uVar4 = uVar2 * iVar3 + uVar4;
            local_48 = uVar4;
          } while (uVar9 != 0 || uVar6 != 0);
        }
        __s = operator_new__(uVar4);
        *param_6 = __s;
        memset(__s,0,local_48);
        local_6c = (local_2c[0] >> 1) + (param_4 >> 1);
        iVar3 = local_6c - local_2c[0];
        iVar5 = (param_3 >> 1) - (local_30 >> 1);
        iVar7 = iVar5 + local_30;
        if (iVar3 < local_6c) {
          puVar12 = (uchar *)*param_6;
          local_64 = 0;
          local_68 = local_6c * param_3 * uVar2;
          do {
            if ((-1 < local_6c && local_6c < (int)param_4) &&
               (puVar11 = local_34 + local_64, iVar5 < iVar7)) {
              puVar12 = puVar12 + iVar5 * uVar2 + local_68;
              iVar10 = iVar5;
              do {
                bVar14 = iVar10 < (int)param_3;
                bVar13 = -1 < iVar10;
                iVar10 = iVar10 + 1;
                if (bVar13 && bVar14) {
                  GetPixel((EFormat *)&local_38,puVar11,&local_40,&local_3f,&local_3e,&local_3d);
                  GETextureShading::ShadePixel
                            (param_5,local_40,local_3f,local_3e,local_3d,&local_3c,&local_3b,
                             &local_3a,&local_39);
                  SetPixel((EFormat *)param_2,puVar12,local_3c,local_3b,local_3a,local_39);
                }
                puVar11 = puVar11 + (uVar1 >> 3);
                puVar12 = puVar12 + uVar2;
              } while (iVar7 != iVar10);
              puVar12 = (uchar *)*param_6;
            }
            local_6c = local_6c + -1;
            local_68 = local_68 - param_3 * uVar2;
            local_64 = local_64 + iVar8;
          } while (iVar3 != local_6c);
        }
        else {
          puVar12 = (uchar *)*param_6;
        }
        GenerateMipChain((EFormat *)param_2,param_3,param_4,local_48,puVar12,0);
      }
      Platform_ReleaseUserImage(&local_34);
    }
  }
  return;
}

