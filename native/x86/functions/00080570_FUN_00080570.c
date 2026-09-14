/* 00080570 | FUN_00080570 */

void FUN_00080570(int *param_1,uint param_2,char param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int unaff_EBX;
  char *local_48;
  char *local_30;
  char *local_2c;
  char *local_28;
  int local_24;
  char *local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x80579;
  FUN_0002e044();
  uVar4 = param_2 & 1;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 3;
  if (uVar4 == 0) {
    if ((param_2 & 2) == 0) {
      return;
    }
    if ((param_2 & 0xc) == 0xc) {
      param_1[6] = 2;
      return;
    }
  }
  else if ((param_2 & 0xe) != 0) {
    return;
  }
  local_30 = (char *)_Unwind_GetLanguageSpecificData(param_5);
  if (local_30 != (char *)0x0) {
    param_1[3] = (int)local_30;
    iVar5 = _Unwind_GetIP(param_5);
    iVar6 = _Unwind_GetRegionStart(param_5);
    uVar1 = (iVar5 + -1) - iVar6;
    cVar2 = *local_30;
    local_30 = local_30 + 1;
    iVar5 = FUN_000837b0(&local_30,cVar2);
    local_48 = (char *)0x0;
    if (iVar5 != 0) {
      iVar6 = iVar5;
    }
    cVar2 = *local_30;
    local_30 = local_30 + 1;
    if (cVar2 != -1) {
      iVar5 = FUN_00083730(&local_30);
      local_48 = local_30 + iVar5;
    }
    cVar3 = *local_30;
    local_30 = local_30 + 1;
    iVar5 = FUN_00083730(&local_30);
    pcVar7 = local_30 + iVar5;
    local_2c = local_30;
    do {
      if (pcVar7 <= local_2c) goto LAB_00080a7b;
      uVar8 = FUN_000837b0(&local_2c,cVar3);
      iVar5 = FUN_000837b0(&local_2c,cVar3);
      iVar9 = FUN_000837b0(&local_2c,cVar3);
      iVar10 = FUN_00083730(&local_2c);
      if (uVar1 < uVar8) goto LAB_000806fe;
    } while (uVar8 + iVar5 <= uVar1);
    if (iVar9 != 0) {
      iVar6 = iVar6 + iVar9;
      if (iVar10 == 0) {
        if ((param_2 & 6) == 2) {
          *param_1 = 0;
          param_1[1] = 0;
          param_1[4] = iVar6;
          param_1[6] = 6;
        }
        else {
          param_1[6] = 8;
        }
        return;
      }
      pcVar7 = pcVar7 + iVar10 + -1;
      do {
        local_28 = pcVar7;
        iVar5 = FUN_00083760(&local_28);
        iVar9 = iVar5 >> 0x1f;
        if (iVar9 < 0) {
          if (iVar5 == 0) {
LAB_00080721:
            if ((param_2 & 6) == 2) {
              *param_1 = 0;
              param_1[1] = 0;
LAB_00080748:
              param_1[2] = (int)pcVar7;
              param_1[4] = iVar6;
              param_1[5] = param_4 + 0x20;
              param_1[6] = 6;
              return;
            }
          }
          else {
            if (param_3 != '\0') {
              iVar10 = param_4 + 0x20;
              if ((iVar10 != 0) && (*(int *)(param_4 + -0x2c) != 0)) {
                cVar3 = FUN_000804c0(iVar5,iVar9,local_48,cVar2,*(int *)(param_4 + -0x2c),iVar10,
                                     param_4);
                if (cVar3 != '\0') {
                  if (uVar4 != 0) {
                    param_1[4] = iVar6;
                    *param_1 = iVar5;
                    param_1[1] = iVar9;
                    param_1[2] = (int)pcVar7;
                    param_1[5] = iVar10;
                    param_1[6] = 6;
                    return;
                  }
                  goto LAB_000808f5;
                }
                goto LAB_00080903;
              }
LAB_00080a7b:
                    /* WARNING: Subroutine does not return */
              FUN_000803f0(param_4);
            }
            if ((param_2 & 5) != 0) {
              param_1[4] = iVar6;
              *param_1 = iVar5;
              param_1[1] = iVar9;
              param_1[2] = (int)pcVar7;
              param_1[5] = param_4 + 0x20;
              param_1[6] = 6;
              return;
            }
            if ((param_2 & 8) == 0) goto LAB_000806fe;
          }
        }
        else {
          if ((-1 < iVar5 || iVar9 < 0) && (iVar5 == 0)) goto LAB_00080721;
          piVar11 = (int *)FUN_00080420(iVar5,iVar9,local_48,cVar2,param_4);
          if (piVar11 == (int *)0x0) {
            if ((param_2 & 5) != 0) {
              *param_1 = iVar5;
              param_1[1] = iVar9;
              goto LAB_00080748;
            }
LAB_000808f5:
            if ((param_2 & 8) == 0) goto LAB_00080a7b;
          }
          else if (param_3 != '\0') {
            local_24 = param_4 + 0x20;
            iVar10 = *(int *)(param_4 + -0x2c);
            if ((local_24 == 0) || (iVar10 == 0)) {
LAB_000806fe:
                    /* WARNING: Subroutine does not return */
              FUN_000803f0(param_4);
            }
            iVar12 = FUN_00080240(iVar10,*(undefined4 *)
                                          (
                                          "_ZN3STG13GERendererAPI18GL_SetAmbientLightERKNS_7GEColorE"
                                          + unaff_EBX + 0x33),
                                  *(undefined4 *)
                                   ("_ZN3STG13GERendererAPI13GL_GenTextureERm" + unaff_EBX + 1),0);
            if (iVar12 != 0) {
              local_24 = *(int *)(param_4 + 0x20);
            }
            cVar3 = (**(code **)(*piVar11 + 8))(piVar11,iVar10,&local_24);
            if (cVar3 != '\0') {
              if (uVar4 != 0) {
                param_1[4] = iVar6;
                *param_1 = iVar5;
                param_1[1] = iVar9;
                param_1[2] = (int)pcVar7;
                param_1[5] = local_24;
                param_1[6] = 6;
                return;
              }
              goto LAB_000808f5;
            }
          }
        }
LAB_00080903:
        local_20[0] = local_28;
        iVar5 = FUN_00083760(local_20);
        if (iVar5 == 0) break;
        pcVar7 = local_28 + iVar5;
      } while( true );
    }
  }
  param_1[6] = 8;
  return;
}

