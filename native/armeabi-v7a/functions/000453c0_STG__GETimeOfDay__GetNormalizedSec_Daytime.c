/* 000453c0 | STG::GETimeOfDay::GetNormalizedSec_Daytime */

/* STG::GETimeOfDay::GetNormalizedSec_Daytime() const */

undefined4 __thiscall STG::GETimeOfDay::GetNormalizedSec_Daytime(GETimeOfDay *this)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  
  iVar2 = DAT_0004549c;
  puVar7 = (uint *)(DAT_0004549c + 0x453d4);
  if (((*puVar7 & 1) == 0) && (iVar5 = thunk_FUN_0007004c(puVar7), iVar5 != 0)) {
    uVar4 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x453d8));
    *(undefined4 *)(iVar2 + 0x453e0) = uVar4;
    thunk_FUN_000700b0(puVar7);
  }
  iVar2 = DAT_000454a0;
  if ((*(uint *)(DAT_000454a0 + 0x453f8) & 1) == 0) {
    iVar8 = DAT_000454a0 + 0x453f8;
    iVar5 = thunk_FUN_0007004c(iVar8);
    if (iVar5 != 0) {
      uVar4 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x453fc));
      *(undefined4 *)(iVar2 + 0x45404) = uVar4;
      thunk_FUN_000700b0(iVar8);
    }
  }
  uVar3 = GetNormalizedSec(this);
  uVar6 = *(uint *)(DAT_000454a4 + 0x45410);
  if (uVar6 <= uVar3) {
    if (uVar3 <= *(uint *)(DAT_000454a4 + 0x45420)) {
      lVar1 = (ulonglong)(uVar3 - uVar6) * 0x15180;
      uVar4 = __aeabi_uldivmod((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
                               *(uint *)(DAT_000454a4 + 0x45420) - uVar6,0);
      return uVar4;
    }
    return 0x15180;
  }
  return 0;
}

