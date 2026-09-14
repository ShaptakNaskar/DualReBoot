/* 00049b20 | STG::GETextureList::CreateItem */

/* STG::GETextureList::CreateItem(STG::FFileHash const&, STG::GETextureList_CreateParams const*) */

void __thiscall
STG::GETextureList::CreateItem
          (GETextureList *this,FFileHash *param_1,GETextureList_CreateParams *param_2)

{
  GETexture *this_00;
  uint uVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 uVar3;
  undefined4 extraout_r3;
  undefined4 uVar4;
  undefined4 *puVar5;
  GETexture *pGVar6;
  int *piVar7;
  int iVar8;
  size_t __n;
  void *pvVar9;
  void *pvVar10;
  uint local_50;
  int local_4c;
  undefined1 *local_48 [4];
  undefined1 **local_38;
  undefined1 **local_34;
  undefined4 local_30;
  int local_2c;
  
  piVar7 = *(int **)(DAT_00049cd4 + 0x49b40);
  local_2c = *piVar7;
  this_00 = operator_new(0x98);
  GETexture::GETexture(this_00);
  pvVar9 = *(void **)(param_1 + 0x18);
  pvVar10 = *(void **)(param_1 + 0x14);
  uVar3 = extraout_r2;
  uVar4 = extraout_r3;
  if (param_2 != (GETextureList_CreateParams *)0x0) {
    uVar4 = *(undefined4 *)param_2;
    uVar3 = *(undefined4 *)(param_2 + 4);
  }
  __n = (int)pvVar10 - (int)pvVar9;
  iVar8 = *(int *)(DAT_00049cd8 + 0x49b7c);
  if (param_2 != (GETextureList_CreateParams *)0x0) {
    *(undefined4 *)(this_00 + 0x34) = uVar4;
    *(undefined4 *)(this_00 + 0x38) = uVar3;
  }
  local_4c = iVar8 + 8;
  uVar1 = __n + 1;
  local_38 = local_48;
  local_34 = local_48;
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(DAT_00049ce0 + 0x49c90));
  }
  if (0x10 < uVar1) {
    local_50 = uVar1;
    if (uVar1 < 0x81) {
      local_38 = (undefined1 **)std::__node_alloc::_M_allocate(&local_50);
    }
    else {
      local_38 = operator_new(uVar1);
    }
    local_48[0] = (undefined1 *)((int)local_38 + local_50);
  }
  local_34 = local_38;
  if (pvVar9 != pvVar10) {
    pvVar9 = memcpy(local_38,pvVar9,__n);
    local_38 = (undefined1 **)((int)pvVar9 + __n);
  }
  puVar5 = *(undefined4 **)(DAT_00049cdc + 0x49bf8);
  *(undefined1 *)local_38 = 0;
  local_30 = *(undefined4 *)(param_1 + 0x1c);
  if ((GETextureModifier *)*puVar5 != (GETextureModifier *)0x0) {
    GETextureModifier::ModifyTexture
              ((GETextureModifier *)*puVar5,param_1,(FFileHash *)&local_4c,this_00);
  }
  iVar2 = (**(code **)(*(int *)this_00 + 0xc))(this_00,(FFileHash *)&local_4c);
  pGVar6 = this_00;
  if (iVar2 == 0) {
    iVar2 = *(int *)(this_00 + 4);
    *(int *)(this_00 + 4) = iVar2 + -1;
    pGVar6 = (GETexture *)0x0;
    if (iVar2 == 1) {
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
  }
  local_4c = iVar8 + 8;
  if ((local_34 != local_48) && (local_34 != (undefined1 **)0x0)) {
    if ((uint)((int)local_48[0] - (int)local_34) < 0x81) {
      std::__node_alloc::_M_deallocate(local_34,(int)local_48[0] - (int)local_34);
    }
    else {
      operator_delete(local_34);
    }
  }
  if (local_2c == *piVar7) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pGVar6);
}

