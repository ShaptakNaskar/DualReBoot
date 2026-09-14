/* 000491c0 | STG::GEScene::Internal_UpdateIntersectables */

/* STG::GEScene::Internal_UpdateIntersectables() */

void __thiscall STG::GEScene::Internal_UpdateIntersectables(GEScene *this)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  float *pfVar11;
  int iVar12;
  int iVar13;
  float local_28;
  float local_24;
  float local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x491c9;
  FUN_0002e044();
  iVar6 = *(int *)(this + 0x114);
  if (iVar6 != 0) {
    uVar7 = *(uint *)(this + 0x594);
    if ((*(uint *)(this + 0x124) <= uVar7) &&
       (((*(uint *)(this + 0x124) < uVar7 || (*(uint *)(this + 0x120) < *(uint *)(this + 0x590))) &&
        (this[0x598] != (GEScene)0x0)))) {
      *(uint *)(this + 0x120) = *(uint *)(this + 0x590);
      *(uint *)(this + 0x124) = uVar7;
      iVar13 = 0;
      do {
        while( true ) {
          iVar8 = *(int *)(*(int *)(this + 0x110) + iVar13 * 4);
          if ((*(char *)(*(int *)(this + 0xd4) + iVar8) == '\0') &&
             (*(int *)(*(int *)(this + 0x108) + iVar8 * 4) == 0)) break;
          iVar13 = iVar13 + 1;
          iVar12 = *(int *)(*(int *)(this + 0xb0) + iVar8 * 4);
          pfVar11 = (float *)(iVar8 * 0x40 + *(int *)(this + 0xc0));
          fVar3 = *(float *)(iVar12 + 0x6c);
          fVar4 = *(float *)(iVar12 + 0x70);
          fVar5 = *(float *)(iVar12 + 0x74);
          local_28 = *pfVar11 * fVar3 + pfVar11[4] * fVar4 + pfVar11[0xc] + pfVar11[8] * fVar5;
          local_24 = pfVar11[1] * fVar3 + pfVar11[5] * fVar4 + pfVar11[0xd] + pfVar11[9] * fVar5;
          local_20 = fVar3 * pfVar11[2] + fVar4 * pfVar11[6] + pfVar11[0xe] + fVar5 * pfVar11[10];
          uVar10 = MRay3::Intersect_Test_Sphere
                             ((MRay3 *)(this + 0x578),(MVector3 *)&local_28,
                              *(float *)(iVar12 + 0x78));
          iVar12 = *(int *)(this + 0x118);
          *(undefined1 *)(iVar12 + iVar8) = uVar10;
          if (iVar13 == iVar6) goto LAB_0004933b;
        }
        iVar12 = *(int *)(this + 0x118);
        iVar13 = iVar13 + 1;
        *(undefined1 *)(iVar12 + iVar8) = 0;
      } while (iVar13 != iVar6);
LAB_0004933b:
      iVar6 = *(int *)(this + 0x19c);
      if (iVar6 != 0) {
        iVar8 = *(int *)(this + 0x198);
        iVar9 = *(int *)(this + 0x1a0);
        iVar13 = 0;
        do {
          iVar2 = iVar13 * 4;
          iVar1 = iVar13 * 4;
          iVar13 = iVar13 + 1;
          *(undefined1 *)(iVar12 + *(int *)(iVar8 + iVar1)) =
               *(undefined1 *)(iVar12 + *(int *)(iVar9 + iVar2));
        } while (iVar13 != iVar6);
        return;
      }
    }
  }
  return;
}

