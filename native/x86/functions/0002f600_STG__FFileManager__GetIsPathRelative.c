/* 0002f600 | STG::FFileManager::GetIsPathRelative */

/* STG::FFileManager::GetIsPathRelative(unsigned long) const */

bool __thiscall STG::FFileManager::GetIsPathRelative(FFileManager *this,ulong param_1)

{
  return (param_1 & 1) == 0 && (param_1 & 2) != 0;
}

