/* 0006c200 | STG::UResource::LoadResources */

/* STG::UResource::LoadResources() */

int __thiscall STG::UResource::LoadResources(UResource *this)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int unaff_EBX;
  int iVar4;
  int local_4c;
  int local_40;
  uint local_3c [4];
  uint *local_2c;
  uint *local_28;
  int local_24;
  int local_14;
  
  local_14 = 0x6c20b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x2fc2d);
  iVar2 = (**(code **)(*(int *)this + 0x14))(this);
  local_4c = 0;
  if (iVar2 != 0) {
    iVar4 = 0;
    iVar3 = *(int *)(unaff_EBX + 0x2fc31) + 8;
    do {
      while( true ) {
        local_3c[0] = local_3c[0] & 0xffffff00;
        local_24 = -1;
        local_40 = iVar3;
        local_2c = local_3c;
        local_28 = local_3c;
        cVar1 = (**(code **)(*(int *)this + 0x18))(this,iVar4,&local_40);
        if ((((cVar1 != '\0') && (local_24 != -1)) && (local_28 != local_2c)) &&
           (cVar1 = (**(code **)(*(int *)this + 0x38))(this,iVar4,&local_40), cVar1 != '\0')) {
          local_4c = local_4c + 1;
        }
        local_40 = iVar3;
        if ((local_28 != local_3c) && (local_28 != (uint *)0x0)) break;
LAB_0006c274:
        iVar4 = iVar4 + 1;
        if (iVar4 == iVar2) goto LAB_0006c348;
      }
      if (local_3c[0] - (int)local_28 < 0x81) {
        std::__node_alloc::_M_deallocate(local_28,local_3c[0] - (int)local_28);
        goto LAB_0006c274;
      }
      iVar4 = iVar4 + 1;
      operator_delete(local_28);
    } while (iVar4 != iVar2);
  }
LAB_0006c348:
  if (local_14 != **(int **)(unaff_EBX + 0x2fc2d)) {
                    /* WARNING: Subroutine does not return */
    FUN_0002e000();
  }
  return local_4c;
}

