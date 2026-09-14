/* 00032050 | STG::FFileManager::GetIsPathAbsolute */

/* STG::FFileManager::GetIsPathAbsolute(STG::UStringBase<char, int> const&) const */

void __thiscall STG::FFileManager::GetIsPathAbsolute(FFileManager *this,UStringBase *param_1)

{
  ulong uVar1;
  
  FUN_0002e044();
  uVar1 = GetPathFlags(this,param_1);
  GetIsPathAbsolute(this,uVar1);
  return;
}

