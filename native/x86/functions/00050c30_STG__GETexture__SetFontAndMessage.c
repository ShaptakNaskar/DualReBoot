/* 00050c30 | STG::GETexture::SetFontAndMessage */

/* STG::GETexture::SetFontAndMessage(STG::GEFont const*, STG::UStringBase<unsigned short, unsigned
   short> const&) */

void __thiscall
STG::GETexture::SetFontAndMessage(GETexture *this,GEFont *param_1,UStringBase *param_2)

{
  ushort *puVar1;
  void *__src;
  uint uVar2;
  int extraout_EDX;
  uint uVar3;
  int iVar4;
  void *__src_00;
  size_t __n;
  void *pvVar5;
  
  FUN_0002e044();
  if ((extraout_EDX == 0) || (*(int *)(param_2 + 0x28) == *(int *)(param_2 + 0x24))) {
    *(undefined4 *)(this + 0x68) = 0;
    if (*(undefined2 **)(this + 100) != *(undefined2 **)(this + 0x60)) {
      **(undefined2 **)(this + 100) = 0;
      *(undefined4 *)(this + 0x60) = *(undefined4 *)(this + 100);
    }
  }
  else {
    *(int *)(this + 0x68) = extraout_EDX;
    if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(this + 0x40) !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(param_2 + 4)) {
      puVar1 = *(ushort **)(param_2 + 0x24);
      __src_00 = *(void **)(this + 0x60);
      __src = *(void **)(param_2 + 0x28);
      pvVar5 = *(void **)(this + 100);
      uVar3 = (int)puVar1 - (int)__src >> 1;
      uVar2 = (int)__src_00 - (int)pvVar5 >> 1;
      if (uVar2 < uVar3) {
        iVar4 = 0;
        if (uVar2 != 0) {
          memmove(pvVar5,__src,uVar2 * 2);
          iVar4 = *(int *)(this + 0x60) - *(int *)(this + 100) >> 1;
        }
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        ::_M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)(this + 0x40),(ushort *)((int)__src + iVar4 * 2),puVar1);
      }
      else {
        __n = 0;
        if (uVar3 != 0) {
          __n = uVar3 * 2;
          memmove(pvVar5,__src,__n);
          __src_00 = *(void **)(this + 0x60);
          pvVar5 = *(void **)(this + 100);
        }
        pvVar5 = (void *)(__n + (int)pvVar5);
        if (pvVar5 != __src_00) {
          memmove(pvVar5,__src_00,2);
          *(uint *)(this + 0x60) =
               *(int *)(this + 0x60) - ((int)__src_00 - (int)pvVar5 & 0xfffffffeU);
        }
      }
    }
  }
  return;
}

