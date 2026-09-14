/* 0003b7ec | STG::GERendererAPI::GL_SetTexture */

/* STG::GERendererAPI::GL_SetTexture(unsigned long, STG::GERendererAPI::ESamplerState,
   STG::GERendererAPI::ETextureStageState, STG::GERendererAPI::EAnisotropyState, STG::GETexture
   const*, STG::GEColor const&, STG::MMatrix const&) */

void STG::GERendererAPI::GL_SetTexture
               (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
               MMatrix *param_7)

{
  int iVar1;
  int iVar2;
  
  glActiveTexture(param_1 + 0x84c0);
  iVar2 = DAT_0003ba48;
  if ((((param_5 != 0) && (*(ulong *)(param_5 + 0x94) - 1 < 0xfffffffe)) &&
      (*(int *)(param_5 + 0x2c) != 0)) && (*(int *)(param_5 + 0x30) != 0)) {
    GL_BindTexture(*(ulong *)(param_5 + 0x94));
    iVar1 = iVar2 + 0x3ba58 + param_2 * 0x10;
    glTexParameteri(0xde1,0x2801,*(undefined4 *)(iVar1 + 4));
    glTexParameteri(0xde1,0x2800,*(undefined4 *)(iVar2 + 0x3ba58 + param_2 * 0x10));
    glTexParameteri(0xde1,0x2802,*(undefined4 *)(iVar1 + 8));
    glTexParameteri(0xde1,0x2803,*(undefined4 *)(iVar1 + 8));
    if (*(char *)(iVar1 + 0xc) == '\0') {
      glDisable(0xde1);
    }
    else {
      glEnable();
    }
    if ((GL_BindBuffer + param_4 * 8 + DAT_0003ba4c)[4] != (code)0x0) {
      glTexParameterf(0xde1,0x84fe,*(undefined4 *)(GL_BindBuffer + param_4 * 8 + DAT_0003ba4c));
    }
    iVar1 = DAT_0003ba50 + 0x3bb74;
    iVar2 = iVar1 + param_3 * 0x30;
    glTexEnvi(0x2300,0x2200,0x8570);
    glTexEnvi(0x2300,0x8580,*(undefined4 *)(iVar1 + param_3 * 0x30));
    glTexEnvi(0x2300,0x8590,*(undefined4 *)(iVar2 + 4));
    glTexEnvi(0x2300,0x8581,*(undefined4 *)(iVar2 + 8));
    glTexEnvi(0x2300,0x8591,*(undefined4 *)(iVar2 + 0xc));
    glTexEnvi(0x2300,0x8571,*(undefined4 *)(iVar2 + 0x10));
    glTexEnvi(0x2300,0x8588,*(undefined4 *)(iVar2 + 0x14));
    glTexEnvi(0x2300,0x8598,*(undefined4 *)(iVar2 + 0x18));
    glTexEnvi(0x2300,0x8589,*(undefined4 *)(iVar2 + 0x1c));
    glTexEnvi(0x2300,0x8599,*(undefined4 *)(iVar2 + 0x20));
    glTexEnvi(0x2300,0x8572,*(undefined4 *)(iVar2 + 0x24));
    if (param_3 == 2) {
      glTexEnvfv(0x2300,0x2201,param_6);
      glTexEnvi(0x2300,0x8582,0x8576);
      glTexEnvi(0x2300,0x8592,0x300);
      glTexEnvi(0x2300,0x858a,0x8576);
      glTexEnvi(0x2300,0x859a,0x302);
    }
    glTexEnvf(0x2300,0x8573,*(undefined4 *)(iVar2 + 0x28));
    glTexEnvf(0x2300,0xd1c,*(undefined4 *)(iVar2 + 0x2c));
    GL_LoadMatrixMode(0x1702,param_7);
    return;
  }
  glDisable(0xde1);
  GL_UnbindTexture();
  return;
}

