/* 0002ff3c | STG::FFileManager::HasValidBasePath */

/* STG::FFileManager::HasValidBasePath() const */

bool __thiscall STG::FFileManager::HasValidBasePath(FFileManager *this)

{
  if (*(int *)(this + 0x1c) != *(int *)(this + 0x18)) {
    return *(int *)(this + 0x38) != *(int *)(this + 0x34);
  }
  return false;
}

