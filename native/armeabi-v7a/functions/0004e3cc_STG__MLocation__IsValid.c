/* 0004e3cc | STG::MLocation::IsValid */

/* STG::MLocation::IsValid() const */

bool __thiscall STG::MLocation::IsValid(MLocation *this)

{
  if ((*(int *)(DAT_0004e424 + 0x4e3e0) <= *(int *)this) &&
     (*(int *)this <= *(int *)(DAT_0004e424 + 0x4e3e4))) {
    if (*(int *)(DAT_0004e424 + 0x4e3e8) <= *(int *)(this + 4)) {
      return *(int *)(this + 4) <= *(int *)(DAT_0004e424 + 0x4e3ec);
    }
    return false;
  }
  return false;
}

