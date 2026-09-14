/* 00042e5c | STG::GEScene::Internal_UpdateSkeletons_Visible */

/* STG::GEScene::Internal_UpdateSkeletons_Visible() */

void __thiscall STG::GEScene::Internal_UpdateSkeletons_Visible(GEScene *this)

{
  undefined1 uVar1;
  int iVar2;
  Mesh *pMVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  GEVertexBuffer *this_00;
  int iVar9;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  iVar7 = *(int *)(this + 0x17c);
  if (iVar7 != 0) {
    iVar6 = 0;
    iVar4 = 0;
    do {
      while( true ) {
        iVar5 = *(int *)(*(int *)(this + 0x178) + iVar4 * 4);
        iVar4 = iVar4 + 1;
        if (*(char *)(*(int *)(this + 0xcc) + iVar5) == '\0') break;
        iVar8 = *(int *)(this + 0x180);
        this_00 = (GEVertexBuffer *)
                  **(undefined4 **)(*(int *)(*(int *)(this + 0xb0) + iVar5 * 4) + 0x7c);
        iVar9 = *(int *)(this + 0x1a8);
        uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar5);
        iVar2 = GEVertexBuffer::HasComponent(this_00,0,auStack_34,auStack_30,auStack_2c);
        if (iVar2 == 0) break;
        pMVar3 = (Mesh *)(iVar8 + iVar6);
        iVar6 = iVar6 + 0x2c;
        GESkeleton::Mesh::Update
                  (pMVar3,*(int *)(this_00 + 0x14) + *(int *)(this_00 + 0x6c),
                   *(undefined4 *)(this + 0x1b8),3,this + 0x238,uVar1,iVar9 + iVar5 * 8);
        GEVertexBuffer::UpdateBufferObject(this_00);
        if (iVar4 == iVar7) {
          return;
        }
      }
      iVar6 = iVar6 + 0x2c;
    } while (iVar4 != iVar7);
  }
  return;
}

