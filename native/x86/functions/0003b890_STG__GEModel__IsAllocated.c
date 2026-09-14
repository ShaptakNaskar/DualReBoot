/* 0003b890 | STG::GEModel::IsAllocated */

/* STG::GEModel::IsAllocated() const */

undefined4 __thiscall STG::GEModel::IsAllocated(GEModel *this)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = 0;
  if (this[0xc6] != (GEModel)0x0) {
    if (*(int *)(this + 0x34) != 0) {
      if (*(char *)(**(int **)(this + 0x7c) + 0xa8) == '\0') {
        return 0;
      }
      iVar2 = 0;
      while (iVar2 = iVar2 + 1, iVar2 != *(int *)(this + 0x34)) {
        if (*(char *)((*(int **)(this + 0x7c))[iVar2] + 0xa8) == '\0') {
          return 0;
        }
      }
    }
    uVar1 = 1;
    if (*(int *)(this + 0x30) != 0) {
      uVar1 = 0;
      if (*(char *)(**(int **)(this + 0x80) + 0x14) != '\0') {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          if (iVar2 == *(int *)(this + 0x30)) {
            return 1;
          }
        } while (*(char *)((*(int **)(this + 0x80))[iVar2] + 0x14) != '\0');
        return 0;
      }
    }
  }
  return uVar1;
}

