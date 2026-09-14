/* 000520c0 | STG::GETextureList::CreateItem */

/* STG::GETextureList::CreateItem(STG::FFileHash const&, STG::GETextureList_CreateParams const*) */

GETexture * __thiscall
STG::GETextureList::CreateItem
          (GETextureList *this,FFileHash *param_1,GETextureList_CreateParams *param_2)

{
  undefined4 uVar1;
  void *__src;
  int iVar2;
  char cVar3;
  GETexture *this_00;
  void *pvVar4;
  size_t __n;
  uint uVar5;
  int unaff_EBX;
  GETexture *pGVar6;
  uint local_50 [4];
  int local_40;
  undefined1 *local_3c [4];
  undefined1 **local_2c;
  undefined1 **local_28;
  undefined4 local_24;
  int local_14;
  
  local_14 = 0x520cb;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x49d6d);
  this_00 = operator_new(0x98);
  GETexture::GETexture(this_00);
  if (param_2 != (GETextureList_CreateParams *)0x0) {
    uVar1 = *(undefined4 *)(param_2 + 4);
    *(undefined4 *)(this_00 + 0x34) = *(undefined4 *)param_2;
    *(undefined4 *)(this_00 + 0x38) = uVar1;
  }
  local_40 = *(int *)(unaff_EBX + 0x49d71) + 8;
  pvVar4 = *(void **)(param_1 + 0x14);
  __src = *(void **)(param_1 + 0x18);
  __n = (int)pvVar4 - (int)__src;
  uVar5 = __n + 1;
  local_2c = local_3c;
  local_28 = local_3c;
  if (uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    std::__stl_throw_length_error((char *)(unaff_EBX + 0x35241));
  }
  if (0x10 < uVar5) {
    local_50[0] = uVar5;
    if (uVar5 < 0x81) {
      local_28 = (undefined1 **)std::__node_alloc::_M_allocate(local_50);
    }
    else {
      local_28 = operator_new(uVar5);
    }
    local_3c[0] = (undefined1 *)(local_50[0] + (int)local_28);
  }
  local_2c = local_28;
  if (pvVar4 != __src) {
    pvVar4 = memcpy(local_28,__src,__n);
    local_2c = (undefined1 **)((int)pvVar4 + __n);
  }
  *(undefined1 *)local_2c = 0;
  local_24 = *(undefined4 *)(param_1 + 0x1c);
  if ((GETextureModifier *)**(undefined4 **)(unaff_EBX + 0x49dfd) != (GETextureModifier *)0x0) {
    GETextureModifier::ModifyTexture
              ((GETextureModifier *)**(undefined4 **)(unaff_EBX + 0x49dfd),param_1,
               (FFileHash *)&local_40,this_00);
  }
  cVar3 = (**(code **)(*(int *)this_00 + 0xc))(this_00,(FFileHash *)&local_40);
  pGVar6 = this_00;
  if (cVar3 == '\0') {
    iVar2 = *(int *)(this_00 + 4);
    *(int *)(this_00 + 4) = iVar2 + -1;
    if (iVar2 == 1) {
      pGVar6 = (GETexture *)0x0;
      (**(code **)(*(int *)this_00 + 4))(this_00);
    }
    else {
      pGVar6 = (GETexture *)0x0;
    }
  }
  local_40 = *(int *)(unaff_EBX + 0x49d71) + 8;
  if ((local_28 != local_3c) && (local_28 != (undefined1 **)0x0)) {
    if ((uint)((int)local_3c[0] - (int)local_28) < 0x81) {
      std::__node_alloc::_M_deallocate(local_28,(int)local_3c[0] - (int)local_28);
    }
    else {
      operator_delete(local_28);
    }
  }
  if (local_14 == **(int **)(unaff_EBX + 0x49d6d)) {
    return pGVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

