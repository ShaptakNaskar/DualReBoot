/* 000456cc | STG::GETimeOfDay::operator< */

/* STG::GETimeOfDay::TEMPNAMEPLACEHOLDERVALUE(STG::GETimeOfDay const&) const */

bool __thiscall STG::GETimeOfDay::operator<(GETimeOfDay *this,GETimeOfDay *param_1)

{
  if (*(int *)this < *(int *)param_1) {
    return true;
  }
  if (*(int *)param_1 < *(int *)this) {
    return false;
  }
  return *(uint *)(this + 4) < *(uint *)(param_1 + 4);
}

