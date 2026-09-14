/* 0003aa38 | STG::GEModel::IsAllocated */

/* STG::GEModel::IsAllocated() const */

undefined1 __thiscall STG::GEModel::IsAllocated(GEModel *this)

{
  int *piVar1;
  int iVar2;
  
  if (this[0xc6] != (GEModel)0x0) {
    if (*(int *)(this + 0x34) == 0) {
LAB_0003aa88:
      if (*(int *)(this + 0x30) != 0) {
        piVar1 = *(int **)(this + 0x80);
        if (*(char *)(*piVar1 + 0x14) == '\0') {
          return 0;
        }
        iVar2 = 0;
        while (iVar2 = iVar2 + 1, iVar2 != *(int *)(this + 0x30)) {
          piVar1 = piVar1 + 1;
          if (*(char *)(*piVar1 + 0x14) == '\0') {
            return 0;
          }
        }
      }
      return 1;
    }
    piVar1 = *(int **)(this + 0x7c);
    if (*(char *)(*piVar1 + 0xa8) != '\0') {
      iVar2 = 0;
      do {
        iVar2 = iVar2 + 1;
        if (iVar2 == *(int *)(this + 0x34)) goto LAB_0003aa88;
        piVar1 = piVar1 + 1;
      } while (*(char *)(*piVar1 + 0xa8) != '\0');
    }
  }
  return 0;
}

