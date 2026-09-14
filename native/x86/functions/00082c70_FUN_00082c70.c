/* 00082c70 | FUN_00082c70 */

void FUN_00082c70(uint *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int unaff_EBX;
  bool bVar6;
  
  FUN_0002e044();
  uVar3 = *param_1 + 7 & 0xfffffff8;
  *param_1 = uVar3;
  plVar1 = (longlong *)
           ("_ZN3STG13GERendererAPI16GL_SetDepthStateENS0_11EDepthStateE" + uVar3 + unaff_EBX + 0x2b
           );
  puVar4 = *(undefined4 **)plVar1;
  iVar5 = *(int *)((int)plVar1 + 4);
  do {
    if (puVar4 == (undefined4 *)0x0) break;
    LOCK();
    lVar2 = *plVar1;
    bVar6 = CONCAT44(iVar5,puVar4) == lVar2;
    if (bVar6) {
      *plVar1 = CONCAT44(iVar5 + 1,*puVar4);
    }
    else {
      iVar5 = (int)((ulonglong)lVar2 >> 0x20);
      puVar4 = (undefined4 *)lVar2;
    }
    UNLOCK();
  } while (!bVar6);
  if (puVar4 != (undefined4 *)0x0) {
    return;
  }
  FUN_00082be0();
  return;
}

