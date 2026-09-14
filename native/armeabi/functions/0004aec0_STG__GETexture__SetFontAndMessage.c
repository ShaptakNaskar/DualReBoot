/* 0004aec0 | STG::GETexture::SetFontAndMessage */

/* STG::GETexture::SetFontAndMessage(STG::GEFont const*, STG::UStringBase<unsigned short, unsigned
   short> const&) */

void __thiscall
STG::GETexture::SetFontAndMessage(GETexture *this,GEFont *param_1,UStringBase *param_2)

{
  uint uVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  undefined2 *puVar5;
  ushort *__src;
  ushort *puVar6;
  size_t __n;
  void *__src_00;
  
  if (param_1 != (GEFont *)0x0) {
    __src = *(ushort **)(param_2 + 0x28);
    puVar6 = *(ushort **)(param_2 + 0x24);
    if (__src != puVar6) {
      *(GEFont **)(this + 0x68) = param_1;
      if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
           *)(this + 0x40) ==
          (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
           *)(param_2 + 4)) {
        return;
      }
      __src_00 = *(void **)(this + 0x60);
      pvVar3 = *(void **)(this + 100);
      uVar1 = (int)puVar6 - (int)__src >> 1;
      uVar2 = (int)__src_00 - (int)pvVar3 >> 1;
      if (uVar1 <= uVar2) {
        if (uVar1 == 0) {
          __n = 0;
        }
        else {
          __n = uVar1 << 1;
          memmove(pvVar3,__src,__n);
          pvVar3 = *(void **)(this + 100);
          __src_00 = *(void **)(this + 0x60);
        }
        pvVar3 = (void *)((int)pvVar3 + __n);
        if (pvVar3 == __src_00) {
          return;
        }
        memmove(pvVar3,__src_00,2);
        *(uint *)(this + 0x60) = *(int *)(this + 0x60) - ((int)__src_00 - (int)pvVar3 & 0xfffffffeU)
        ;
        return;
      }
      iVar4 = 0;
      if (uVar2 != 0) {
        memmove(pvVar3,__src,uVar2 << 1);
        iVar4 = *(int *)(this + 0x60) - *(int *)(this + 100) >> 1;
      }
      std::
      basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>::
      _M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                 *)(this + 0x40),__src + iVar4,puVar6);
      return;
    }
  }
  puVar5 = *(undefined2 **)(this + 100);
  *(undefined4 *)(this + 0x68) = 0;
  if (puVar5 == *(undefined2 **)(this + 0x60)) {
    return;
  }
  *puVar5 = 0;
  *(undefined2 **)(this + 0x60) = puVar5;
  return;
}

