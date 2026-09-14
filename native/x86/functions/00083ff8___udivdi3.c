/* 00083ff8 | __udivdi3 */

undefined8 __udivdi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte local_20;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      uVar7 = param_2 / param_3;
      iVar5 = (int)(((ulonglong)param_2 % (ulonglong)param_3 << 0x20 | (ulonglong)param_1) /
                   (ulonglong)param_3);
      goto LAB_000840f1;
    }
    iVar5 = (int)(CONCAT44(param_2,param_1) / (ulonglong)param_3);
LAB_000840ef:
    uVar7 = 0;
  }
  else {
    if (param_4 <= param_2) {
      uVar7 = 0x1f;
      if (param_4 != 0) {
        for (; param_4 >> uVar7 == 0; uVar7 = uVar7 - 1) {
        }
      }
      if ((uVar7 ^ 0x1f) != 0) {
        local_20 = (byte)(uVar7 ^ 0x1f);
        bVar6 = 0x20 - local_20;
        uVar1 = (ulonglong)(param_3 >> (bVar6 & 0x1f) | param_4 << (local_20 & 0x1f));
        uVar2 = CONCAT44(param_2 >> (bVar6 & 0x1f),
                         param_1 >> (bVar6 & 0x1f) | param_2 << (local_20 & 0x1f));
        uVar3 = uVar2 / uVar1;
        iVar5 = (int)uVar3;
        uVar7 = (uint)(uVar2 % uVar1);
        lVar4 = (uVar3 & 0xffffffff) * (ulonglong)(param_3 << (local_20 & 0x1f));
        uVar8 = (uint)((ulonglong)lVar4 >> 0x20);
        if ((uVar7 < uVar8) || ((param_1 << (local_20 & 0x1f) < (uint)lVar4 && (uVar8 == uVar7)))) {
          iVar5 = iVar5 + -1;
        }
        goto LAB_000840ef;
      }
      uVar7 = 0;
      if ((param_3 <= param_1) || (param_4 < param_2)) {
        iVar5 = 1;
        goto LAB_000840f1;
      }
    }
    uVar7 = 0;
    iVar5 = 0;
  }
LAB_000840f1:
  return CONCAT44(uVar7,iVar5);
}

