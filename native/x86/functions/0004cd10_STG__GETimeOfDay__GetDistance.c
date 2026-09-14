/* 0004cd10 | STG::GETimeOfDay::GetDistance */

/* STG::GETimeOfDay::GetDistance(STG::GETimeOfDay const&, STG::GETimeOfDay const&) */

uint STG::GETimeOfDay::GetDistance(GETimeOfDay *param_1,GETimeOfDay *param_2)

{
  GETimeOfDay *this;
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  this = (GETimeOfDay *)FUN_0002e044();
  uVar1 = GetNormalizedSec(this);
  uVar2 = GetNormalizedSec(param_2);
  uVar4 = (uVar1 + 0x15180) - uVar2;
  if ((uVar2 <= uVar1) && (uVar4 = uVar1 - uVar2, uVar2 < uVar1)) {
    uVar2 = uVar2 + 0x15180;
  }
  uVar3 = uVar2 - uVar1;
  if (uVar4 <= uVar2 - uVar1) {
    uVar3 = uVar4;
  }
  return uVar3;
}

