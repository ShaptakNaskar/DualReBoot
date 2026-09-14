/* 000478f0 | STG::GETimeOfDay::GetNormalizedSec_Nighttime */

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
  
  iVar2 = DAT_00047a78;
  if ((*(uint *)(DAT_00047a78 + 0x47924) & 1) == 0) {
    iVar7 = DAT_00047a78 + 0x47924;
    iVar4 = thunk_FUN_00074338(iVar7);
    if (iVar4 != 0) {
      uVar3 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x47908));
      *(undefined4 *)(iVar2 + 0x47928) = uVar3;
      thunk_FUN_000743a0(iVar7);
    }
  }
  iVar2 = DAT_00047a7c;
  if ((*(uint *)(DAT_00047a7c + 0x47940) & 1) == 0) {
    iVar7 = DAT_00047a7c + 0x47940;
    iVar4 = thunk_FUN_00074338(iVar7);
    if (iVar4 != 0) {
      uVar3 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x4792c));
      *(undefined4 *)(iVar2 + 0x47944) = uVar3;
      thunk_FUN_000743a0(iVar7);
    }
  }
  iVar2 = DAT_00047a80;
  if ((*(uint *)(DAT_00047a80 + 0x4795c) & 1) == 0) {
    iVar7 = DAT_00047a80 + 0x4795c;
    iVar4 = thunk_FUN_00074338(iVar7);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x47960) = *(int *)(iVar2 + 0x47958) + -0xa8c0;
      thunk_FUN_000743a0(iVar7);
    }
  }
  iVar2 = DAT_00047a84;
  if ((*(uint *)(DAT_00047a84 + 0x47978) & 1) == 0) {
    iVar7 = DAT_00047a84 + 0x47978;
    iVar4 = thunk_FUN_00074338(iVar7);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0x4797c) = *(int *)(iVar2 + 0x47964) + 0xa8c0;
      thunk_FUN_000743a0(iVar7);
    }
  }
  iVar2 = GetNormalizedSec(this);
  uVar5 = iVar2 + 0xa8c0;
  uVar6 = *(uint *)(DAT_00047a88 + 0x4799c);
  if (DAT_00047a8c < uVar5) {
    uVar5 = iVar2 - 0xa8c0;
  }
  if (uVar5 < uVar6) {
    return 0;
  }
  if (uVar5 <= *(uint *)(DAT_00047a88 + 0x479a4)) {
    lVar1 = (ulonglong)(uVar5 - uVar6) * 0x15180;
    uVar3 = __aeabi_uldivmod((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
                             *(uint *)(DAT_00047a88 + 0x479a4) - uVar6,0);
    return uVar3;
  }
  return 0x15180;
}

