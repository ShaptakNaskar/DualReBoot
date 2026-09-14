/* 0006df98 | StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString */

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
  code *pcVar5;
  uint uVar6;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *__src;
  int iVar7;
  size_t sVar8;
  void *pvVar9;
  void *pvVar10;
  uint local_50;
  int local_4c;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_48 [8];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_28;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_24;
  
  iVar7 = DAT_0006e1c8;
  piVar2 = *(int **)this;
  if ((piVar2 != (int *)0x0) && (*(int *)(this + 4) != 0)) {
    uVar3 = (**(code **)(*piVar2 + 0x294))(piVar2,*(int *)(this + 4),0);
    pcVar5 = *(code **)(**(int **)this + 0x290);
    *(undefined4 *)(this + 8) = uVar3;
    iVar4 = (*pcVar5)(*(int **)this,*(undefined4 *)(this + 4));
    pvVar10 = *(void **)(this + 8);
    iVar7 = *(int *)(iVar7 + 0x6e000);
    local_4c = iVar7 + 8;
    if (param_1 <= iVar4) {
      iVar4 = param_1;
    }
    pvVar9 = (void *)((int)pvVar10 + iVar4 * 2);
    sVar8 = (int)pvVar9 - (int)pvVar10;
    uVar6 = ((int)sVar8 >> 1) + 1;
    local_28 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)local_48;
    local_24 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)local_48;
    if (((int)uVar6 < 0) || (uVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(DAT_0006e1cc + 0x6e158));
    }
    __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)local_48;
    if (0x10 < uVar6) {
      local_50 = uVar6 * 2;
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
    if (pvVar10 != pvVar9) {
      local_28 = __dest;
      pvVar10 = memcpy(__dest,pvVar10,sVar8);
      __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)((int)pvVar10 + sVar8);
    }
    __src = local_24;
    local_28 = __dest;
    *(ushort *)__dest = 0;
    if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(this + 0x10) !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)local_48) {
      pvVar9 = *(void **)(this + 0x30);
      pvVar10 = *(void **)(this + 0x34);
      uVar6 = (int)__dest - (int)__src >> 1;
      uVar1 = (int)pvVar9 - (int)pvVar10 >> 1;
      if (uVar1 < uVar6) {
        iVar4 = 0;
        if (uVar1 != 0) {
          memmove(pvVar10,__src,uVar1 << 1);
          iVar4 = *(int *)(this + 0x30) - *(int *)(this + 0x34) >> 1;
        }
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        ::_M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)(this + 0x10),(ushort *)(__src + iVar4 * 2),(ushort *)__dest);
        __src = local_24;
      }
      else {
        if (uVar6 == 0) {
          sVar8 = 0;
        }
        else {
          sVar8 = uVar6 << 1;
          memmove(pvVar10,__src,sVar8);
          pvVar10 = *(void **)(this + 0x34);
          pvVar9 = *(void **)(this + 0x30);
        }
        pvVar10 = (void *)((int)pvVar10 + sVar8);
        __src = local_24;
        if (pvVar10 != pvVar9) {
          memmove(pvVar10,pvVar9,2);
          *(uint *)(this + 0x30) =
               *(int *)(this + 0x30) - ((int)pvVar9 - (int)pvVar10 & 0xfffffffeU);
          __src = local_24;
        }
      }
    }
    local_4c = iVar7 + 8;
    if ((__src != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                   *)local_48) &&
       (__src != (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  *)0x0)) {
      uVar6 = (int)local_48[0] - (int)__src & 0xfffffffe;
      if (uVar6 < 0x81) {
        std::__node_alloc::_M_deallocate(__src,uVar6);
      }
      else {
        operator_delete(__src);
      }
    }
  }
  return;
}

