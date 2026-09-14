/* 00047bf0 | STG::GEScene::ApplyQualityLevel */

/* STG::GEScene::ApplyQualityLevel(STG::GEScene::EQualityLevel const&,
   STG::GERendererAPI::Capabilities const&) */

void __thiscall
STG::GEScene::ApplyQualityLevel(GEScene *this,EQualityLevel *param_1,Capabilities *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint local_28;
  undefined4 local_20 [2];
  int local_18;
  undefined4 local_14;
  
  local_14 = 0x47bfb;
  FUN_0002e044();
  uVar6 = *(uint *)(this + 0xa4);
  if (uVar6 != 0) {
    local_28 = 0;
    do {
      iVar1 = *(int *)(*(int *)(this + 0xb0) + local_28 * 4);
      if (*(int *)(iVar1 + 0x30) != 0) {
        uVar6 = 0;
        do {
          iVar2 = *(int *)(*(int *)(iVar1 + 0x84) + uVar6 * 4);
          local_18 = *(int *)(iVar2 + 0x34);
          uVar5 = *(undefined4 *)(iVar2 + 0x44);
          if (local_18 != 3) {
            local_20[0] = GERendererAPI::GL_GetFilterMode((ESamplerState *)&local_18);
            local_14 = GERendererAPI::GL_GetAddressMode((ESamplerState *)&local_18);
            iVar3 = *(int *)param_1;
            if (iVar3 == 1) {
              local_20[0] = 1;
              uVar5 = 0;
            }
            else if (iVar3 < 2) {
              if (iVar3 == 0) {
                local_20[0] = 0;
                uVar5 = 0;
              }
            }
            else if (iVar3 == 2) {
              local_20[0] = 2;
              uVar5 = 0;
            }
            else if (iVar3 == 3) {
              local_20[0] = 2;
              uVar5 = *(undefined4 *)param_2;
            }
            uVar4 = GERendererAPI::GL_GetSamplerState
                              ((ETextureFilter *)local_20,(ETextureAddress *)&local_14);
            *(undefined4 *)(iVar2 + 0x34) = uVar4;
            *(undefined4 *)(iVar2 + 0x44) = uVar5;
          }
          local_18 = *(int *)(iVar2 + 0x38);
          uVar5 = *(undefined4 *)(iVar2 + 0x48);
          if (local_18 != 3) {
            local_20[0] = GERendererAPI::GL_GetFilterMode((ESamplerState *)&local_18);
            local_14 = GERendererAPI::GL_GetAddressMode((ESamplerState *)&local_18);
            iVar3 = *(int *)param_1;
            if (iVar3 == 1) {
              local_20[0] = 1;
              uVar5 = 0;
            }
            else if (iVar3 < 2) {
              if (iVar3 == 0) {
                local_20[0] = 0;
                uVar5 = 0;
              }
            }
            else if (iVar3 == 2) {
              local_20[0] = 2;
              uVar5 = 0;
            }
            else if (iVar3 == 3) {
              local_20[0] = 2;
              uVar5 = *(undefined4 *)param_2;
            }
            uVar4 = GERendererAPI::GL_GetSamplerState
                              ((ETextureFilter *)local_20,(ETextureAddress *)&local_14);
            *(undefined4 *)(iVar2 + 0x38) = uVar4;
            *(undefined4 *)(iVar2 + 0x48) = uVar5;
          }
          if (*(int *)param_1 == 0) {
            *(undefined4 *)(iVar2 + 0x38) = 3;
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 < *(uint *)(iVar1 + 0x30));
        uVar6 = *(uint *)(this + 0xa4);
      }
      local_28 = local_28 + 1;
    } while (local_28 < uVar6);
  }
  return;
}

