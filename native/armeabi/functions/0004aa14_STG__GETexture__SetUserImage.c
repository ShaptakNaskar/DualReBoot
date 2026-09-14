/* 0004aa14 | STG::GETexture::SetUserImage */

/* STG::GETexture::SetUserImage(STG::UStringBase<char, int> const&, unsigned long, unsigned long,
   STG::GETextureShading::EEffect) */

void __thiscall
STG::GETexture::SetUserImage(GETexture *this,int param_1,int param_2,int param_3,undefined4 param_5)

{
  void *__dest;
  size_t __n;
  int iVar1;
  undefined1 *puVar2;
  char *__src;
  char *pcVar3;
  uint __n_00;
  
  __src = *(char **)(param_1 + 0x18);
  pcVar3 = *(char **)(param_1 + 0x14);
  if ((__src != pcVar3) && (param_3 != 0 && param_2 != 0)) {
    if ((string *)(this + 0x70) != (string *)(param_1 + 4)) {
      puVar2 = *(undefined1 **)(this + 0x80);
      __dest = *(void **)(this + 0x84);
      __n_00 = (int)pcVar3 - (int)__src;
      __n = (int)puVar2 - (int)__dest;
      if (__n < __n_00) {
        iVar1 = 0;
        if (__n != 0) {
          memmove(__dest,__src,__n);
          iVar1 = *(int *)(this + 0x80) - *(int *)(this + 0x84);
        }
        std::string::_M_append((string *)(this + 0x70),__src + iVar1,pcVar3);
      }
      else {
        if (__n_00 != 0) {
          memmove(__dest,__src,__n_00);
          __dest = *(void **)(this + 0x84);
          puVar2 = *(undefined1 **)(this + 0x80);
        }
        if ((undefined1 *)((int)__dest + __n_00) != puVar2) {
          *(undefined1 *)((int)__dest + __n_00) = *puVar2;
          *(undefined1 **)(this + 0x80) =
               (undefined1 *)((int)__dest + __n_00) + (*(int *)(this + 0x80) - (int)puVar2);
        }
      }
    }
    *(int *)(this + 0x88) = param_2;
    *(int *)(this + 0x8c) = param_3;
    *(undefined4 *)(this + 0x90) = param_5;
  }
  return;
}

