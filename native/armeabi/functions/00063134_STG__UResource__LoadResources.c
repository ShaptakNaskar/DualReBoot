/* 00063134 | STG::UResource::LoadResources */

/* STG::UResource::LoadResources() */

void __thiscall STG::UResource::LoadResources(UResource *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int local_54;
  int local_4c;
  uint local_48 [4];
  uint *local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  
  piVar5 = *(int **)(DAT_00063274 + 0x6314c);
  local_2c = *piVar5;
  iVar1 = (**(code **)(*(int *)this + 0x14))();
  if (iVar1 == 0) {
    local_54 = 0;
  }
  else {
    iVar3 = 0;
    local_54 = 0;
    iVar4 = *(int *)(DAT_00063278 + 0x63180) + 8;
    do {
      while( true ) {
        local_48[0] = local_48[0] & 0xffffff00;
        local_30 = -1;
        local_4c = iVar4;
        local_38 = local_48;
        local_34 = local_48;
        iVar2 = (**(code **)(*(int *)this + 0x18))(this,iVar3,&local_4c);
        if ((((iVar2 != 0) && (local_30 != -1)) && (local_34 != local_38)) &&
           (iVar2 = (**(code **)(*(int *)this + 0x38))(this,iVar3,&local_4c), iVar2 != 0)) {
          local_54 = local_54 + 1;
        }
        local_4c = iVar4;
        if ((local_34 != local_48) && (local_34 != (uint *)0x0)) break;
LAB_00063194:
        iVar3 = iVar3 + 1;
        if (iVar3 == iVar1) goto LAB_00063258;
      }
      if (0x80 < local_48[0] - (int)local_34) {
        operator_delete(local_34);
        goto LAB_00063194;
      }
      iVar3 = iVar3 + 1;
      std::__node_alloc::_M_deallocate(local_34,local_48[0] - (int)local_34);
    } while (iVar3 != iVar1);
  }
LAB_00063258:
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_54);
  }
  return;
}

