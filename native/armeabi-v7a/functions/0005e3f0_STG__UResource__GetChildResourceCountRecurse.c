/* 0005e3f0 | STG::UResource::GetChildResourceCountRecurse */

/* STG::UResource::GetChildResourceCountRecurse() const */

int __thiscall STG::UResource::GetChildResourceCountRecurse(UResource *this)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*(int *)this + 0x1c))();
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar3 = 0;
    do {
      iVar4 = iVar3 + 1;
      piVar2 = (int *)(**(code **)(*(int *)this + 0x20))(this,iVar3);
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x28))();
        iVar5 = iVar5 + 1 + iVar3;
      }
      iVar3 = iVar4;
    } while (iVar4 != iVar1);
  }
  return iVar5;
}

