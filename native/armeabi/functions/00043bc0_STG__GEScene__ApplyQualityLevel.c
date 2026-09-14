/* 00043bc0 | STG::GEScene::ApplyQualityLevel */

/* STG::GEScene::ApplyQualityLevel(STG::GEScene::EQualityLevel const&,
   STG::GERendererAPI::Capabilities const&) */

void __thiscall
STG::GEScene::ApplyQualityLevel(GEScene *this,EQualityLevel *param_1,Capabilities *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c [2];
  
  uVar2 = *(uint *)(this + 0xa4);
  if (uVar2 != 0) {
    uVar5 = 0;
    do {
      iVar4 = *(int *)(*(int *)(this + 0xb0) + uVar5 * 4);
      if (*(int *)(iVar4 + 0x30) != 0) {
        uVar2 = 0;
        do {
          iVar3 = *(int *)(*(int *)(iVar4 + 0x84) + uVar2 * 4);
          local_34 = *(int *)(iVar3 + 0x34);
          uVar6 = *(undefined4 *)(iVar3 + 0x44);
          if (local_34 != 3) {
            local_30 = GERendererAPI::GL_GetFilterMode((ESamplerState *)&local_34);
            local_2c[0] = GERendererAPI::GL_GetAddressMode((ESamplerState *)&local_34);
            switch(*(undefined4 *)param_1) {
            case 0:
              uVar6 = 0;
              local_30 = 0;
              break;
            case 1:
              local_30 = 1;
              uVar6 = 0;
              break;
            case 2:
              local_30 = 2;
              uVar6 = 0;
              break;
            case 3:
              local_30 = 2;
              uVar6 = *(undefined4 *)param_2;
            }
            uVar1 = GERendererAPI::GL_GetSamplerState
                              ((ETextureFilter *)&local_30,(ETextureAddress *)local_2c);
            *(undefined4 *)(iVar3 + 0x44) = uVar6;
            *(undefined4 *)(iVar3 + 0x34) = uVar1;
          }
          local_34 = *(int *)(iVar3 + 0x38);
          uVar6 = *(undefined4 *)(iVar3 + 0x48);
          if (local_34 != 3) {
            local_30 = GERendererAPI::GL_GetFilterMode((ESamplerState *)&local_34);
            local_2c[0] = GERendererAPI::GL_GetAddressMode((ESamplerState *)&local_34);
            switch(*(undefined4 *)param_1) {
            case 0:
              uVar6 = 0;
              local_30 = 0;
              break;
            case 1:
              local_30 = 1;
              uVar6 = 0;
              break;
            case 2:
              local_30 = 2;
              uVar6 = 0;
              break;
            case 3:
              local_30 = 2;
              uVar6 = *(undefined4 *)param_2;
            }
            uVar1 = GERendererAPI::GL_GetSamplerState
                              ((ETextureFilter *)&local_30,(ETextureAddress *)local_2c);
            *(undefined4 *)(iVar3 + 0x48) = uVar6;
            *(undefined4 *)(iVar3 + 0x38) = uVar1;
          }
          uVar2 = uVar2 + 1;
          if (*(int *)param_1 == 0) {
            *(undefined4 *)(iVar3 + 0x38) = 3;
          }
        } while (uVar2 < *(uint *)(iVar4 + 0x30));
        uVar2 = *(uint *)(this + 0xa4);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar2);
  }
  return;
}

