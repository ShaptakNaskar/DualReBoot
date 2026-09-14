/* 00042d3c | STG::GEScene::Internal_UpdateVertexAnims_Visible */

/* STG::GEScene::Internal_UpdateVertexAnims_Visible() */

void __thiscall STG::GEScene::Internal_UpdateVertexAnims_Visible(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  GEVertexBuffer *this_00;
  GEVertexBlender *this_01;
  int iVar5;
  ulong local_3c;
  float local_38;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar3 = *(int *)(this + 0x16c);
  if (iVar3 != 0) {
    iVar2 = 0;
    iVar1 = 0;
    do {
      while( true ) {
        iVar5 = *(int *)(*(int *)(this + 0x168) + iVar1 * 4);
        iVar4 = *(int *)(*(int *)(this + 0xb0) + iVar5 * 4);
        if (*(char *)(*(int *)(this + 0xcc) + iVar5) != '\0') break;
LAB_00042d68:
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0x24;
        if (iVar1 == iVar3) {
          return;
        }
      }
      this_01 = (GEVertexBlender *)(*(int *)(this + 0x170) + iVar2);
      iVar5 = GEAnimationTrack::Evaluate
                        (*(GEAnimationTrack **)(*(int *)(this + 0x170) + iVar2),3,this + 0x238,
                         *(undefined1 *)(*(int *)(this + 0x118) + iVar5),
                         *(int *)(this + 0x1a8) + iVar5 * 8,&local_3c,&local_38);
      if (iVar5 == 0) {
        this_01[0x10] = (GEVertexBlender)0x0;
        goto LAB_00042d68;
      }
      this_01[0x10] = (GEVertexBlender)0x1;
      GEVertexBlender::SetUpdateData(this_01,local_3c,local_3c + 1,local_38);
      this_00 = (GEVertexBuffer *)**(undefined4 **)(iVar4 + 0x7c);
      iVar4 = GEVertexBuffer::HasComponent(this_00,0,auStack_34,auStack_30,auStack_2c);
      if (iVar4 == 0) goto LAB_00042d68;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x24;
      GEVertexBlender::Update
                (this_01,(float *)(*(int *)(this_00 + 0x14) + *(int *)(this_00 + 0x6c)),
                 *(_func_void_float_ptr_float_ptr_float_ptr_float_ulong **)(this + 0x1b4));
      GEVertexBuffer::UpdateBufferObject(this_00);
    } while (iVar1 != iVar3);
  }
  return;
}

