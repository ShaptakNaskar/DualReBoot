/* 0003a0b8 | STG::GEMaterial::SetTexture */

/* STG::GEMaterial::SetTexture(unsigned long, STG::GETexture*, STG::GERendererAPI::ESamplerState
   const&, STG::GERendererAPI::ETextureStageState const&, STG::GERendererAPI::EAnisotropyState
   const&, STG::GEColor const*, STG::MMatrix const*) */

void __thiscall
STG::GEMaterial::SetTexture
          (GEMaterial *this,ulong param_1,GETexture *param_2,ESamplerState *param_3,
          ETextureStageState *param_4,EAnisotropyState *param_5,GEColor *param_6,MMatrix *param_7)

{
  int *piVar1;
  char *pcVar2;
  void *__dest;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  void *__src;
  size_t __n;
  undefined1 *puVar6;
  GETexture *pGVar7;
  undefined4 uVar8;
  int iVar9;
  size_t __n_00;
  int local_44;
  
  if (param_2 != (GETexture *)0x0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar9 = param_1 + 10;
  piVar1 = *(int **)(this + iVar9 * 4 + 4);
  if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[1], piVar1[1] = iVar5 + -1, iVar5 == 1)) {
    (**(code **)(*piVar1 + 4))();
  }
  *(GETexture **)(this + iVar9 * 4 + 4) = param_2;
  if (param_2 != (GETexture *)0x0) {
    pGVar7 = param_2;
    if ((string *)(this + param_1 * 0x20 + 0x70) != (string *)(param_2 + 0xc)) {
      pcVar2 = *(char **)(param_2 + 0x1c);
      local_44 = *(int *)(this + param_1 * 0x20 + 0x80);
      __src = *(void **)(param_2 + 0x20);
      __dest = *(void **)(this + param_1 * 0x20 + 0x84);
      __n_00 = (int)pcVar2 - (int)__src;
      __n = local_44 - (int)__dest;
      if (__n < __n_00) {
        if (__n != 0) {
          memmove(__dest,__src,__n);
          local_44 = *(int *)(this + param_1 * 0x20 + 0x80);
          __dest = *(void **)(this + param_1 * 0x20 + 0x84);
        }
        std::string::_M_append
                  ((string *)(this + param_1 * 0x20 + 0x70),
                   (char *)((int)__src + (local_44 - (int)__dest)),pcVar2);
        iVar9 = *(int *)(this + iVar9 * 4 + 4);
        uVar3 = *(undefined4 *)(iVar9 + 0x2c);
        *(undefined4 *)(this + param_1 * 0x20 + 0x88) = *(undefined4 *)(param_2 + 0x24);
        *(undefined4 *)(this + param_1 * 4 + 0xac) = uVar3;
        *(undefined4 *)(this + param_1 * 4 + 0xb4) = *(undefined4 *)(iVar9 + 0x30);
        goto LAB_0003a1e0;
      }
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
      }
      puVar6 = *(undefined1 **)(this + param_1 * 0x20 + 0x80);
      puVar4 = (undefined1 *)(*(int *)(this + param_1 * 0x20 + 0x84) + __n_00);
      if (puVar4 != puVar6) {
        *(undefined1 *)(*(int *)(this + param_1 * 0x20 + 0x84) + __n_00) = *puVar6;
        *(undefined1 **)(this + param_1 * 0x20 + 0x80) =
             puVar4 + (*(int *)(this + param_1 * 0x20 + 0x80) - (int)puVar6);
      }
      pGVar7 = *(GETexture **)(this + iVar9 * 4 + 4);
    }
    uVar3 = *(undefined4 *)(pGVar7 + 0x2c);
    *(undefined4 *)(this + param_1 * 0x20 + 0x88) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(this + param_1 * 4 + 0xac) = uVar3;
    *(undefined4 *)(this + param_1 * 4 + 0xb4) = *(undefined4 *)(pGVar7 + 0x30);
  }
LAB_0003a1e0:
  uVar3 = *(undefined4 *)param_4;
  uVar8 = *(undefined4 *)param_5;
  *(undefined4 *)(this + param_1 * 4 + 0x34) = *(undefined4 *)param_3;
  *(undefined4 *)(this + param_1 * 4 + 0x3c) = uVar3;
  *(undefined4 *)(this + param_1 * 4 + 0x44) = uVar8;
  if (param_6 != (GEColor *)0x0) {
    *(undefined4 *)(this + param_1 * 0x10 + 0x4c) = *(undefined4 *)param_6;
    *(undefined4 *)(this + param_1 * 0x10 + 0x50) = *(undefined4 *)(param_6 + 4);
    *(undefined4 *)(this + param_1 * 0x10 + 0x54) = *(undefined4 *)(param_6 + 8);
    *(undefined4 *)(this + param_1 * 0x10 + 0x58) = *(undefined4 *)(param_6 + 0xc);
  }
  if (param_7 == (MMatrix *)0x0) {
    return;
  }
  MMatrix::operator=((MMatrix *)(this + param_1 * 0x40 + 0xbc),param_7);
  return;
}

