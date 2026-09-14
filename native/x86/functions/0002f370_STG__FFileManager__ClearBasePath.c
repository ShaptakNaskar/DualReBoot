/* 0002f370 | STG::FFileManager::ClearBasePath */

/* STG::FFileManager::ClearBasePath() */

void __thiscall STG::FFileManager::ClearBasePath(FFileManager *this)

{
  if (*(undefined1 **)(this + 0x1c) != *(undefined1 **)(this + 0x18)) {
    **(undefined1 **)(this + 0x1c) = 0;
    *(undefined4 *)(this + 0x18) = *(undefined4 *)(this + 0x1c);
  }
  if (*(undefined1 **)(this + 0x38) != *(undefined1 **)(this + 0x34)) {
    **(undefined1 **)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x38);
  }
  return;
}

