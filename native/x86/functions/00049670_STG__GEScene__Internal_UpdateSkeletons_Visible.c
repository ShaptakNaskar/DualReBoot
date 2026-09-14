/* 00049670 | STG::GEScene::Internal_UpdateSkeletons_Visible */

/* STG::GEScene::Internal_UpdateSkeletons_Visible() */

void __thiscall STG::GEScene::Internal_UpdateSkeletons_Visible(GEScene *this)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  GEVertexBuffer *this_00;
  char cVar6;
  int iVar7;
  int iVar8;
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [12];
  undefined4 uStack_14;
  
  uStack_14 = 0x49679;
  FUN_0002e044();
  iVar2 = *(int *)(this + 0x17c);
  if (iVar2 != 0) {
    iVar8 = 0;
    do {
      while( true ) {
        iVar3 = *(int *)(*(int *)(this + 0x178) + iVar8 * 4);
        if (*(char *)(*(int *)(this + 0xcc) + iVar3) != '\0') break;
LAB_000496a0:
        iVar8 = iVar8 + 1;
        if (iVar8 == iVar2) {
          return;
        }
      }
      iVar4 = *(int *)(this + 0x180);
      uVar1 = *(undefined1 *)(*(int *)(this + 0x118) + iVar3);
      iVar5 = *(int *)(this + 0x1a8);
      this_00 = (GEVertexBuffer *)
                **(undefined4 **)(*(int *)(*(int *)(this + 0xb0) + iVar3 * 4) + 0x7c);
      cVar6 = GEVertexBuffer::HasComponent(this_00,0,local_28,local_24,local_20);
      if (cVar6 == '\0') goto LAB_000496a0;
      iVar7 = iVar8 * 0x2c;
      iVar8 = iVar8 + 1;
      GESkeleton::Mesh::Update
                ((Mesh *)(iVar7 + iVar4),*(int *)(this_00 + 0x14) + *(int *)(this_00 + 0x6c),
                 *(undefined4 *)(this + 0x1b8),3,this + 0x22c,uVar1,iVar5 + iVar3 * 8);
      GEVertexBuffer::UpdateBufferObject(this_00);
    } while (iVar8 != iVar2);
  }
  return;
}

