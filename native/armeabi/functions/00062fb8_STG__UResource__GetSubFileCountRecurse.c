/* 00062fb8 | STG::UResource::GetSubFileCountRecurse */

/* STG::UResource::GetSubFileCountRecurse() const */

void __thiscall STG::UResource::GetSubFileCountRecurse(UResource *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int local_4c;
  uint local_48 [4];
  uint *local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_0006312c + 0x62fdc);
  local_2c = *piVar5;
  iVar1 = (**(code **)(*(int *)this + 0x1c))();
  if (iVar1 == 0) {
    iVar7 = 0;
  }
  else {
    iVar6 = 0;
    iVar7 = 0;
    do {
      piVar2 = (int *)(**(code **)(*(int *)this + 0x20))(this,iVar6);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x24))();
        iVar7 = iVar7 + iVar3;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 != iVar1);
  }
  iVar1 = (**(code **)(*(int *)this + 0x14))(this);
  if (iVar1 != 0) {
    iVar6 = 0;
    iVar3 = *(int *)(DAT_00063130 + 0x63064) + 8;
    do {
      while( true ) {
        local_48[0] = local_48[0] & 0xffffff00;
        local_30 = -1;
        local_4c = iVar3;
        local_38 = local_48;
        local_34 = local_48;
        iVar4 = (**(code **)(*(int *)this + 0x18))(this,iVar6,&local_4c);
        if (((iVar4 != 0) && (local_30 != -1)) && (local_34 != local_38)) {
          iVar7 = iVar7 + 1;
        }
        local_4c = iVar3;
        if ((local_34 != local_48) && (local_34 != (uint *)0x0)) break;
LAB_00063074:
        iVar6 = iVar6 + 1;
        if (iVar6 == iVar1) goto LAB_00063108;
      }
      if (0x80 < local_48[0] - (int)local_34) {
        operator_delete(local_34);
        goto LAB_00063074;
      }
      iVar6 = iVar6 + 1;
      std::__node_alloc::_M_deallocate(local_34,local_48[0] - (int)local_34);
    } while (iVar6 != iVar1);
  }
LAB_00063108:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar7);
}

