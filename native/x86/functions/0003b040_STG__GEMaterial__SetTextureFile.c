/* 0003b040 | STG::GEMaterial::SetTextureFile */

/* STG::GEMaterial::SetTextureFile(unsigned long, STG::FFileHash const&, unsigned long, unsigned
   long, bool) */

void __thiscall
STG::GEMaterial::SetTextureFile
          (GEMaterial *this,ulong param_1,FFileHash *param_2,ulong param_3,ulong param_4,
          bool param_5)

{
  char *pcVar1;
  void *__src;
  int *piVar2;
  int iVar3;
  uint __n;
  undefined1 *puVar4;
  GETexture *this_00;
  int iVar5;
  int extraout_ECX;
  uint __n_00;
  int extraout_EDX;
  undefined1 *local_40;
  void *local_3c;
  
  FUN_0002e044();
  iVar5 = *(int *)(param_2 + 0x1c);
  if (iVar5 != *(int *)(this + extraout_ECX * 0x20 + 0x28)) {
    if ((string *)(this + extraout_ECX * 0x20 + 0x10) != (string *)(param_2 + 4)) {
      pcVar1 = *(char **)(param_2 + 0x14);
      __src = *(void **)(param_2 + 0x18);
      __n = (int)pcVar1 - (int)__src;
      local_40 = *(undefined1 **)(this + extraout_ECX * 0x20 + 0x20);
      local_3c = *(void **)(this + extraout_ECX * 0x20 + 0x24);
      __n_00 = (int)local_40 - (int)local_3c;
      if (__n_00 < __n) {
        iVar5 = 0;
        if (__n_00 != 0) {
          memmove(local_3c,__src,__n_00);
          iVar5 = *(int *)(this + extraout_ECX * 0x20 + 0x20) -
                  *(int *)(this + extraout_ECX * 0x20 + 0x24);
        }
        std::string::_M_append
                  ((string *)(this + extraout_ECX * 0x20 + 0x10),(char *)(iVar5 + (int)__src),pcVar1
                  );
        iVar5 = *(int *)(param_2 + 0x1c);
      }
      else {
        if (__n != 0) {
          memmove(local_3c,__src,__n);
          local_40 = *(undefined1 **)(this + extraout_ECX * 0x20 + 0x20);
          local_3c = *(void **)(this + extraout_ECX * 0x20 + 0x24);
        }
        puVar4 = (undefined1 *)((int)local_3c + __n);
        if (puVar4 != local_40) {
          *puVar4 = *local_40;
          *(undefined1 **)(this + extraout_ECX * 0x20 + 0x20) =
               puVar4 + (*(int *)(this + extraout_ECX * 0x20 + 0x20) - (int)local_40);
        }
        iVar5 = *(int *)(param_2 + 0x1c);
      }
    }
    *(int *)(this + extraout_ECX * 0x20 + 0x28) = iVar5;
    *(ulong *)(this + extraout_EDX * 4 + 0xac) = param_3;
    *(ulong *)(this + extraout_EDX * 4 + 0xb4) = param_4;
    if (param_5) {
      iVar5 = extraout_EDX + 8;
      piVar2 = *(int **)(this + iVar5 * 4 + 0xc);
      if ((piVar2 != (int *)0x0) && (iVar3 = piVar2[1], piVar2[1] = iVar3 + -1, iVar3 == 1)) {
        (**(code **)(*piVar2 + 4))(piVar2);
      }
      iVar3 = *(int *)(this + extraout_ECX * 0x20 + 0x28);
      *(undefined4 *)(this + iVar5 * 4 + 0xc) = 0;
      if ((iVar3 != -1) &&
         (*(int *)(this + extraout_ECX * 0x20 + 0x24) != *(int *)(this + extraout_ECX * 0x20 + 0x20)
         )) {
        this_00 = operator_new(0x98);
        GETexture::GETexture(this_00);
        *(GETexture **)(this + iVar5 * 4 + 0xc) = this_00;
        *(ulong *)(this_00 + 0x34) = param_3;
        *(ulong *)(this_00 + 0x38) = param_4;
        (**(code **)(*(int *)this_00 + 0xc))(this_00,this + extraout_ECX * 0x20 + 0xc);
      }
    }
  }
  return;
}

