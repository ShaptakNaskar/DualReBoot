/* 00032000 | STG::FFileManager::GetIsPathRelative */

/* STG::FFileManager::GetIsPathRelative(STG::UStringBase<char, int> const&) const */

void __thiscall STG::FFileManager::GetIsPathRelative(FFileManager *this,UStringBase *param_1)

{
  ulong uVar1;
  
  FUN_0002e044();
  uVar1 = GetPathFlags(this,param_1);
  GetIsPathRelative(this,uVar1);
  return;
}

