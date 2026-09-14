/* 00044da8 | STG::GEScene::Internal_UpdateIntersectables */

/* STG::GEScene::Internal_UpdateIntersectables() */

void __thiscall STG::GEScene::Internal_UpdateIntersectables(GEScene *this)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  
  iVar14 = *(int *)(this + 0x114);
  if (iVar14 != 0) {
    uVar6 = *(uint *)(this + 0x5a4);
    bVar15 = uVar6 <= *(uint *)(this + 0x124);
    if (*(uint *)(this + 0x124) == uVar6) {
      bVar15 = *(uint *)(this + 0x5a0) <= *(uint *)(this + 0x120);
    }
    if ((!bVar15) && (this[0x5a8] != (GEScene)0x0)) {
      *(uint *)(this + 0x120) = *(uint *)(this + 0x5a0);
      *(uint *)(this + 0x124) = uVar6;
      iVar9 = 0;
      do {
        while( true ) {
          iVar8 = *(int *)(*(int *)(this + 0x110) + iVar9 * 4);
          if ((*(char *)(*(int *)(this + 0xd4) + iVar8) == '\0') &&
             (*(int *)(*(int *)(this + 0x108) + iVar8 * 4) == 0)) break;
          iVar9 = iVar9 + 1;
          iVar7 = *(int *)(*(int *)(this + 0xb0) + iVar8 * 4);
          iVar10 = *(int *)(this + 0xc0) + iVar8 * 0x40;
          uVar12 = *(undefined4 *)(iVar7 + 0x6c);
          uVar13 = *(undefined4 *)(iVar7 + 0x70);
          uVar11 = *(undefined4 *)(iVar7 + 0x74);
          uVar4 = __mulsf3(uVar12,*(undefined4 *)(*(int *)(this + 0xc0) + iVar8 * 0x40));
          uVar5 = __mulsf3(uVar13,*(undefined4 *)(iVar10 + 0x10));
          uVar4 = __addsf3(uVar4,uVar5);
          uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar10 + 0x30));
          uVar5 = __mulsf3(uVar11,*(undefined4 *)(iVar10 + 0x20));
          __addsf3(uVar4,uVar5);
          uVar4 = __mulsf3(uVar12,*(undefined4 *)(iVar10 + 4));
          uVar5 = __mulsf3(uVar13,*(undefined4 *)(iVar10 + 0x14));
          uVar4 = __addsf3(uVar4,uVar5);
          uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar10 + 0x34));
          uVar5 = __mulsf3(uVar11,*(undefined4 *)(iVar10 + 0x24));
          __addsf3(uVar4,uVar5);
          uVar4 = __mulsf3(uVar12,*(undefined4 *)(iVar10 + 8));
          uVar5 = __mulsf3(uVar13,*(undefined4 *)(iVar10 + 0x18));
          uVar4 = __addsf3(uVar4,uVar5);
          uVar4 = __addsf3(uVar4,*(undefined4 *)(iVar10 + 0x38));
          uVar5 = __mulsf3(uVar11,*(undefined4 *)(iVar10 + 0x28));
          fVar16 = (float)__addsf3(uVar4,uVar5);
          uVar3 = MRay3::Intersect_Test_Sphere((MVector3 *)(this + 0x588),fVar16);
          iVar7 = *(int *)(this + 0x118);
          *(undefined1 *)(iVar7 + iVar8) = uVar3;
          if (iVar9 == iVar14) goto LAB_00044f80;
        }
        iVar7 = *(int *)(this + 0x118);
        iVar9 = iVar9 + 1;
        *(undefined1 *)(iVar7 + iVar8) = 0;
      } while (iVar9 != iVar14);
LAB_00044f80:
      iVar14 = *(int *)(this + 0x19c);
      if (iVar14 != 0) {
        iVar10 = *(int *)(this + 0x198);
        iVar8 = *(int *)(this + 0x1a0);
        iVar9 = 0;
        do {
          iVar1 = iVar9 * 4;
          iVar2 = iVar9 * 4;
          iVar9 = iVar9 + 1;
          *(undefined1 *)(iVar7 + *(int *)(iVar10 + iVar2)) =
               *(undefined1 *)(iVar7 + *(int *)(iVar8 + iVar1));
        } while (iVar9 != iVar14);
      }
    }
  }
  return;
}

