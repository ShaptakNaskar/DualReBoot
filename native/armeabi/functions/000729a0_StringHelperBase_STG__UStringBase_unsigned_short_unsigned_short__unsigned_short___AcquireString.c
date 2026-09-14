/* 000729a0 | StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString */

/* StringHelperBase<STG::UStringBase<unsigned short, unsigned short>, unsigned
   short>::AcquireString(int) */

void __thiscall
StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString
          (StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short> *this,
          int param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *__dest;
  uint uVar5;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *__src;
  int iVar6;
  size_t sVar7;
  void *pvVar8;
  void *pvVar9;
  uint local_50;
  int local_4c;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_48 [8];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_28;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_24;
  
  iVar6 = DAT_00072bd0;
  piVar2 = *(int **)this;
  if ((piVar2 != (int *)0x0) && (*(int *)(this + 4) != 0)) {
    uVar3 = (**(code **)(*piVar2 + 0x294))(piVar2,*(int *)(this + 4),0);
    *(undefined4 *)(this + 8) = uVar3;
    iVar4 = (**(code **)(**(int **)this + 0x290))(*(int **)this,*(undefined4 *)(this + 4));
    pvVar9 = *(void **)(this + 8);
    if (param_1 <= iVar4) {
      iVar4 = param_1;
    }
    iVar6 = *(int *)(iVar6 + 0x72a14);
    pvVar8 = (void *)((int)pvVar9 + iVar4 * 2);
    sVar7 = (int)pvVar8 - (int)pvVar9;
    local_4c = iVar6 + 8;
    uVar5 = ((int)sVar7 >> 1) + 1;
    local_28 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)local_48;
    local_24 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)local_48;
    if (((int)uVar5 < 0) || (uVar5 == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_00072bd4 + 0x72b60));
    }
    __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)local_48;
    if (0x10 < uVar5) {
      local_50 = uVar5 * 2;
      if (local_50 < 0x81) {
        __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  *)std::__node_alloc::_M_allocate(&local_50);
      }
      else {
        __dest = operator_new(local_50);
      }
      local_48[0] = __dest + (local_50 & 0xfffffffe);
    }
    local_24 = __dest;
    if (pvVar9 != pvVar8) {
      local_28 = __dest;
      pvVar9 = memcpy(__dest,pvVar9,sVar7);
      __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)((int)pvVar9 + sVar7);
    }
    __src = local_24;
    local_28 = __dest;
    *(ushort *)__dest = 0;
    if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(this + 0x10) !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)local_48) {
      pvVar8 = *(void **)(this + 0x30);
      pvVar9 = *(void **)(this + 0x34);
      uVar5 = (int)__dest - (int)__src >> 1;
      uVar1 = (int)pvVar8 - (int)pvVar9 >> 1;
      if (uVar1 < uVar5) {
        iVar4 = 0;
        if (uVar1 != 0) {
          memmove(pvVar9,__src,uVar1 << 1);
          iVar4 = *(int *)(this + 0x30) - *(int *)(this + 0x34) >> 1;
        }
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        ::_M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)(this + 0x10),(ushort *)(__src + iVar4 * 2),(ushort *)__dest);
        __src = local_24;
      }
      else {
        if (uVar5 == 0) {
          sVar7 = 0;
        }
        else {
          sVar7 = uVar5 << 1;
          memmove(pvVar9,__src,sVar7);
          pvVar9 = *(void **)(this + 0x34);
          pvVar8 = *(void **)(this + 0x30);
        }
        pvVar9 = (void *)((int)pvVar9 + sVar7);
        __src = local_24;
        if (pvVar9 != pvVar8) {
          memmove(pvVar9,pvVar8,2);
          *(uint *)(this + 0x30) = *(int *)(this + 0x30) - ((int)pvVar8 - (int)pvVar9 & 0xfffffffeU)
          ;
          __src = local_24;
        }
      }
    }
    local_4c = iVar6 + 8;
    if ((__src != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                   *)local_48) &&
       (__src != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  *)0x0)) {
      uVar5 = (int)local_48[0] - (int)__src & 0xfffffffe;
      if (uVar5 < 0x81) {
        std::__node_alloc::_M_deallocate(__src,uVar5);
      }
      else {
        operator_delete(__src);
      }
    }
  }
  return;
}

