/* 00035ba0 | STG::FFileManager_Android::HasAssetManager */

/* STG::FFileManager_Android::HasAssetManager() const */

bool __thiscall STG::FFileManager_Android::HasAssetManager(FFileManager_Android *this)

{
  bool bVar1;
  
  bVar1 = false;
  if (*(int *)(this + 0x3c) != 0) {
    bVar1 = *(int *)(this + 0x40) != 0;
  }
  return bVar1;
}

