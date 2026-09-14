/* 000579a0 | STG::MLocation::IsValid */

/* STG::MLocation::IsValid() const */

bool __thiscall STG::MLocation::IsValid(MLocation *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  if (((*(int *)(unaff_EBX + 0x45c5a) <= *(int *)this) &&
      (*(int *)this <= *(int *)(unaff_EBX + 0x45c6a))) &&
     (*(int *)(unaff_EBX + 0x45c7a) <= *(int *)(this + 4))) {
    return *(int *)(this + 4) <= *(int *)(unaff_EBX + 0x45c8a);
  }
  return false;
}

