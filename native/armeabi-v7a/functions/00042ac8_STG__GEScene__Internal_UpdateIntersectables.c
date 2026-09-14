/* 00042ac8 | STG::GEScene::Internal_UpdateIntersectables */

/* STG::GEScene::Internal_UpdateIntersectables() */

void __thiscall STG::GEScene::Internal_UpdateIntersectables(GEScene *this)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  float *pfVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  bool bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar6 = *(int *)(this + 0x114);
  if (iVar6 != 0) {
    uVar10 = *(uint *)(this + 0x5a4);
    bVar11 = uVar10 <= *(uint *)(this + 0x124);
    if (*(uint *)(this + 0x124) == uVar10) {
      bVar11 = *(uint *)(this + 0x5a0) <= *(uint *)(this + 0x120);
    }
    if ((!bVar11) && (this[0x5a8] != (GEScene)0x0)) {
      iVar8 = 0;
      *(uint *)(this + 0x120) = *(uint *)(this + 0x5a0);
      *(uint *)(this + 0x124) = uVar10;
      do {
        while( true ) {
          iVar9 = *(int *)(*(int *)(this + 0x110) + iVar8 * 4);
          if ((*(char *)(*(int *)(this + 0xd4) + iVar9) == '\0') &&
             (*(int *)(*(int *)(this + 0x108) + iVar9 * 4) == 0)) break;
          iVar8 = iVar8 + 1;
          pfVar4 = (float *)(*(int *)(this + 0xc0) + iVar9 * 0x40);
          iVar5 = *(int *)(*(int *)(this + 0xb0) + iVar9 * 4);
          fVar12 = *(float *)(iVar5 + 0x70);
          fVar13 = *(float *)(iVar5 + 0x6c);
          fVar14 = *(float *)(iVar5 + 0x74);
          local_2c = fVar12 * pfVar4[4] + fVar13 * *pfVar4 + pfVar4[0xc] + fVar14 * pfVar4[8];
          local_28 = fVar12 * pfVar4[5] + fVar13 * pfVar4[1] + pfVar4[0xd] + fVar14 * pfVar4[9];
          local_24 = fVar12 * pfVar4[6] + fVar13 * pfVar4[2] + pfVar4[0xe] + fVar14 * pfVar4[10];
          uVar3 = MRay3::Intersect_Test_Sphere
                            ((MRay3 *)(this + 0x588),(MVector3 *)&local_2c,*(float *)(iVar5 + 0x78))
          ;
          iVar5 = *(int *)(this + 0x118);
          *(undefined1 *)(iVar5 + iVar9) = uVar3;
          if (iVar8 == iVar6) goto LAB_00042c08;
        }
        iVar5 = *(int *)(this + 0x118);
        iVar8 = iVar8 + 1;
        *(undefined1 *)(iVar5 + iVar9) = 0;
      } while (iVar8 != iVar6);
LAB_00042c08:
      iVar6 = *(int *)(this + 0x19c);
      if (iVar6 != 0) {
        iVar7 = *(int *)(this + 0x198);
        iVar8 = 0;
        iVar9 = *(int *)(this + 0x1a0);
        do {
          iVar1 = iVar8 * 4;
          iVar2 = iVar8 * 4;
          iVar8 = iVar8 + 1;
          *(undefined1 *)(iVar5 + *(int *)(iVar7 + iVar2)) =
               *(undefined1 *)(iVar5 + *(int *)(iVar9 + iVar1));
        } while (iVar8 != iVar6);
      }
    }
  }
  return;
}

