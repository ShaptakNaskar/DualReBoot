/* 0004cd90 | STG::GETimeOfDay::operator< */

/* STG::GETimeOfDay::TEMPNAMEPLACEHOLDERVALUE(STG::GETimeOfDay const&) const */

undefined4 __thiscall STG::GETimeOfDay::operator<(GETimeOfDay *this,GETimeOfDay *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  if ((*(int *)param_1 <= *(int *)this) && (uVar1 = 0, *(int *)this <= *(int *)param_1)) {
    uVar1 = CONCAT31((int3)(*(uint *)(param_1 + 4) >> 8),
                     *(uint *)(this + 4) < *(uint *)(param_1 + 4));
  }
  return uVar1;
}

