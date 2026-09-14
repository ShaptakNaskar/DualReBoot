/* 0004ca60 | STG::GETimeOfDay::GetNormalizedSec */

/* STG::GETimeOfDay::GetNormalizedSec() const */

uint __thiscall STG::GETimeOfDay::GetNormalizedSec(GETimeOfDay *this)

{
  return (uint)(*(int *)this * 0x15180 + *(int *)(this + 4)) >> 3;
}

