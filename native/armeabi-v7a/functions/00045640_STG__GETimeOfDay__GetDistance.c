/* 00045640 | STG::GETimeOfDay::GetDistance */

/* STG::GETimeOfDay::GetDistance(STG::GETimeOfDay const&, STG::GETimeOfDay const&) */

uint STG::GETimeOfDay::GetDistance(GETimeOfDay *param_1,GETimeOfDay *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = GetNormalizedSec(param_1);
  uVar2 = GetNormalizedSec(param_2);
  if (uVar2 <= uVar1) {
    uVar3 = uVar1 - uVar2;
    if (uVar2 < uVar1) {
      uVar2 = uVar2 + 0x15180;
    }
    if (uVar2 - uVar1 <= uVar3) {
      uVar3 = uVar2 - uVar1;
    }
    return uVar3;
  }
  uVar3 = (uVar1 + 0x15180) - uVar2;
  if (uVar2 - uVar1 <= uVar3) {
    uVar3 = uVar2 - uVar1;
  }
  return uVar3;
}

