/* 0003adf0 | STG::GEMaterial::SetTexture */

/* STG::GEMaterial::SetTexture(unsigned long, STG::GETexture*, STG::GERendererAPI::ESamplerState
   const&, STG::GERendererAPI::ETextureStageState const&, STG::GERendererAPI::EAnisotropyState
   const&, STG::GEColor const*, STG::MMatrix const*) */

void __thiscall
STG::GEMaterial::SetTexture
          (GEMaterial *this,ulong param_1,GETexture *param_2,ESamplerState *param_3,
          ETextureStageState *param_4,EAnisotropyState *param_5,GEColor *param_6,MMatrix *param_7)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  void *__src;
  uint __n;
  undefined1 *puVar5;
  GETexture *pGVar6;
  uint __n_00;
  int iVar7;
  undefined1 *local_38;
  void *__dest;
  
  FUN_0002e044();
  if (param_2 != (GETexture *)0x0) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 1;
  }
  iVar1 = param_1 + 8;
  piVar2 = *(int **)(this + iVar1 * 4 + 0xc);
  if (piVar2 != (int *)0x0) {
    iVar3 = piVar2[1];
    piVar2[1] = iVar3 + -1;
    if (iVar3 == 1) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
  }
  *(GETexture **)(this + iVar1 * 4 + 0xc) = param_2;
  if (param_2 != (GETexture *)0x0) {
    iVar3 = param_1 + 3;
    pGVar6 = param_2;
    if ((string *)(this + iVar3 * 0x20 + 0x10) != (string *)(param_2 + 0xc)) {
      pcVar4 = *(char **)(param_2 + 0x1c);
      __src = *(void **)(param_2 + 0x20);
      __n = (int)pcVar4 - (int)__src;
      local_38 = *(undefined1 **)(this + iVar3 * 0x20 + 0x20);
      __dest = *(void **)(this + iVar3 * 0x20 + 0x24);
      __n_00 = (int)local_38 - (int)__dest;
      if (__n_00 < __n) {
        iVar7 = 0;
        if (__n_00 != 0) {
          memmove(__dest,__src,__n_00);
          iVar7 = *(int *)(this + iVar3 * 0x20 + 0x20) - *(int *)(this + iVar3 * 0x20 + 0x24);
        }
        std::string::_M_append
                  ((string *)(this + iVar3 * 0x20 + 0x10),(char *)((int)__src + iVar7),pcVar4);
        pGVar6 = *(GETexture **)(this + iVar1 * 4 + 0xc);
      }
      else {
        if (__n != 0) {
          memmove(__dest,__src,__n);
          local_38 = *(undefined1 **)(this + iVar3 * 0x20 + 0x20);
          __dest = *(void **)(this + iVar3 * 0x20 + 0x24);
        }
        puVar5 = (undefined1 *)((int)__dest + __n);
        if (puVar5 != local_38) {
          *puVar5 = *local_38;
          *(undefined1 **)(this + iVar3 * 0x20 + 0x20) =
               puVar5 + (*(int *)(this + iVar3 * 0x20 + 0x20) - (int)local_38);
        }
        pGVar6 = *(GETexture **)(this + iVar1 * 4 + 0xc);
      }
    }
    *(undefined4 *)(this + iVar3 * 0x20 + 0x28) = *(undefined4 *)(param_2 + 0x24);
    *(undefined4 *)(this + param_1 * 4 + 0xac) = *(undefined4 *)(pGVar6 + 0x2c);
    *(undefined4 *)(this + param_1 * 4 + 0xb4) = *(undefined4 *)(pGVar6 + 0x30);
  }
  *(undefined4 *)(this + (param_1 + 0xc) * 4 + 4) = *(undefined4 *)param_3;
  *(undefined4 *)(this + (param_1 + 0xc) * 4 + 0xc) = *(undefined4 *)param_4;
  *(undefined4 *)(this + param_1 * 4 + 0x44) = *(undefined4 *)param_5;
  if (param_6 != (GEColor *)0x0) {
    iVar1 = param_1 + 4;
    *(undefined4 *)(this + iVar1 * 0x10 + 0xc) = *(undefined4 *)param_6;
    *(undefined4 *)(this + iVar1 * 0x10 + 0x10) = *(undefined4 *)(param_6 + 4);
    *(undefined4 *)(this + iVar1 * 0x10 + 0x14) = *(undefined4 *)(param_6 + 8);
    *(undefined4 *)(this + iVar1 * 0x10 + 0x18) = *(undefined4 *)(param_6 + 0xc);
  }
  if (param_7 != (MMatrix *)0x0) {
    MMatrix::operator=((MMatrix *)(this + param_1 * 0x40 + 0xbc),param_7);
  }
  return;
}

