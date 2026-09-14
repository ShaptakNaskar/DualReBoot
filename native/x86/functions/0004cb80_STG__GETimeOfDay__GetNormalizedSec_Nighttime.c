/* 0004cb80 | STG::GETimeOfDay::GetNormalizedSec_Nighttime */

/* STG::GETimeOfDay::GetNormalizedSec_Nighttime() const */

undefined4 __thiscall STG::GETimeOfDay::GetNormalizedSec_Nighttime(GETimeOfDay *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int unaff_EBX;
  
  FUN_0002e044();
  if (*(char *)(unaff_EBX + 0x4f7d9) == '\0') {
    iVar2 = FUN_00080eb0(unaff_EBX + 0x4f7d9);
    if (iVar2 != 0) {
      uVar3 = GetNormalizedSec((GETimeOfDay *)(unaff_EBX + 0x4f7a1));
      *(undefined4 *)(unaff_EBX + 0x4f7e1) = uVar3;
      FUN_00080f40(unaff_EBX + 0x4f7d9);
    }
  }
  if (*(char *)(unaff_EBX + 0x4f7e9) == '\0') {
    iVar2 = FUN_00080eb0(unaff_EBX + 0x4f7e9);
    if (iVar2 != 0) {
      uVar3 = GetNormalizedSec((GETimeOfDay *)(unaff_EBX + 0x4f7c1));
      *(undefined4 *)(unaff_EBX + 0x4f7f1) = uVar3;
      FUN_00080f40(unaff_EBX + 0x4f7e9);
    }
  }
  if (*(char *)(unaff_EBX + 0x4f7f9) == '\0') {
    iVar2 = FUN_00080eb0(unaff_EBX + 0x4f7f9);
    if (iVar2 != 0) {
      *(int *)(unaff_EBX + 0x4f809) = *(int *)(unaff_EBX + 0x4f7f1) + -0xa8c0;
      FUN_00080f40(unaff_EBX + 0x4f7f9);
    }
  }
  if (*(char *)(unaff_EBX + 0x4f819) == '\0') {
    iVar2 = FUN_00080eb0(unaff_EBX + 0x4f819);
    if (iVar2 != 0) {
      *(int *)(unaff_EBX + 0x4f829) = *(int *)(unaff_EBX + 0x4f7e1) + 0xa8c0;
      FUN_00080f40(unaff_EBX + 0x4f819);
    }
  }
  iVar2 = GetNormalizedSec(this);
  uVar1 = *(uint *)(unaff_EBX + 0x4f809);
  uVar4 = iVar2 + 0xa8c0U;
  if (0x1517f < iVar2 + 0xa8c0U) {
    uVar4 = iVar2 - 0xa8c0;
  }
  uVar3 = 0;
  if (uVar1 <= uVar4) {
    uVar3 = 0x15180;
    if (uVar4 <= *(uint *)(unaff_EBX + 0x4f829)) {
      uVar3 = __udivdi3((ulonglong)(uVar4 - uVar1) * 0x15180,*(uint *)(unaff_EBX + 0x4f829) - uVar1,
                        0);
      return uVar3;
    }
  }
  return uVar3;
}

