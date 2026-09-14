/* 0002ff68 | STG::FFileManager::ClearBasePath */

/* STG::FFileManager::ClearBasePath() */

void __thiscall STG::FFileManager::ClearBasePath(FFileManager *this)

{
  undefined1 *puVar1;
  bool bVar2;
  
  puVar1 = *(undefined1 **)(this + 0x1c);
  bVar2 = puVar1 != *(undefined1 **)(this + 0x18);
  if (bVar2) {
    *puVar1 = 0;
    puVar1 = *(undefined1 **)(this + 0x1c);
  }
  if (bVar2) {
    *(undefined1 **)(this + 0x18) = puVar1;
  }
  if (*(undefined1 **)(this + 0x38) != *(undefined1 **)(this + 0x34)) {
    **(undefined1 **)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x34) = *(undefined4 *)(this + 0x38);
  }
  return;
}

