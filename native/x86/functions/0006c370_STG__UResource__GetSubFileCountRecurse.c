/* 0006c370 | STG::UResource::GetSubFileCountRecurse */

/* STG::UResource::GetSubFileCountRecurse() const */

int __thiscall STG::UResource::GetSubFileCountRecurse(UResource *this)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int unaff_EBX;
  int iVar5;
  int local_4c;
  int local_40;
  uint local_3c [4];
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_14;
  
  local_14 = 0x6c37b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x2fabd);
  iVar2 = (**(code **)(*(int *)this + 0x1c))(this);
  local_4c = 0;
  if (iVar2 != 0) {
    iVar5 = 0;
    do {
      piVar3 = (int *)(**(code **)(*(int *)this + 0x20))(this,iVar5);
      if (piVar3 != (int *)0x0) {
        iVar4 = (**(code **)(*piVar3 + 0x24))(piVar3);
        local_4c = local_4c + iVar4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar2);
  }
  iVar2 = (**(code **)(*(int *)this + 0x14))(this);
  if (iVar2 != 0) {
    iVar5 = *(int *)(unaff_EBX + 0x2fac1) + 8;
    iVar4 = 0;
    do {
      while( true ) {
        local_2c = local_3c;
        local_3c[0] = local_3c[0] & 0xffffff00;
        local_24 = -1;
        local_40 = iVar5;
        local_28 = local_2c;
        cVar1 = (**(code **)(*(int *)this + 0x18))(this,iVar4,&local_40);
        if ((cVar1 != '\0') && (local_24 != -1)) {
          local_4c = local_4c + (uint)(local_28 != local_2c);
        }
        local_40 = iVar5;
        if ((local_28 != local_3c) && (local_28 != (uint *)0x0)) break;
LAB_0006c41c:
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar2) goto LAB_0006c4b8;
      }
      if (local_3c[0] - (int)local_28 < 0x81) {
        std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
        goto LAB_0006c41c;
      }
      iVar4 = iVar4 + 1;
      operator_delete(local_28);
    } while (iVar4 != iVar2);
  }
LAB_0006c4b8:
  if (local_14 != **(int **)(unaff_EBX + 0x2fabd)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return local_4c;
}

