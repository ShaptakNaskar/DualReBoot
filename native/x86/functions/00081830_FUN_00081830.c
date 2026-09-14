/* 00081830 | FUN_00081830 */

bool FUN_00081830(int param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  int unaff_EBX;
  int iVar6;
  bool bVar7;
  int *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  char local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x81839;
  FUN_0002e044();
  cVar4 = FUN_0007f4e0(param_1,param_2,param_3,param_4);
  bVar7 = true;
  if (cVar4 == '\0') {
    iVar1 = *(int *)(param_1 + 0xc);
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        FUN_0007f560(&local_30,param_1);
        piVar2 = *(int **)(param_1 + 0x10 + iVar6 * 8);
        local_34 = (int *)*param_3;
        uVar3 = *(uint *)(param_1 + 0x14 + iVar6 * 8);
        bVar7 = (uVar3 & 2) != 0;
        if (local_34 != (int *)0x0) {
          iVar5 = (int)uVar3 >> 8;
          if ((uVar3 & 1) != 0) {
            iVar5 = *(int *)(iVar5 + *local_34);
          }
          local_34 = (int *)(iVar5 + (int)local_34);
        }
        if (((bVar7) || ((*(byte *)(param_4 + 3) & 1) != 0)) &&
           (cVar4 = (**(code **)(*piVar2 + 0x10))(piVar2,param_2,&local_34,&local_30), cVar4 != '\0'
           )) {
          if (!bVar7) {
            local_30 = 2;
          }
          if ((uVar3 & 1) != 0) {
            local_20 = '\0';
          }
          iVar5 = param_4[1];
          if (iVar5 == 0) {
            if (local_2c != 0) {
              *param_4 = local_30;
              param_4[1] = local_2c;
              param_4[2] = local_28;
              param_4[3] = local_24;
              *(char *)(param_4 + 4) = local_20;
              if ((local_30 == 1) && ((*(byte *)(param_1 + 8) & 1) == 0)) {
                return true;
              }
              goto LAB_000819f8;
            }
LAB_00081a98:
            __assert2(unaff_EBX + 0x64d7,0x6f,unaff_EBX + 0x7647,unaff_EBX + 0x649b);
            iVar5 = param_4[1];
          }
          else if (local_2c == 0) goto LAB_00081a98;
          cVar4 = FUN_00081710(local_2c,iVar5);
          if ((cVar4 != '\0') ||
             (((param_4[2] == 0 && (local_28 == 0)) &&
              (((char)param_4[4] != '\0' ||
               ((local_20 != '\0' || (cVar4 = FUN_00081700(param_4[1],local_2c), cVar4 != '\0'))))))
             )) {
LAB_0008199e:
            *param_4 = 2;
            return true;
          }
          cVar4 = FUN_00081700(param_4[1],local_2c);
          if (cVar4 == '\0') {
            __assert2(unaff_EBX + 0x64d7,0x8a,unaff_EBX + 0x7647,unaff_EBX + 0x6543);
          }
          iVar5 = param_4[2];
          if ((iVar5 == 0) || (local_28 == 0)) {
            __assert2(unaff_EBX + 0x64d7,0x8f,unaff_EBX + 0x7647,unaff_EBX + 0x656f);
            iVar5 = param_4[2];
          }
          if (iVar5 != local_28) goto LAB_0008199e;
        }
LAB_000819f8:
        iVar6 = iVar6 + 1;
      } while (iVar1 != iVar6);
    }
    bVar7 = *param_4 != 0;
  }
  return bVar7;
}

