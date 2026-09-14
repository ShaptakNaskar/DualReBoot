/* 00084100 | __umoddi3 */

undefined8 __umoddi3(uint param_1,uint param_2,uint param_3,uint param_4)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  byte local_14;
  byte local_10;
  
  if (param_4 == 0) {
    if (param_3 <= param_2) {
      if (param_3 == 0) {
        param_3 = 1 / 0;
      }
      param_2 = param_2 % param_3;
    }
    param_1 = (uint)(CONCAT44(param_2,param_1) % (ulonglong)param_3);
    param_2 = 0;
  }
  else if (param_4 <= param_2) {
    uVar3 = 0x1f;
    if (param_4 != 0) {
      for (; param_4 >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    if ((uVar3 ^ 0x1f) == 0) {
      if ((param_3 <= param_1) || (param_4 < param_2)) {
        bVar7 = param_1 < param_3;
        param_1 = param_1 - param_3;
        param_2 = (param_2 - param_4) - (uint)bVar7;
      }
    }
    else {
      local_14 = (byte)(uVar3 ^ 0x1f);
      local_10 = 0x20 - local_14;
      uVar3 = param_3 >> (local_10 & 0x1f) | param_4 << (local_14 & 0x1f);
      param_3 = param_3 << (local_14 & 0x1f);
      uVar6 = param_1 << (local_14 & 0x1f);
      uVar1 = CONCAT44(param_2 >> (local_10 & 0x1f),
                       param_1 >> (local_10 & 0x1f) | param_2 << (local_14 & 0x1f));
      uVar4 = (uint)(uVar1 % (ulonglong)uVar3);
      lVar2 = (uVar1 / uVar3 & 0xffffffff) * (ulonglong)param_3;
      uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
      if ((uVar4 < uVar5) || ((uVar6 < (uint)lVar2 && (uVar5 == uVar4)))) {
        lVar2 = lVar2 - CONCAT44(uVar3,param_3);
      }
      param_2 = (uVar4 - (int)((ulonglong)lVar2 >> 0x20)) - (uint)(uVar6 < (uint)lVar2);
      param_1 = uVar6 - (uint)lVar2 >> (local_14 & 0x1f) | param_2 << (local_10 & 0x1f);
      param_2 = param_2 >> (local_14 & 0x1f);
    }
  }
  return CONCAT44(param_2,param_1);
}

