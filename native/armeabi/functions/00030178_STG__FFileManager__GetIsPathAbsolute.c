/* 00030178 | STG::FFileManager::GetIsPathAbsolute */

/* STG::FFileManager::GetIsPathAbsolute(unsigned long) const */

bool __thiscall STG::FFileManager::GetIsPathAbsolute(FFileManager *this,ulong param_1)

{
  return (param_1 & 3) == 3;
}

