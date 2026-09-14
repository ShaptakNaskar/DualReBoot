/* 000477fc | STG::GETimeOfDay::GetNormalizedSec_Daytime */

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
  
  iVar2 = DAT_000478e4;
  puVar7 = (uint *)(DAT_000478e4 + 0x47810);
  if (((*puVar7 & 1) == 0) && (iVar5 = thunk_FUN_00074338(puVar7), iVar5 != 0)) {
    uVar4 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x47814));
    *(undefined4 *)(iVar2 + 0x4781c) = uVar4;
    thunk_FUN_000743a0(puVar7);
  }
  iVar2 = DAT_000478e8;
  if ((*(uint *)(DAT_000478e8 + 0x47834) & 1) == 0) {
    iVar8 = DAT_000478e8 + 0x47834;
    iVar5 = thunk_FUN_00074338(iVar8);
    if (iVar5 != 0) {
      uVar4 = GetNormalizedSec((GETimeOfDay *)(iVar2 + 0x47838));
      *(undefined4 *)(iVar2 + 0x47840) = uVar4;
      thunk_FUN_000743a0(iVar8);
    }
  }
  uVar3 = GetNormalizedSec(this);
  uVar6 = *(uint *)(DAT_000478ec + 0x4784c);
  if (uVar6 <= uVar3) {
    if (*(uint *)(DAT_000478ec + 0x4785c) < uVar3) {
      return 0x15180;
    }
    lVar1 = (ulonglong)(uVar3 - uVar6) * 0x15180;
    uVar4 = __aeabi_uldivmod((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),
                             *(uint *)(DAT_000478ec + 0x4785c) - uVar6,0);
    return uVar4;
  }
  return 0;
}

