/* 00082be0 | FUN_00082be0 */

undefined4 * FUN_00082be0(int param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_EBX;
  undefined4 *puVar6;
  bool bVar7;
  int local_20 [3];
  undefined4 uStack_14;
  
  uStack_14 = 0x82be9;
  FUN_0002e044();
  local_20[0] = 0x14;
  puVar3 = (undefined4 *)FUN_00082910(param_1,local_20);
  if (1 < local_20[0]) {
    local_20[0] = local_20[0] + -1;
    plVar1 = (longlong *)
             ("_ZN3STG13GERendererAPI19GL_SetMaterialColorERKNS_7GEColorE" +
             (param_1 - 1U & 0xfffffff8) + unaff_EBX + 0x20);
    puVar6 = puVar3;
    do {
      puVar6 = (undefined4 *)((int)puVar6 + param_1);
      uVar4 = (undefined4)*plVar1;
      iVar5 = *(int *)((int)plVar1 + 4);
      do {
        *puVar6 = uVar4;
        LOCK();
        lVar2 = *plVar1;
        bVar7 = CONCAT44(iVar5,uVar4) == lVar2;
        if (bVar7) {
          *plVar1 = CONCAT44(iVar5 + 1,puVar6);
        }
        else {
          iVar5 = (int)((ulonglong)lVar2 >> 0x20);
          uVar4 = (undefined4)lVar2;
        }
        UNLOCK();
      } while (!bVar7);
      local_20[0] = local_20[0] + -1;
    } while (local_20[0] != 0);
  }
  return puVar3;
}

