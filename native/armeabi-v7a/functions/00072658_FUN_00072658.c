/* 00072658 | FUN_00072658 */

int FUN_00072658(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 local_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 local_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 local_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 local_46c;
  undefined4 local_468;
  undefined4 uStack_464;
  undefined4 local_460;
  undefined4 local_45c;
  undefined1 auStack_260 [56];
  undefined4 local_228;
  
  pcVar4 = *(code **)(param_1 + 0xc);
  uVar5 = *(undefined4 *)(param_1 + 0x18);
  local_49c = *(undefined4 *)(param_2 + 4);
  uStack_498 = *(undefined4 *)(param_2 + 8);
  uStack_494 = *(undefined4 *)(param_2 + 0xc);
  uStack_490 = *(undefined4 *)(param_2 + 0x10);
  iVar3 = 0;
  local_48c = *(undefined4 *)(param_2 + 0x14);
  uStack_488 = *(undefined4 *)(param_2 + 0x18);
  uStack_484 = *(undefined4 *)(param_2 + 0x1c);
  uStack_480 = *(undefined4 *)(param_2 + 0x20);
  local_47c = *(undefined4 *)(param_2 + 0x24);
  uStack_478 = *(undefined4 *)(param_2 + 0x28);
  uStack_474 = *(undefined4 *)(param_2 + 0x2c);
  uStack_470 = *(undefined4 *)(param_2 + 0x30);
  local_46c = *(undefined4 *)(param_2 + 0x34);
  local_468 = *(undefined4 *)(param_2 + 0x38);
  uStack_464 = *(undefined4 *)(param_2 + 0x3c);
  local_460 = *(undefined4 *)(param_2 + 0x40);
  local_4a0 = 0;
  do {
    iVar1 = FUN_00072418(param_1,local_460);
    if (param_3 == 0) {
      uVar6 = 9;
    }
    else {
      uVar6 = 10;
    }
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x14) = local_460;
      memcpy(auStack_260,&local_4a0,0x240);
      iVar3 = (**(code **)(param_1 + 0x10))(uVar6,param_1,auStack_260);
      local_45c = local_228;
    }
    else {
      uVar6 = uVar6 | 0x10;
      local_45c = local_468;
    }
    iVar2 = (*pcVar4)(1,uVar6,param_1,param_1,&local_4a0,uVar5);
    if (iVar2 != 0) {
      return 9;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
    memcpy(&local_4a0,auStack_260,0x240);
    param_3 = 0;
  } while (iVar3 == 8);
  if (iVar3 == 7) {
    restore_core_regs(&local_49c);
  }
  return 9;
}

