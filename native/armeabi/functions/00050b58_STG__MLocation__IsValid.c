/* 00050b58 | STG::MLocation::IsValid */

/* STG::MLocation::IsValid() const */

bool __thiscall STG::MLocation::IsValid(MLocation *this)

{
  if ((*(int *)(DAT_00050bb0 + 0x50b6c) <= *(int *)this) &&
     (*(int *)this <= *(int *)(DAT_00050bb0 + 0x50b70))) {
    if (*(int *)(DAT_00050bb0 + 0x50b74) <= *(int *)(this + 4)) {
      return *(int *)(this + 4) <= *(int *)(DAT_00050bb0 + 0x50b78);
    }
    return false;
  }
  return false;
}

