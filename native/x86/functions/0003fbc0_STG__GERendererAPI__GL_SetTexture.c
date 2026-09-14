/* 0003fbc0 | STG::GERendererAPI::GL_SetTexture */

/* STG::GERendererAPI::GL_SetTexture(unsigned long, STG::GERendererAPI::ESamplerState,
   STG::GERendererAPI::ETextureStageState, STG::GERendererAPI::EAnisotropyState, STG::GETexture
   const*, STG::GEColor const&, STG::MMatrix const&) */

void STG::GERendererAPI::GL_SetTexture
               (int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 param_6,
               MMatrix *param_7)

{
  undefined4 *puVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  glActiveTexture(param_1 + 0x84c0);
  if ((((param_5 != 0) && (*(ulong *)(param_5 + 0x94) - 1 < 0xfffffffe)) &&
      (*(int *)(param_5 + 0x2c) != 0)) && (*(int *)(param_5 + 0x30) != 0)) {
    GL_BindTexture(*(ulong *)(param_5 + 0x94));
    puVar1 = (undefined4 *)(unaff_EBX + 0x48478 + param_2 * 0x10);
    glTexParameteri(0xde1,0x2801,puVar1[1]);
    glTexParameteri(0xde1,0x2800,*puVar1);
    glTexParameteri(0xde1,0x2802,puVar1[2]);
    glTexParameteri(0xde1,0x2803,puVar1[2]);
    if (*(char *)(puVar1 + 3) == '\0') {
      glDisable(0xde1);
    }
    else {
      glEnable();
    }
    puVar1 = (undefined4 *)(unaff_EBX + 0x484f8 + param_4 * 8);
    if (*(char *)(puVar1 + 1) != '\0') {
      glTexParameterf(0xde1,0x84fe,*puVar1);
    }
    puVar1 = (undefined4 *)(unaff_EBX + 0x48538 + param_3 * 0x30);
    glTexEnvi(0x2300,0x2200,0x8570);
    glTexEnvi(0x2300,0x8580,*puVar1);
    glTexEnvi(0x2300,0x8590,puVar1[1]);
    glTexEnvi(0x2300,0x8581,puVar1[2]);
    glTexEnvi(0x2300,0x8591,puVar1[3]);
    glTexEnvi(0x2300,0x8571,puVar1[4]);
    glTexEnvi(0x2300,0x8588,puVar1[5]);
    glTexEnvi(0x2300,0x8598,puVar1[6]);
    glTexEnvi(0x2300,0x8589,puVar1[7]);
    glTexEnvi(0x2300,0x8599,puVar1[8]);
    glTexEnvi(0x2300,0x8572,puVar1[9]);
    if (param_3 == 2) {
      glTexEnvfv(0x2300,0x2201,param_6);
      glTexEnvi(0x2300,0x8582,0x8576);
      glTexEnvi(0x2300,0x8592,0x300);
      glTexEnvi(0x2300,0x858a,0x8576);
      glTexEnvi(0x2300,0x859a,0x302);
    }
    glTexEnvf(0x2300,0x8573,puVar1[10]);
    glTexEnvf(0x2300,0xd1c,puVar1[0xb]);
    GL_LoadMatrixMode(0x1702,param_7);
    return;
  }
  glDisable(0xde1);
  GL_UnbindTexture();
  return;
}

