/* 00047fc8 | STG::GETexture::Load */

/* STG::GETexture::Load(unsigned char const*, unsigned char*&) */

undefined4 __thiscall STG::GETexture::Load(GETexture *this,uchar *param_1,uchar **param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int local_30;
  ulong local_2c;
  ulong local_28;
  ulong local_24;
  
  GERendererAPI::GL_GenTexture((ulong *)(this + 0x94));
  GERendererAPI::GL_BindTexture(*(ulong *)(this + 0x94));
  local_2c = 0;
  local_30 = 0xc;
  local_28 = 0;
  local_24 = 0;
  *param_2 = (uchar *)0x0;
  if (param_1 == (uchar *)0x0) {
    CreateDebugTexture(*(ulong *)(this + 0x34),*(ulong *)(this + 0x38),(EFormat *)&local_30,
                       &local_2c,&local_28,&local_24,param_2);
    puVar4 = *param_2;
    iVar3 = local_30;
    goto LAB_00048088;
  }
  iVar3 = 0x3525650;
  if (*(int *)param_1 == 0x3525650) {
    uVar5 = *(uint *)(param_1 + 8);
    uVar6 = *(uint *)(param_1 + 0xc);
    local_28 = *(ulong *)(param_1 + 0x18);
    bVar7 = uVar6 != 0;
    local_2c = *(ulong *)(param_1 + 0x1c);
    local_24 = *(ulong *)(param_1 + 0x2c);
    if (!bVar7 && uVar5 == 6) {
      iVar3 = 0xb;
    }
    if (bVar7 || uVar5 != 6) {
      iVar3 = local_30;
      if (bVar7 || 6 < uVar5) {
        if (uVar6 == 0x80808 && uVar5 == 0x626772) {
          local_30 = 1;
          iVar3 = local_30;
        }
        else {
          bVar7 = uVar6 < 0x80809;
          if (uVar6 == 0x80808) {
            bVar7 = uVar5 < 0x626773;
          }
          if (bVar7) {
            if (uVar6 == 0x808 && uVar5 == 0x616c) {
              local_30 = 8;
              iVar3 = local_30;
            }
            else if (uVar6 == 0x50605 && uVar5 == 0x626772) {
              local_30 = 10;
              iVar3 = local_30;
            }
          }
          else if (uVar6 == 0x4040404 && uVar5 == 0x61626772) {
            local_30 = 9;
            iVar3 = local_30;
          }
          else if (uVar6 == 0x8080808 && uVar5 == 0x61626772) {
            local_30 = 0;
            iVar3 = local_30;
          }
        }
      }
      else if (uVar6 == 0 && uVar5 == 1) {
        local_30 = 5;
        iVar3 = local_30;
      }
      else if (uVar6 == 0 && uVar5 == 0) {
        local_30 = 4;
        iVar3 = local_30;
      }
      else if (uVar6 == 0 && uVar5 == 2) {
        local_30 = 6;
        iVar3 = local_30;
      }
      else if (uVar6 == 0 && uVar5 == 3) {
        local_30 = 7;
        iVar3 = local_30;
      }
    }
    local_30 = iVar3;
    puVar4 = param_1 + *(int *)(param_1 + 0x30) + 0x34;
    iVar3 = local_30;
    if (local_24 != 0) {
      local_24 = local_24 - 1;
    }
    goto LAB_00048068;
  }
  local_28 = *(ulong *)(param_1 + 4);
  local_2c = *(ulong *)(param_1 + 8);
  local_24 = *(ulong *)(param_1 + 0xc);
  if (*(int *)(param_1 + 0x2c) != 0x21525650) goto LAB_00048048;
  switch(*(uint *)(param_1 + 0x10) & 0xff) {
  case 0x10:
    iVar3 = 9;
    local_30 = 9;
    goto LAB_000483ac;
  case 0x11:
    break;
  case 0x12:
    iVar3 = 0;
    local_30 = 0;
    goto LAB_000483ac;
  case 0x13:
    iVar3 = 10;
    local_30 = 10;
    goto LAB_000483ac;
  case 0x14:
    break;
  case 0x15:
    iVar3 = 1;
    local_30 = 1;
    goto LAB_000483ac;
  case 0x16:
    break;
  case 0x17:
    iVar3 = 8;
    local_30 = 8;
    goto LAB_000483ac;
  case 0x18:
    iVar3 = 5;
    local_30 = 5;
    goto LAB_000483ac;
  case 0x19:
    iVar3 = 7;
    local_30 = 7;
    goto LAB_000483ac;
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
    iVar3 = 0xb;
    local_30 = 0xb;
    goto LAB_000483ac;
  }
  iVar3 = 0xc;
LAB_000483ac:
  if (*(int *)(param_1 + 0x14) == 0) {
LAB_00048048:
    puVar4 = (uchar *)0x0;
    local_30 = 0xc;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    iVar3 = 0xc;
  }
  else {
    puVar4 = param_1 + 0x34;
  }
LAB_00048068:
  iVar1 = GetHasValidFontCompositeData(this);
  if (iVar1 != 0) {
    CompositeText(*(GEFont **)(this + 0x68),(UStringBase *)(this + 0x3c),(EFormat *)&local_30,
                  local_2c,local_28,puVar4,param_2);
    if (*param_2 != (uchar *)0x0) {
      puVar4 = *param_2;
    }
  }
  iVar1 = GetHasValidUserImageData(this);
  if (iVar1 != 0) {
    CompositeUserImage(this + 0x6c,&local_30,local_2c,local_28,*(undefined4 *)(this + 0x90),param_2)
    ;
    if (*param_2 != (uchar *)0x0) {
      puVar4 = *param_2;
    }
  }
LAB_00048088:
  if ((local_2c != 0) && (local_28 != 0)) {
    iVar1 = iVar3;
    if (iVar3 < 0xc) {
      iVar1 = local_30;
    }
    if (iVar1 < 0xc) {
      *(ulong *)(this + 0x2c) = local_2c;
      *(ulong *)(this + 0x30) = local_28;
      local_24 = local_24 + 1;
      GERendererAPI::GL_LoadTexImage2D(local_30,iVar3,local_2c,local_28,local_24,puVar4);
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

