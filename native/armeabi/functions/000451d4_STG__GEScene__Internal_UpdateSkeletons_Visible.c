/* 000451d4 | STG::GEScene::Internal_UpdateSkeletons_Visible */

/* STG::GEScene::Internal_UpdateSkeletons_Visible() */

void __thiscall STG::GEScene::Internal_UpdateSkeletons_Visible(GEScene *this)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  GEVertexBuffer *this_00;
  int iVar7;
  int iVar8;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar7 = *(int *)(this + 0x17c);
  if (iVar7 != 0) {
    iVar6 = 0;
    iVar3 = 0;
    do {
      while( true ) {
        iVar4 = *(int *)(*(int *)(this + 0x178) + iVar3 * 4);
        iVar3 = iVar3 + 1;
        if (*(char *)(*(int *)(this + 0xcc) + iVar4) == '\0') break;
        this_00 = (GEVertexBuffer *)
                  **(undefined4 **)(*(int *)(*(int *)(this + 0xb0) + iVar4 * 4) + 0x7c);
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar4);
        iVar5 = *(int *)(this + 0x180);
        iVar8 = *(int *)(this + 0x1a8);
        iVar2 = GEVertexBuffer::HasComponent(this_00,0,auStack_34,auStack_30,auStack_2c);
        if (iVar2 == 0) break;
        GESkeleton::Mesh::Update
                  ((Mesh *)(iVar5 + iVar6),*(int *)(this_00 + 0x14) + *(int *)(this_00 + 0x6c),
                   *(undefined4 *)(this + 0x1b8),3,this + 0x238,uVar1,iVar8 + iVar4 * 8);
        GEVertexBuffer::UpdateBufferObject(this_00);
        iVar6 = iVar6 + 0x2c;
        if (iVar3 == iVar7) {
          return;
        }
      }
      iVar6 = iVar6 + 0x2c;
    } while (iVar3 != iVar7);
  }
  return;
}

