/* 0004a48c | STG::GETexture::Load */

/* STG::GETexture::Load(unsigned char const*, unsigned char*&) */

undefined4 __thiscall STG::GETexture::Load(GETexture *this,uchar *param_1,uchar **param_2)

{
  int iVar1;
  undefined4 uVar2;
  uchar *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int local_30;
  ulong local_2c;
  ulong local_28;
  ulong local_24 [2];
  
  GERendererAPI::GL_GenTexture((ulong *)(this + 0x94));
  GERendererAPI::GL_BindTexture(*(ulong *)(this + 0x94));
  local_30 = 0xc;
  local_2c = 0;
  local_28 = 0;
  local_24[0] = 0;
  *param_2 = (uchar *)0x0;
  if (param_1 == (uchar *)0x0) {
    CreateDebugTexture(*(ulong *)(this + 0x34),*(ulong *)(this + 0x38),(EFormat *)&local_30,
                       &local_2c,&local_28,local_24,param_2);
    puVar3 = *param_2;
    iVar5 = local_30;
    goto LAB_0004a540;
  }
  if (*(int *)param_1 == DAT_0004a8c4) {
    uVar4 = *(uint *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 0xc);
    bVar7 = uVar6 != 0;
    iVar5 = DAT_0004a8c4;
    if (!bVar7 && uVar4 == 6) {
      iVar5 = 0xb;
    }
    local_28 = *(ulong *)(param_1 + 0x18);
    local_2c = *(ulong *)(param_1 + 0x1c);
    local_24[0] = *(ulong *)(param_1 + 0x2c);
    if (bVar7 || uVar4 != 6) {
      iVar5 = local_30;
      if (bVar7 || 6 < uVar4) {
        if (uVar6 == DAT_0004a8cc && uVar4 == DAT_0004a8d0) {
          local_30 = 1;
          iVar5 = local_30;
        }
        else {
          bVar7 = uVar6 <= DAT_0004a8cc;
          if (DAT_0004a8cc == uVar6) {
            bVar7 = uVar4 <= DAT_0004a8d0;
          }
          if (bVar7) {
            if (uVar6 == 0x808 && uVar4 == 0x616c) {
              local_30 = 8;
              iVar5 = local_30;
            }
            else if (uVar6 == DAT_0004a8e0 && uVar4 == DAT_0004a8d0) {
              local_30 = 10;
              iVar5 = local_30;
            }
          }
          else if (uVar6 == DAT_0004a8d4 && uVar4 == DAT_0004a8d8) {
            local_30 = 9;
            iVar5 = local_30;
          }
          else if (uVar6 == DAT_0004a8dc && uVar4 == DAT_0004a8d8) {
            local_30 = 0;
            iVar5 = local_30;
          }
        }
      }
      else if (uVar6 == 0 && uVar4 == 1) {
        local_30 = 5;
        iVar5 = local_30;
      }
      else if (uVar6 == 0 && uVar4 == 0) {
        local_30 = 4;
        iVar5 = local_30;
      }
      else if (uVar6 == 0 && uVar4 == 2) {
        local_30 = 6;
        iVar5 = local_30;
      }
      else if (uVar6 == 0 && uVar4 == 3) {
        local_30 = 7;
        iVar5 = local_30;
      }
    }
    local_30 = iVar5;
    if (local_24[0] != 0) {
      local_24[0] = local_24[0] - 1;
    }
    puVar3 = param_1 + *(int *)(param_1 + 0x30) + 0x34;
    iVar5 = local_30;
    goto LAB_0004a520;
  }
  local_28 = *(ulong *)(param_1 + 4);
  local_2c = *(ulong *)(param_1 + 8);
  local_24[0] = *(ulong *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x2c) != DAT_0004a8c8) goto LAB_0004a508;
  switch(*(uint *)(param_1 + 0x10) & 0xff) {
  case 0x10:
    iVar5 = 9;
    local_30 = 9;
    goto LAB_0004a84c;
  case 0x11:
    break;
  case 0x12:
    iVar5 = 0;
    local_30 = 0;
    goto LAB_0004a84c;
  case 0x13:
    iVar5 = 10;
    local_30 = 10;
    goto LAB_0004a84c;
  case 0x14:
    break;
  case 0x15:
    iVar5 = 1;
    local_30 = 1;
    goto LAB_0004a84c;
  case 0x16:
    break;
  case 0x17:
    iVar5 = 8;
    local_30 = 8;
    goto LAB_0004a84c;
  case 0x18:
    iVar5 = 5;
    local_30 = 5;
    goto LAB_0004a84c;
  case 0x19:
    iVar5 = 7;
    local_30 = 7;
    goto LAB_0004a84c;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    break;
  case 0x24:
    break;
  case 0x25:
    break;
  case 0x26:
    break;
  case 0x27:
    break;
  case 0x28:
    break;
  case 0x29:
    break;
  case 0x2a:
    break;
  case 0x2b:
    break;
  case 0x2c:
    break;
  case 0x2d:
    break;
  case 0x2e:
    break;
  case 0x2f:
    break;
  case 0x30:
    break;
  case 0x31:
    break;
  case 0x32:
    break;
  case 0x33:
    break;
  case 0x34:
    break;
  case 0x35:
    break;
  case 0x36:
    iVar5 = 0xb;
    local_30 = 0xb;
    goto LAB_0004a84c;
  }
  iVar5 = 0xc;
LAB_0004a84c:
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_0004a508:
    puVar3 = (uchar *)0x0;
    local_30 = 0xc;
    local_2c = 0;
    local_28 = 0;
    local_24[0] = 0;
    iVar5 = 0xc;
  }
  else {
    puVar3 = param_1 + 0x34;
  }
LAB_0004a520:
  iVar1 = GetHasValidFontCompositeData(this);
  if (iVar1 != 0) {
    CompositeText(*(GEFont **)(this + 0x68),(UStringBase *)(this + 0x3c),(EFormat *)&local_30,
                  local_2c,local_28,puVar3,param_2);
    if (*param_2 != (uchar *)0x0) {
      puVar3 = *param_2;
    }
  }
  iVar1 = GetHasValidUserImageData(this);
  if (iVar1 != 0) {
    CompositeUserImage(this + 0x6c,&local_30,local_2c,local_28,*(undefined4 *)(this + 0x90),param_2)
    ;
    if (*param_2 != (uchar *)0x0) {
      puVar3 = *param_2;
    }
  }
LAB_0004a540:
  if ((local_2c != 0) && (local_28 != 0)) {
    iVar1 = iVar5;
    if (iVar5 < 0xc) {
      iVar1 = local_30;
    }
    if (iVar1 < 0xc) {
      *(ulong *)(this + 0x2c) = local_2c;
      *(ulong *)(this + 0x30) = local_28;
      local_24[0] = local_24[0] + 1;
      GERendererAPI::GL_LoadTexImage2D(local_30,iVar5,local_2c,local_28,local_24[0],puVar3);
    }
  }
  GERendererAPI::GL_UnbindTexture();
  if (*(int *)(this + 0x94) - 1U < 0xfffffffe) {
    uVar2 = 0;
    if ((*(int *)(this + 0x2c) != 0) && (uVar2 = 0, *(int *)(this + 0x30) != 0)) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

