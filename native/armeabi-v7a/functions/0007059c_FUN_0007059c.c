/* 0007059c | FUN_0007059c */

bool FUN_0007059c(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  char local_2c;
  
  iVar1 = FUN_0006f21c();
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar4 = DAT_00070720 + 0x705d4;
      iVar5 = DAT_00070724 + 0x705da;
      iVar6 = DAT_00070728 + 0x705e0;
      iVar7 = 0;
      iVar8 = param_1;
      do {
        FUN_0006f240(&local_3c,param_1);
        local_40 = (int *)*param_3;
        uVar2 = *(uint *)(param_1 + iVar7 * 8 + 0x14);
        if (local_40 != (int *)0x0) {
          iVar3 = (int)uVar2 >> 8;
          if ((uVar2 & 1) != 0) {
            iVar3 = *(int *)(*local_40 + iVar3);
          }
          local_40 = (int *)((int)local_40 + iVar3);
        }
        if ((((int)(uVar2 << 0x1e) < 0) || (param_4[3] << 0x1f < 0)) &&
           (iVar3 = (**(code **)(**(int **)(iVar8 + 0x10) + 0x10))
                              (*(int **)(iVar8 + 0x10),param_2,&local_40,&local_3c), iVar3 != 0)) {
          if (-1 < (int)(uVar2 << 0x1e)) {
            local_3c = 2;
          }
          if ((uVar2 & 1) != 0) {
            local_2c = '\0';
          }
          iVar3 = param_4[1];
          if (iVar3 == 0) {
            if (local_38 != 0) {
              memcpy(param_4,&local_3c,0x11);
              if ((*param_4 == 1) && (-1 < *(int *)(param_1 + 8) << 0x1f)) {
                return true;
              }
              goto LAB_00070694;
            }
LAB_000706ec:
            __assert2(DAT_00070738 + 0x706f8,0x6f,DAT_0007073c + 0x706fa,DAT_00070740 + 0x706fc);
            iVar3 = param_4[1];
          }
          else if (local_38 == 0) goto LAB_000706ec;
          iVar3 = FUN_0007051c(local_38,iVar3);
          if ((iVar3 != 0) ||
             (((param_4[2] == 0 && (local_34 == 0)) &&
              (((char)param_4[4] != '\0' ||
               ((local_2c != '\0' || (iVar3 = FUN_00070508(param_4[1],local_38), iVar3 != 0))))))))
          {
LAB_00070672:
            *param_4 = 2;
            return true;
          }
          iVar3 = FUN_00070508(param_4[1],local_38);
          if (iVar3 == 0) {
            __assert2(DAT_0007072c + 0x706e4,0x8a,DAT_00070730 + 0x706e6,DAT_00070734 + 0x706e8);
          }
          iVar3 = param_4[2];
          if ((iVar3 == 0) || (local_34 == 0)) {
            __assert2(iVar4,0x8f,iVar5,iVar6);
            iVar3 = param_4[2];
          }
          if (iVar3 != local_34) goto LAB_00070672;
        }
LAB_00070694:
        iVar7 = iVar7 + 1;
        iVar8 = iVar8 + 8;
      } while (iVar1 != iVar7);
    }
    bVar9 = *param_4 != 0;
  }
  else {
    bVar9 = true;
  }
  return bVar9;
}

