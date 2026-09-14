/* 0006f15c | STG::UPreference_TextureFont::SetUserMessage */

/* STG::UPreference_TextureFont::SetUserMessage(STG::UStringBase<unsigned short, unsigned short>
   const&) */

undefined4 __thiscall
STG::UPreference_TextureFont::SetUserMessage(UPreference_TextureFont *this,UStringBase *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  size_t sVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  void *__src;
  ushort *puVar8;
  void *pvVar9;
  uint local_50;
  int local_4c;
  int local_48 [8];
  int *local_28;
  int *local_24;
  
  pvVar7 = *(void **)(param_1 + 0x28);
  pvVar9 = *(void **)(param_1 + 0x24);
  sVar4 = (int)pvVar9 - (int)pvVar7;
  iVar6 = *(int *)(DAT_0006f340 + 0x6f17c);
  local_4c = iVar6 + 8;
  uVar3 = ((int)sVar4 >> 1) + 1;
  local_28 = local_48;
  local_24 = local_48;
  if ((-1 < (int)uVar3) && (uVar3 != 0)) {
    if (0x10 < uVar3) {
      local_50 = uVar3 * 2;
      if (local_50 < 0x81) {
        local_28 = (int *)std::__node_alloc::_M_allocate(&local_50);
      }
      else {
        local_28 = operator_new(local_50);
      }
      local_48[0] = (int)local_28 + (local_50 & 0xfffffffe);
    }
    local_24 = local_28;
    if (pvVar7 != pvVar9) {
      pvVar7 = memcpy(local_28,pvVar7,sVar4);
      local_28 = (int *)((int)pvVar7 + sVar4);
    }
    *(undefined2 *)local_28 = 0;
    iVar2 = UStringBase<unsigned_short,unsigned_short>::Trim
                      ((UStringBase<unsigned_short,unsigned_short> *)&local_4c);
    iVar5 = *(int *)(this + 0x7c);
    if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(iVar5 + 4) !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(iVar2 + 4)) {
      __src = *(void **)(iVar2 + 0x28);
      puVar8 = *(ushort **)(iVar2 + 0x24);
      pvVar9 = *(void **)(iVar5 + 0x24);
      pvVar7 = *(void **)(iVar5 + 0x28);
      uVar3 = (int)puVar8 - (int)__src >> 1;
      uVar1 = (int)pvVar9 - (int)pvVar7 >> 1;
      if (uVar1 < uVar3) {
        iVar2 = 0;
        if (uVar1 != 0) {
          memmove(pvVar7,__src,uVar1 << 1);
          iVar2 = *(int *)(iVar5 + 0x24) - *(int *)(iVar5 + 0x28) >> 1;
        }
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        ::_M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)(iVar5 + 4),(ushort *)((int)__src + iVar2 * 2),puVar8);
      }
      else {
        if (uVar3 == 0) {
          sVar4 = 0;
        }
        else {
          sVar4 = uVar3 << 1;
          memmove(pvVar7,__src,sVar4);
          pvVar7 = *(void **)(iVar5 + 0x28);
          pvVar9 = *(void **)(iVar5 + 0x24);
        }
        pvVar7 = (void *)((int)pvVar7 + sVar4);
        if (pvVar7 != pvVar9) {
          memmove(pvVar7,pvVar9,2);
          *(uint *)(iVar5 + 0x24) =
               *(int *)(iVar5 + 0x24) - ((int)pvVar9 - (int)pvVar7 & 0xfffffffeU);
        }
      }
    }
    local_4c = iVar6 + 8;
    if ((local_24 != local_48) && (local_24 != (int *)0x0)) {
      uVar3 = local_48[0] - (int)local_24 & 0xfffffffe;
      if (uVar3 < 0x81) {
        std::__node_alloc::_M_deallocate(local_24,uVar3);
      }
      else {
        operator_delete(local_24);
      }
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(DAT_0006f344 + 0x6f2f0));
}

