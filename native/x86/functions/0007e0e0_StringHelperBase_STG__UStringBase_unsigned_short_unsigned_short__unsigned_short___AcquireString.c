/* 0007e0e0 | StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString */

/* StringHelperBase<STG::UStringBase<unsigned short, unsigned short>, unsigned
   short>::AcquireString(int) */

void __thiscall
StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short>::AcquireString
          (StringHelperBase<STG::UStringBase<unsigned_short,unsigned_short>,unsigned_short> *this,
          int param_1)

{
  void *pvVar1;
  int *piVar2;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *pbVar3;
  undefined4 uVar4;
  int iVar5;
  size_t __n;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *__dest;
  void *pvVar6;
  uint uVar7;
  uint uVar8;
  int unaff_EBX;
  size_t local_58;
  void *local_54;
  uint local_50 [4];
  int local_40;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_3c [8];
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_1c;
  basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
  *local_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x7e0eb;
  FUN_0002e044();
  piVar2 = *(int **)this;
  if ((piVar2 != (int *)0x0) && (*(int *)(this + 4) != 0)) {
    uVar4 = (**(code **)(*piVar2 + 0x294))(piVar2,*(int *)(this + 4),0);
    *(undefined4 *)(this + 8) = uVar4;
    iVar5 = (**(code **)(**(int **)this + 0x290))(*(int **)this,*(undefined4 *)(this + 4));
    pvVar6 = *(void **)(this + 8);
    if (param_1 < iVar5) {
      iVar5 = param_1;
    }
    pvVar1 = (void *)((int)pvVar6 + iVar5 * 2);
    __n = (int)pvVar1 - (int)pvVar6;
    local_40 = *(int *)("_ZNK3STG14GEVertexBuffer19SharesAnyComponentsERKS0_" + unaff_EBX + 0xe) + 8
    ;
    uVar7 = ((int)__n >> 1) + 1;
    local_1c = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)local_3c;
    local_18 = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)local_3c;
    if (((int)uVar7 < 0) || (uVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
      std::__stl_throw_length_error((char *)(unaff_EBX + 0x9221));
    }
    __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
              *)local_3c;
    if (0x10 < uVar7) {
      local_50[0] = uVar7 * 2;
      if (local_50[0] < 0x81) {
        __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                  *)std::__node_alloc::_M_allocate(local_50);
      }
      else {
        __dest = operator_new(local_50[0]);
      }
      local_3c[0] = __dest + (local_50[0] & 0xfffffffe);
    }
    local_18 = __dest;
    if (pvVar6 != pvVar1) {
      local_1c = __dest;
      pvVar6 = memcpy(__dest,pvVar6,__n);
      __dest = (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                *)((int)pvVar6 + __n);
    }
    local_1c = __dest;
    *(undefined2 *)__dest = 0;
    pbVar3 = local_18;
    if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(this + 0x10) !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)local_3c) {
      pvVar6 = *(void **)(this + 0x30);
      local_54 = *(void **)(this + 0x34);
      uVar8 = (int)__dest - (int)local_18 >> 1;
      uVar7 = (int)pvVar6 - (int)local_54 >> 1;
      if (uVar7 < uVar8) {
        iVar5 = 0;
        if (uVar7 != 0) {
          memmove(local_54,local_18,uVar7 * 2);
          iVar5 = *(int *)(this + 0x30) - *(int *)(this + 0x34) >> 1;
        }
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        ::_M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)(this + 0x10),(ushort *)(pbVar3 + iVar5 * 2),(ushort *)__dest);
      }
      else {
        local_58 = 0;
        if (uVar8 != 0) {
          local_58 = uVar8 * 2;
          memmove(local_54,local_18,local_58);
          local_54 = *(void **)(this + 0x34);
          pvVar6 = *(void **)(this + 0x30);
        }
        local_54 = (void *)((int)local_54 + local_58);
        if (local_54 != pvVar6) {
          memmove(local_54,pvVar6,2);
          *(uint *)(this + 0x30) =
               *(int *)(this + 0x30) - ((int)pvVar6 - (int)local_54 & 0xfffffffeU);
        }
      }
    }
    local_40 = *(int *)("_ZNK3STG14GEVertexBuffer19SharesAnyComponentsERKS0_" + unaff_EBX + 0xe) + 8
    ;
    if ((local_18 !=
         (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
          *)local_3c) &&
       (local_18 !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)0x0)) {
      uVar7 = (int)local_3c[0] - (int)local_18 & 0xfffffffe;
      if (0x80 < uVar7) {
        operator_delete(local_18);
        return;
      }
      std::__node_alloc::_M_deallocate(local_18,uVar7);
    }
  }
  return;
}

