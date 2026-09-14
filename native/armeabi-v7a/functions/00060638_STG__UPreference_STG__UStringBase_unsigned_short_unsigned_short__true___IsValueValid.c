/* 00060638 | STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::IsValueValid */

/* STG::UPreference<STG::UStringBase<unsigned short, unsigned short>,
   true>::IsValueValid(STG::UStringBase<char, int> const&) const */

void __thiscall
STG::UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true>::IsValueValid
          (UPreference<STG::UStringBase<unsigned_short,unsigned_short>,true> *this,
          UStringBase *param_1)

{
  uint *puVar1;
  int iVar2;
  size_t __n;
  size_t sVar3;
  undefined4 uVar4;
  size_t sVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int local_48;
  uint local_44 [4];
  uint *local_34;
  uint *local_30;
  int local_2c;
  
  uVar6 = 0;
  piVar7 = *(int **)(DAT_00060764 + 0x60658);
  local_2c = *piVar7;
  iVar8 = *(int *)(DAT_00060768 + 0x60670);
  local_48 = iVar8 + 8;
  local_44[0] = local_44[0] & 0xffffff00;
  local_34 = local_44;
  uVar4 = 0;
  local_30 = local_34;
  if (*(int *)(this + 0x80) != 0) {
    do {
      (**(code **)(*(int *)this + 0x28))(this,uVar6,&local_48);
      puVar1 = local_30;
      sVar3 = *(int *)(param_1 + 0x14) - (int)*(void **)(param_1 + 0x18);
      sVar5 = (int)local_34 - (int)local_30;
      __n = sVar3;
      if ((int)sVar5 <= (int)sVar3) {
        __n = sVar5;
      }
      iVar2 = memcmp(local_30,*(void **)(param_1 + 0x18),__n);
      if (((iVar2 == 0) && ((int)sVar3 <= (int)sVar5)) && ((int)sVar5 <= (int)sVar3)) {
        uVar4 = 1;
        goto LAB_000606f0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x80));
    uVar4 = 0;
LAB_000606f0:
    local_48 = iVar8 + 8;
    if ((puVar1 != local_44) && (puVar1 != (uint *)0x0)) {
      if (local_44[0] - (int)puVar1 < 0x81) {
        std::__node_alloc::_M_deallocate(puVar1,local_44[0] - (int)puVar1);
      }
      else {
        operator_delete(puVar1);
      }
    }
  }
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

