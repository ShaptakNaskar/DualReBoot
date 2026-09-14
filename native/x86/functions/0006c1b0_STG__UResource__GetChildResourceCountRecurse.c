/* 0006c1b0 | STG::UResource::GetChildResourceCountRecurse */

/* STG::UResource::GetChildResourceCountRecurse() const */

int __thiscall STG::UResource::GetChildResourceCountRecurse(UResource *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar1 = (**(code **)(*(int *)this + 0x1c))(this);
  if (iVar1 != 0) {
    iVar5 = 0;
    do {
      piVar2 = (int *)(**(code **)(*(int *)this + 0x20))(this,iVar5);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x28))(piVar2);
        iVar4 = iVar4 + 1 + iVar3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != iVar1);
  }
  return iVar4;
}

