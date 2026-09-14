/* 0004ff30 | STG::GETexture::Load */

/* STG::GETexture::Load(unsigned char const*, unsigned char*&) */

undefined4 __thiscall STG::GETexture::Load(GETexture *this,uchar *param_1,uchar **param_2)

{
  uint uVar1;
  uchar *puVar2;
  char cVar3;
  undefined4 uVar4;
  uint uVar5;
  int unaff_EBX;
  int local_58;
  uchar *local_54;
  int local_50 [4];
  ulong local_40 [4];
  ulong local_30 [4];
  ulong local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x4ff3b;
  FUN_0002e044();
  GERendererAPI::GL_GenTexture((ulong *)(this + 0x94));
  GERendererAPI::GL_BindTexture(*(ulong *)(this + 0x94));
  local_50[0] = 0xc;
  local_40[0] = 0;
  local_30[0] = 0;
  local_20[0] = 0;
  *param_2 = (uchar *)0x0;
  if (param_1 == (uchar *)0x0) {
    CreateDebugTexture(*(ulong *)(this + 0x34),*(ulong *)(this + 0x38),(EFormat *)local_50,local_40,
                       local_30,local_20,param_2);
    local_58 = local_50[0];
    puVar2 = *param_2;
    goto LAB_00050027;
  }
  if (*(int *)param_1 == 0x3525650) {
    local_30[0] = *(ulong *)(param_1 + 0x18);
    local_40[0] = *(ulong *)(param_1 + 0x1c);
    local_20[0] = *(ulong *)(param_1 + 0x2c);
    uVar5 = *(uint *)(param_1 + 8);
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar5 == 6 && uVar1 == 0) {
      local_50[0] = 0xb;
    }
    else if ((uVar1 == 0) && (uVar5 < 7)) {
      if (uVar5 == 1) {
        local_50[0] = 5;
      }
      else if (uVar5 == 0) {
        local_50[0] = 4;
      }
      else if (uVar5 == 2) {
        local_50[0] = 6;
      }
      else if (uVar5 == 3) {
        local_50[0] = 7;
      }
    }
    else if (uVar1 == 0x80808 && uVar5 == 0x626772) {
      local_50[0] = 1;
    }
    else if ((uVar1 < 0x80809) && ((uVar1 < 0x80808 || (uVar5 < 0x626773)))) {
      if (uVar1 == 0x808 && uVar5 == 0x616c) {
        local_50[0] = 8;
      }
      else if (uVar1 == 0x50605 && uVar5 == 0x626772) {
        local_50[0] = 10;
      }
    }
    else if (uVar1 == 0x4040404 && (uVar5 ^ 0x61626772) == 0) {
      local_50[0] = 9;
    }
    else if (uVar1 == 0x8080808 && (uVar5 ^ 0x61626772) == 0) {
      local_50[0] = 0;
    }
    if (local_20[0] != 0) {
      local_20[0] = local_20[0] - 1;
    }
    local_54 = param_1 + *(int *)(param_1 + 0x30) + 0x34;
  }
  else {
    if (*(int *)(param_1 + 0x2c) == 0x21525650) {
      uVar5 = (*(uint *)(param_1 + 0x10) & 0xff) - 0x10;
      if (uVar5 < 0x27) {
                    /* WARNING: Could not recover jumptable at 0x000502b9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*(code *)(*(int *)(unaff_EBX + 0x38525 + uVar5 * 4) + unaff_EBX + 0x4c0b9))();
        return uVar4;
      }
      if (*(int *)(param_1 + 0x14) != 0) {
        local_54 = param_1 + 0x34;
        local_40[0] = *(ulong *)(param_1 + 8);
        local_30[0] = *(ulong *)(param_1 + 4);
        local_20[0] = *(ulong *)(param_1 + 0xc);
        goto LAB_0005000b;
      }
    }
    local_50[0] = 0xc;
    local_40[0] = 0;
    local_30[0] = 0;
    local_20[0] = 0;
    local_54 = (uchar *)0x0;
  }
LAB_0005000b:
  local_58 = local_50[0];
  cVar3 = GetHasValidFontCompositeData(this);
  puVar2 = local_54;
  if (cVar3 != '\0') {
    CompositeText(*(GEFont **)(this + 0x68),(UStringBase *)(this + 0x3c),(EFormat *)local_50,
                  local_40[0],local_30[0],local_54,param_2);
    puVar2 = *param_2;
    if (*param_2 == (uchar *)0x0) {
      puVar2 = local_54;
    }
  }
  local_54 = puVar2;
  cVar3 = GetHasValidUserImageData(this);
  puVar2 = local_54;
  if (cVar3 != '\0') {
    CompositeUserImage(this + 0x6c,local_50,local_40[0],local_30[0],*(undefined4 *)(this + 0x90),
                       param_2);
    puVar2 = *param_2;
    if (*param_2 == (uchar *)0x0) {
      puVar2 = local_54;
    }
  }
LAB_00050027:
  local_54 = puVar2;
  if ((((local_40[0] != 0) && (local_30[0] != 0)) && (local_58 < 0xc)) && (local_50[0] < 0xc)) {
    local_20[0] = local_20[0] + 1;
    *(ulong *)(this + 0x30) = local_30[0];
    *(ulong *)(this + 0x2c) = local_40[0];
    GERendererAPI::GL_LoadTexImage2D
              (local_50[0],local_58,local_40[0],local_30[0],local_20[0],local_54);
  }
  GERendererAPI::GL_UnbindTexture();
  uVar4 = 0;
  if ((*(int *)(this + 0x94) - 1U < 0xfffffffe) && (*(int *)(this + 0x2c) != 0)) {
    uVar4 = CONCAT31((int3)((uint)*(int *)(this + 0x30) >> 8),*(int *)(this + 0x30) != 0);
  }
  return uVar4;
}

