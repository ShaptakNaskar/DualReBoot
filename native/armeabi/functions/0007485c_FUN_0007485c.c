/* 0007485c | FUN_0007485c */

bool FUN_0007485c(int param_1,undefined4 param_2,undefined4 *param_3,int *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  int *local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  char local_2c;
  
  iVar1 = FUN_00073488();
  bVar8 = true;
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar3 = DAT_000749e8 + 0x7488e;
      iVar7 = 0;
      iVar6 = param_1;
      do {
        FUN_000734b4(&local_3c,param_1);
        uVar4 = *(uint *)((iVar7 + 2) * 8 + param_1 + 4);
        local_40 = (int *)*param_3;
        uVar2 = (uVar4 & 3) >> 1;
        if (local_40 != (int *)0x0) {
          iVar5 = (int)uVar4 >> 8;
          if ((uVar4 & 1) != 0) {
            iVar5 = *(int *)(*local_40 + iVar5);
          }
          local_40 = (int *)((int)local_40 + iVar5);
        }
        if (((uVar2 != 0) || ((param_4[3] & 1U) != 0)) &&
           (iVar5 = (**(code **)(**(int **)(iVar6 + 0x10) + 0x10))
                              (*(int **)(iVar6 + 0x10),param_2,&local_40,&local_3c), iVar5 != 0)) {
          if (uVar2 == 0) {
            local_3c = 2;
          }
          if ((uVar4 & 1) != 0) {
            local_2c = '\0';
          }
          iVar5 = param_4[1];
          if (iVar5 == 0) {
            if (local_38 != 0) {
              memcpy(param_4,&local_3c,0x11);
              if ((*param_4 == 1) && ((*(uint *)(param_1 + 8) & 1) == 0)) {
                return true;
              }
              goto LAB_0007495e;
            }
LAB_000749ae:
            __assert2(DAT_000749f8 + 0x749b8,0x6f,DAT_000749fc + 0x749bc,DAT_00074a00 + 0x749be);
            iVar5 = param_4[1];
          }
          else if (local_38 == 0) goto LAB_000749ae;
          iVar5 = FUN_000747dc(local_38,iVar5);
          if ((iVar5 != 0) ||
             (((param_4[2] == 0 && (local_34 == 0)) &&
              (((char)param_4[4] != '\0' ||
               ((local_2c != '\0' || (iVar5 = FUN_000747cc(param_4[1],local_38), iVar5 != 0))))))))
          {
LAB_00074932:
            *param_4 = 2;
            return true;
          }
          iVar5 = FUN_000747cc(param_4[1],local_38);
          if (iVar5 == 0) {
            __assert2(DAT_000749ec + 0x749a4,0x8a,DAT_000749f0 + 0x749a6,DAT_000749f4 + 0x749a8);
          }
          iVar5 = param_4[2];
          if ((iVar5 == 0) || (local_34 == 0)) {
            __assert2(iVar3,0x8f,DAT_00074a04 + 0x749ce,DAT_00074a08 + 0x749d0);
            iVar5 = param_4[2];
          }
          if (iVar5 != local_34) goto LAB_00074932;
        }
LAB_0007495e:
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 8;
      } while (iVar1 != iVar7);
    }
    bVar8 = *param_4 != 0;
  }
  return bVar8;
}

