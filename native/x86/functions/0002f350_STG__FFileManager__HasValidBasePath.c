/* 0002f350 | STG::FFileManager::HasValidBasePath */

/* STG::FFileManager::HasValidBasePath() const */

undefined4 __thiscall STG::FFileManager::HasValidBasePath(FFileManager *this)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(this + 0x1c) != *(int *)(this + 0x18)) {
    uVar1 = CONCAT31((int3)((uint)*(int *)(this + 0x34) >> 8),
                     *(int *)(this + 0x38) != *(int *)(this + 0x34));
  }
  return uVar1;
}

