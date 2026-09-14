/* 0003a320 | STG::GEMaterial::SetTextureFile */

/* STG::GEMaterial::SetTextureFile(unsigned long, STG::FFileHash const&, unsigned long, unsigned
   long, bool) */

void __thiscall
STG::GEMaterial::SetTextureFile
          (GEMaterial *this,ulong param_1,FFileHash *param_2,ulong param_3,ulong param_4,
          bool param_5)

{
  void *__dest;
  int *piVar1;
  GETexture *this_00;
  undefined1 *puVar2;
  int iVar3;
  size_t __n;
  char *pcVar4;
  int iVar5;
  code *pcVar6;
  uint __n_00;
  void *__src;
  
  iVar3 = *(int *)(param_2 + 0x1c);
  if (iVar3 == *(int *)(this + param_1 * 0x20 + 0x88)) {
    return;
  }
  if ((string *)(this + param_1 * 0x20 + 0x70) == (string *)(param_2 + 4)) {
LAB_0003a3b0:
    *(int *)(this + param_1 * 0x20 + 0x88) = iVar3;
    *(ulong *)(this + param_1 * 4 + 0xac) = param_3;
    *(ulong *)(this + param_1 * 4 + 0xb4) = param_4;
  }
  else {
    __src = *(void **)(param_2 + 0x18);
    pcVar4 = *(char **)(param_2 + 0x14);
    puVar2 = *(undefined1 **)(this + param_1 * 0x20 + 0x80);
    __dest = *(void **)(this + param_1 * 0x20 + 0x84);
    __n_00 = (int)pcVar4 - (int)__src;
    __n = (int)puVar2 - (int)__dest;
    if (__n < __n_00) {
      iVar3 = 0;
      if (__n != 0) {
        memmove(__dest,__src,__n);
        iVar3 = *(int *)(this + param_1 * 0x20 + 0x80) - *(int *)(this + param_1 * 0x20 + 0x84);
      }
      std::string::_M_append
                ((string *)(this + param_1 * 0x20 + 0x70),(char *)((int)__src + iVar3),pcVar4);
    }
    else {
      if (__n_00 != 0) {
        memmove(__dest,__src,__n_00);
        __dest = *(void **)(this + param_1 * 0x20 + 0x84);
        puVar2 = *(undefined1 **)(this + param_1 * 0x20 + 0x80);
      }
      if ((undefined1 *)((int)__dest + __n_00) != puVar2) {
        *(undefined1 *)((int)__dest + __n_00) = *puVar2;
        iVar3 = *(int *)(param_2 + 0x1c);
        *(undefined1 **)(this + param_1 * 0x20 + 0x80) =
             (undefined1 *)((int)__dest + __n_00) +
             (*(int *)(this + param_1 * 0x20 + 0x80) - (int)puVar2);
        goto LAB_0003a3b0;
      }
    }
    *(undefined4 *)(this + param_1 * 0x20 + 0x88) = *(undefined4 *)(param_2 + 0x1c);
    *(ulong *)(this + param_1 * 4 + 0xac) = param_3;
    *(ulong *)(this + param_1 * 4 + 0xb4) = param_4;
  }
  if (param_5) {
    iVar3 = param_1 + 10;
    piVar1 = *(int **)(this + iVar3 * 4 + 4);
    if ((piVar1 != (int *)0x0) && (iVar5 = piVar1[1], piVar1[1] = iVar5 + -1, iVar5 == 1)) {
      (**(code **)(*piVar1 + 4))();
    }
    iVar5 = *(int *)(this + param_1 * 0x20 + 0x88);
    *(undefined4 *)(this + iVar3 * 4 + 4) = 0;
    if ((iVar5 != -1) &&
       (*(int *)(this + param_1 * 0x20 + 0x84) != *(int *)(this + param_1 * 0x20 + 0x80))) {
      this_00 = operator_new(0x98);
      GETexture::GETexture(this_00);
      *(GETexture **)(this + iVar3 * 4 + 4) = this_00;
      *(ulong *)(this_00 + 0x34) = param_3;
      pcVar6 = *(code **)(*(int *)this_00 + 0xc);
      *(ulong *)(this_00 + 0x38) = param_4;
      (*pcVar6)(this_00,this + param_1 * 0x20 + 0x6c);
    }
  }
  return;
}

