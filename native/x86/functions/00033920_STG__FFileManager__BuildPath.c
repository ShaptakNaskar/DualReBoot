/* 00033920 | STG::FFileManager::BuildPath */

/* STG::FFileManager::BuildPath(STG::UStringBase<char, int> const&, STG::UStringBase<char, int>&)
   const */

undefined4 __thiscall
STG::FFileManager::BuildPath(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_0002e044();
  if (*(undefined1 **)(param_2 + 0x18) != *(undefined1 **)(param_2 + 0x14)) {
    **(undefined1 **)(param_2 + 0x18) = 0;
    *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  }
  cVar1 = HasValidBasePath(this);
  if (cVar1 == '\0') {
    return 0;
  }
  uVar2 = FUN_000330e0();
  return uVar2;
}

