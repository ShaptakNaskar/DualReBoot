/* 0006e750 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::IsValueValid */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>,
   true>::IsValueValid(STG::UStringBase<char, int> const&) const */

undefined4 __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::IsValueValid
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this,
          UStringBase *param_1)

{
  uint *puVar1;
  size_t __n;
  int iVar2;
  int unaff_EBX;
  undefined4 uVar3;
  size_t sVar4;
  size_t sVar5;
  uint local_38;
  int local_30;
  uint local_2c [4];
  uint *local_1c;
  uint *local_18;
  int local_14;
  
  local_14 = 0x6e75b;
  FUN_0002e044();
  local_2c[0] = local_2c[0] & 0xffffff00;
  local_14 = **(int **)((int)&__DT_JMPREL[0x60].r_info + unaff_EBX + 1);
  uVar3 = 0;
  local_30 = *(int *)((int)&__DT_JMPREL[0x61].r_offset + unaff_EBX + 1) + 8;
  local_1c = local_2c;
  local_18 = local_2c;
  if (*(int *)(this + 0x80) != 0) {
    local_38 = 0;
    do {
      (**(code **)(*(int *)this + 0x28))(this,local_38,&local_30);
      puVar1 = local_18;
      sVar5 = (int)local_1c - (int)local_18;
      sVar4 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      __n = sVar5;
      if ((int)sVar4 <= (int)sVar5) {
        __n = sVar4;
      }
      iVar2 = memcmp(local_18,*(void **)(param_1 + 0x18),__n);
      if (((iVar2 == 0) && ((int)sVar4 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar4)) {
        uVar3 = 1;
        goto LAB_0006e82e;
      }
      local_38 = local_38 + 1;
    } while (local_38 < *(uint *)(this + 0x80));
    uVar3 = 0;
LAB_0006e82e:
    local_30 = *(int *)((int)&__DT_JMPREL[0x61].r_offset + unaff_EBX + 1) + 8;
    if ((puVar1 != local_2c) && (puVar1 != (uint *)0x0)) {
      if (local_2c[0] - (int)puVar1 < 0x81) {
        std::__node_alloc::_M_deallocate(puVar1,local_2c[0] - (int)puVar1);
      }
      else {
        operator_delete(puVar1);
      }
    }
  }
  if (local_14 == **(int **)((int)&__DT_JMPREL[0x60].r_info + unaff_EBX + 1)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

