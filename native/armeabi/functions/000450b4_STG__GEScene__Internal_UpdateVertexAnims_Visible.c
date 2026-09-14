/* 000450b4 | STG::GEScene::Internal_UpdateVertexAnims_Visible */

/* STG::GEScene::Internal_UpdateVertexAnims_Visible() */

void __thiscall STG::GEScene::Internal_UpdateVertexAnims_Visible(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GEVertexBuffer *this_00;
  int iVar6;
  GEVertexBlender *this_01;
  float extraout_s0;
  ulong local_3c;
  undefined1 local_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar4 = *(int *)(this + 0x16c);
  if (iVar4 != 0) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      while( true ) {
        iVar1 = *(int *)(*(int *)(this + 0x168) + iVar2 * 4);
        iVar5 = *(int *)(*(int *)(this + 0xb0) + iVar1 * 4);
        if (*(char *)(*(int *)(this + 0xcc) + iVar1) != '\0') break;
LAB_000450e0:
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x24;
        if (iVar2 == iVar4) {
          return;
        }
      }
      iVar6 = *(int *)(this + 0x170);
      iVar1 = GEAnimationTrack::Evaluate
                        (*(GEAnimationTrack **)(iVar6 + iVar3),3,this + 0x238,
                         *(undefined1 *)(*(int *)(this + 0x118) + iVar1),
                         *(int *)(this + 0x1a8) + iVar1 * 8,&local_3c,local_38);
      this_01 = (GEVertexBlender *)(iVar6 + iVar3);
      if (iVar1 == 0) {
        this_01[0x10] = (GEVertexBlender)0x0;
        goto LAB_000450e0;
      }
      this_01[0x10] = (GEVertexBlender)0x1;
      GEVertexBlender::SetUpdateData(this_01,local_3c,local_3c + 1,extraout_s0);
      this_00 = (GEVertexBuffer *)**(undefined4 **)(iVar5 + 0x7c);
      iVar1 = GEVertexBuffer::HasComponent(this_00,0,auStack_34,auStack_30,auStack_2c);
      if (iVar1 == 0) goto LAB_000450e0;
      GEVertexBlender::Update
                (this_01,(float *)(*(int *)(this_00 + 0x14) + *(int *)(this_00 + 0x6c)),
                 *(_func_void_float_ptr_float_ptr_float_ptr_float_ulong **)(this + 0x1b4));
      iVar2 = iVar2 + 1;
      GEVertexBuffer::UpdateBufferObject(this_00);
      iVar3 = iVar3 + 0x24;
    } while (iVar2 != iVar4);
  }
  return;
}

