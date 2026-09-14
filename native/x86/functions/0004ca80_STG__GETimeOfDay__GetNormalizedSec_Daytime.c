/* 0004ca80 | STG::GETimeOfDay::GetNormalizedSec_Daytime */

/* STG::GETimeOfDay::GetNormalizedSec_Daytime() const */

undefined4 __thiscall STG::GETimeOfDay::GetNormalizedSec_Daytime(GETimeOfDay *this)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBX;
  
  FUN_0002e044();
  if (*(char *)(unaff_EBX + 0x4f899) == '\0') {
    iVar3 = FUN_00080eb0(unaff_EBX + 0x4f899);
    if (iVar3 != 0) {
      uVar4 = GetNormalizedSec((GETimeOfDay *)(unaff_EBX + 0x4f8a1));
      *(undefined4 *)(unaff_EBX + 0x4f8a9) = uVar4;
      FUN_00080f40(unaff_EBX + 0x4f899);
    }
  }
  if (*(char *)(unaff_EBX + 0x4f8b9) == '\0') {
    iVar3 = FUN_00080eb0(unaff_EBX + 0x4f8b9);
    if (iVar3 != 0) {
      uVar4 = GetNormalizedSec((GETimeOfDay *)(unaff_EBX + 0x4f8c1));
      *(undefined4 *)(unaff_EBX + 0x4f8c9) = uVar4;
      FUN_00080f40(unaff_EBX + 0x4f8b9);
    }
  }
  uVar2 = GetNormalizedSec(this);
  uVar1 = *(uint *)(unaff_EBX + 0x4f8a9);
  uVar4 = 0;
  if (uVar1 <= uVar2) {
    uVar4 = 0x15180;
    if (uVar2 <= *(uint *)(unaff_EBX + 0x4f8c9)) {
      uVar4 = __udivdi3((ulonglong)(uVar2 - uVar1) * 0x15180,*(uint *)(unaff_EBX + 0x4f8c9) - uVar1,
                        0);
      return uVar4;
    }
  }
  return uVar4;
}

