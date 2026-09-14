/* 000349a8 | STG::FFileManager_Android::HasAssetManager */

/* STG::FFileManager_Android::HasAssetManager() const */

bool __thiscall STG::FFileManager_Android::HasAssetManager(FFileManager_Android *this)

{
  if (*(int *)(this + 0x3c) != 0) {
    return *(int *)(this + 0x40) != 0;
  }
  return false;
}

