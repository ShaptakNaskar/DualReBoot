/* 000454a8 | STG::GETimeOfDay::GetNormalizedSec_Nighttime */

/* STG::GETimeOfDay::GetNormalizedSec_Nighttime() const */

undefined4 __thiscall STG::GETimeOfDay::GetNormalizedSec_Nighttime(GETimeOfDay *this)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar2 = DAT_0004562c;
  if ((*(uint *)(DAT_0004562c + 0x454dc) & 1) == 0) {
    iVar7 = DAT_0004562c + 0x454dc;
    iVar4 = thunk_FUN_0007004c(iVar7);
    if (iVar4 != 0) {
      uVar3 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x454c0));
      *(undefined4 *)(iVar2 + 0x454e0) = uVar3;
      thunk_FUN_000700b0(iVar7);
    }
  }
  iVar2 = DAT_00045630;
  if ((*(uint *)(DAT_00045630 + 0x454f8) & 1) == 0) {
    iVar7 = DAT_00045630 + 0x454f8;
    iVar4 = thunk_FUN_0007004c(iVar7);
    if (iVar4 != 0) {
      uVar3 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x454e4));
      *(undefined4 *)(iVar2 + 0x454fc) = uVar3;
      thunk_FUN_000700b0(iVar7);
    }
  }
  iVar2 = DAT_00045634;
  if ((*(uint *)(DAT_00045634 + 0x45514) & 1) == 0) {
    iVar7 = DAT_00045634 + 0x45514;
    iVar4 = thunk_FUN_0007004c(iVar7);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x45518) = *(int *)(iVar2 + 0x45510) + -0xa8c0;
      thunk_FUN_000700b0(iVar7);
    }
  }
  iVar2 = DAT_00045638;
  if ((*(uint *)(DAT_00045638 + 0x45530) & 1) == 0) {
    iVar7 = DAT_00045638 + 0x45530;
    iVar4 = thunk_FUN_0007004c(iVar7);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x45534) = *(int *)(iVar2 + 0x4551c) + 0xa8c0;
      thunk_FUN_000700b0(iVar7);
    }
  }
  iVar2 = GetNormalizedSec(this);
  uVar6 = iVar2 + 0xa8c0;
  uVar5 = *(uint *)(DAT_0004563c + 0x45550);
  if (0x1517f < uVar6) {
    uVar6 = iVar2 - 0xa8c0;
  }
  if (uVar5 <= uVar6) {
    if (uVar6 <= *(uint *)(DAT_0004563c + 0x45558)) {
      lVar1 = (ulonglong)(uVar6 - uVar5) * 0x15180;
      uVar3 = __aeabi_uldivmod((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
                               *(uint *)(DAT_0004563c + 0x45558) - uVar5,0);
      return uVar3;
    }
    return 0x15180;
  }
  return 0;
}

