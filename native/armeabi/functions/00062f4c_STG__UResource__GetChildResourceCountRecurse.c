/* 00062f4c | STG::UResource::GetChildResourceCountRecurse */

/* STG::UResource::GetChildResourceCountRecurse() const */

int STG::UResource::GetChildResourceCountRecurse(void)

{
  int *in_r0;
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = (**(code **)(*in_r0 + 0x1c))();
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar4 = 0;
    iVar5 = 0;
    do {
      piVar2 = (int *)(**(code **)(*in_r0 + 0x20))();
      iVar4 = iVar4 + 1;
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 0x28))();
        iVar5 = iVar5 + 1 + iVar3;
      }
    } while (iVar4 != iVar1);
  }
  return iVar5;
}

