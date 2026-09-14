/* 0002f964 | STG::FFileManager::GetIsPathRelative */

/* STG::FFileManager::GetIsPathRelative(unsigned long) const */

uint __thiscall STG::FFileManager::GetIsPathRelative(FFileManager *this,ulong param_1)

{
  uint uVar1;
  
  if ((param_1 & 1) == 0) {
    uVar1 = (param_1 & 3) >> 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

