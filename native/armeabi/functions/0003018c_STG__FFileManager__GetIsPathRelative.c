/* 0003018c | STG::FFileManager::GetIsPathRelative */

/* STG::FFileManager::GetIsPathRelative(unsigned long) const */

bool __thiscall STG::FFileManager::GetIsPathRelative(FFileManager *this,ulong param_1)

{
  if ((param_1 & 1) != 0) {
    return false;
  }
  return (param_1 & 2) != 0;
}

