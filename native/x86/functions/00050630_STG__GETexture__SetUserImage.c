/* 00050630 | STG::GETexture::SetUserImage */

/* STG::GETexture::SetUserImage(STG::UStringBase<char, int> const&, unsigned long, unsigned long,
   STG::GETextureShading::EEffect) */

void __thiscall
STG::GETexture::SetUserImage
          (GETexture *this,undefined4 param_1,int param_2,int param_3,undefined4 param_5)

{
  char *__src;
  char *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  uint __n;
  uint __n_00;
  undefined1 *puVar4;
  void *local_30;
  
  iVar2 = FUN_0002e044();
  __src = *(char **)(iVar2 + 0x18);
  pcVar1 = *(char **)(iVar2 + 0x14);
  if (((__src != pcVar1) && (param_3 != 0)) && (param_2 != 0)) {
    if ((string *)(this + 0x70) != (string *)(iVar2 + 4)) {
      puVar3 = *(undefined1 **)(this + 0x80);
      __n = (int)pcVar1 - (int)__src;
      local_30 = *(void **)(this + 0x84);
      __n_00 = (int)puVar3 - (int)local_30;
      if (__n_00 < __n) {
        iVar2 = 0;
        if (__n_00 != 0) {
          memmove(local_30,__src,__n_00);
          iVar2 = *(int *)(this + 0x80) - *(int *)(this + 0x84);
        }
        std::string::_M_append((string *)(this + 0x70),__src + iVar2,pcVar1);
      }
      else {
        if (__n != 0) {
          memmove(local_30,__src,__n);
          local_30 = *(void **)(this + 0x84);
          puVar3 = *(undefined1 **)(this + 0x80);
        }
        puVar4 = (undefined1 *)((int)local_30 + __n);
        if (puVar4 != puVar3) {
          *puVar4 = *puVar3;
          *(undefined1 **)(this + 0x80) = puVar4 + (*(int *)(this + 0x80) - (int)puVar3);
        }
      }
    }
    *(int *)(this + 0x88) = param_2;
    *(int *)(this + 0x8c) = param_3;
    *(undefined4 *)(this + 0x90) = param_5;
  }
  return;
}

