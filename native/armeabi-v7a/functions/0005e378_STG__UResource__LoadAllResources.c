/* 0005e378 | STG::UResource::LoadAllResources */

/* STG::UResource::LoadAllResources() */

int STG::UResource::LoadAllResources(void)

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
      iVar4 = iVar4 + 1;
      piVar2 = (int *)(**(code **)(*in_r0 + 0x20))();
      if (piVar2 != (int *)0x0) {
        iVar3 = (**(code **)(*piVar2 + 8))();
        iVar5 = iVar5 + iVar3;
      }
    } while (iVar4 != iVar1);
  }
  iVar1 = (**(code **)(*in_r0 + 0x34))();
  return iVar5 + iVar1;
}

