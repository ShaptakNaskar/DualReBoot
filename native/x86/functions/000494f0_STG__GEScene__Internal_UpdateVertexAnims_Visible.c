/* 000494f0 | STG::GEScene::Internal_UpdateVertexAnims_Visible */

/* STG::GEScene::Internal_UpdateVertexAnims_Visible() */

void __thiscall STG::GEScene::Internal_UpdateVertexAnims_Visible(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GEVertexBuffer *this_00;
  char cVar4;
  GEVertexBlender *this_01;
  int iVar5;
  int iVar6;
  ulong local_30;
  float local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x494f9;
  FUN_0002e044();
  iVar1 = *(int *)(this + 0x16c);
  if (iVar1 != 0) {
    iVar5 = 0;
    iVar6 = 0;
    do {
      while( true ) {
        iVar2 = *(int *)(*(int *)(this + 0x168) + iVar6 * 4);
        iVar3 = *(int *)(*(int *)(this + 0xb0) + iVar2 * 4);
        if (*(char *)(*(int *)(this + 0xcc) + iVar2) != '\0') break;
LAB_00049520:
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0x24;
        if (iVar6 == iVar1) {
          return;
        }
      }
      this_01 = (GEVertexBlender *)(*(int *)(this + 0x170) + iVar5);
      cVar4 = GEAnimationTrack::Evaluate
                        (*(GEAnimationTrack **)this_01,3,this + 0x22c,
                         *(undefined1 *)(*(int *)(this + 0x118) + iVar2),
                         iVar2 * 8 + *(int *)(this + 0x1a8),&local_30,&local_2c);
      if (cVar4 != '\0') {
        this_01[0x10] = (GEVertexBlender)0x1;
        GEVertexBlender::SetUpdateData(this_01,local_30,local_30 + 1,local_2c);
        this_00 = (GEVertexBuffer *)**(undefined4 **)(iVar3 + 0x7c);
        cVar4 = GEVertexBuffer::HasComponent(this_00,0,local_28,local_24,local_20);
        if (cVar4 != '\0') {
          GEVertexBlender::Update
                    (this_01,(float *)(*(int *)(this_00 + 0x14) + *(int *)(this_00 + 0x6c)),
                     *(_func_void_float_ptr_float_ptr_float_ptr_float_ulong **)(this + 0x1b4));
          GEVertexBuffer::UpdateBufferObject(this_00);
        }
        goto LAB_00049520;
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x24;
      this_01[0x10] = (GEVertexBlender)0x0;
    } while (iVar6 != iVar1);
  }
  return;
}

