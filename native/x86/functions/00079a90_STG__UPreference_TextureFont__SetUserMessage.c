/* 00079a90 | STG::UPreference_TextureFont::SetUserMessage */

/* STG::UPreference_TextureFont::SetUserMessage(STG::UStringBase<unsigned short, unsigned short>
   const&) */

undefined4 __thiscall
STG::UPreference_TextureFont::SetUserMessage(UPreference_TextureFont *this,UStringBase *param_1)

{
  void *pvVar1;
  int iVar2;
  ushort *puVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  void *pvVar7;
  uint uVar8;
  int unaff_EBX;
  size_t sVar9;
  uint local_50 [4];
  int local_40;
  int local_3c [8];
  int *local_1c;
  int *local_18;
  undefined4 uStack_14;
  
  uStack_14 = 0x79a9b;
  FUN_0002e044();
  pvVar4 = *(void **)(param_1 + 0x28);
  local_40 = *(int *)(
                     "_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_31UPreference_FileChooser_TextureE"
                     + unaff_EBX + 0x14) + 8;
  pvVar1 = *(void **)(param_1 + 0x24);
  sVar9 = (int)pvVar1 - (int)pvVar4;
  uVar6 = ((int)sVar9 >> 1) + 1;
  local_1c = local_3c;
  local_18 = local_3c;
  if ((-1 < (int)uVar6) && (uVar6 != 0)) {
    if (0x10 < uVar6) {
      local_50[0] = uVar6 * 2;
      if (local_50[0] < 0x81) {
        local_18 = (int *)std::__node_alloc::_M_allocate(local_50);
      }
      else {
        local_18 = operator_new(local_50[0]);
      }
      local_3c[0] = (local_50[0] & 0xfffffffe) + (int)local_18;
    }
    local_1c = local_18;
    if (pvVar1 != pvVar4) {
      pvVar4 = memcpy(local_18,pvVar4,sVar9);
      local_1c = (int *)((int)pvVar4 + sVar9);
    }
    *(undefined2 *)local_1c = 0;
    iVar5 = UStringBase<unsigned_short,unsigned_short>::Trim
                      ((UStringBase<unsigned_short,unsigned_short> *)&local_40);
    iVar2 = *(int *)(this + 0x7c);
    if ((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(iVar2 + 4) !=
        (basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
         *)(iVar5 + 4)) {
      puVar3 = *(ushort **)(iVar5 + 0x24);
      pvVar4 = *(void **)(iVar2 + 0x24);
      pvVar1 = *(void **)(iVar5 + 0x28);
      pvVar7 = *(void **)(iVar2 + 0x28);
      uVar6 = (int)puVar3 - (int)pvVar1 >> 1;
      uVar8 = (int)pvVar4 - (int)pvVar7 >> 1;
      if (uVar8 < uVar6) {
        iVar5 = 0;
        if (uVar8 != 0) {
          memmove(pvVar7,pvVar1,uVar8 * 2);
          iVar5 = *(int *)(iVar2 + 0x24) - *(int *)(iVar2 + 0x28) >> 1;
        }
        std::
        basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
        ::_M_append((basic_string<unsigned_short,std::char_traits<unsigned_short>,std::allocator<unsigned_short>>
                     *)(iVar2 + 4),(ushort *)((int)pvVar1 + iVar5 * 2),puVar3);
      }
      else {
        sVar9 = 0;
        if (uVar6 != 0) {
          sVar9 = uVar6 * 2;
          memmove(pvVar7,pvVar1,sVar9);
          pvVar4 = *(void **)(iVar2 + 0x24);
          pvVar7 = *(void **)(iVar2 + 0x28);
        }
        pvVar7 = (void *)((int)pvVar7 + sVar9);
        if (pvVar7 != pvVar4) {
          memmove(pvVar7,pvVar4,2);
          *(int *)(iVar2 + 0x24) =
               *(int *)(iVar2 + 0x24) - ((int)pvVar4 - (int)pvVar7 & 0xfffffffeU);
        }
      }
    }
    local_40 = *(int *)(
                       "_ZN3STG10USerialize4SaveEPNS_9FFileBaseERKNS_31UPreference_FileChooser_TextureE"
                       + unaff_EBX + 0x14) + 8;
    if ((local_18 != local_3c) && (local_18 != (int *)0x0)) {
      uVar6 = local_3c[0] - (int)local_18 & 0xfffffffe;
      if (0x80 < uVar6) {
        operator_delete(local_18);
        return 1;
      }
      std::__node_alloc::_M_deallocate(local_18,uVar6);
    }
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)(unaff_EBX + 0xd871));
}

