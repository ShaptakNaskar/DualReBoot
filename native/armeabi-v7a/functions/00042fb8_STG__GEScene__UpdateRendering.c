/* 00042fb8 | STG::GEScene::UpdateRendering */

/* STG::GEScene::UpdateRendering(STG::UTimeValue<unsigned long long, 1ul> const&, STG::MVector2
   const&, STG::GEViewport const&) */

void __thiscall
STG::GEScene::UpdateRendering
          (GEScene *this,UTimeValue *param_1,MVector2 *param_2,GEViewport *param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  GECamera *this_00;
  int iVar7;
  int *piVar8;
  int iVar9;
  MMatrix aMStack_68 [68];
  
  this_00 = (GECamera *)(this + 0x35c);
  GECameraSet::ComputeCamera
            ((GECameraSet *)(*(int *)(this + 0x310) * 0x248 + *(int *)(this + 0xb8)),param_3,this_00
            );
  GECamera::BuildTransforms(this_00);
  GECamera::ComputeCursorData(this_00,param_3,param_2,param_1,(GECursorData *)(this + 0x570));
  uVar5 = *(uint *)(this + 0xfc);
  piVar8 = *(int **)(this + 0xf4);
  iVar7 = *(int *)(this + 0xf8);
  if (uVar5 != 0) {
    uVar3 = 0;
    piVar6 = piVar8;
    do {
      iVar1 = *piVar6;
      if ((*(char *)(*(int *)(this + 0xd4) + iVar1) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar1 * 4) != 0)) {
        GEModel::CalcRenderTransform
                  (*(GEModel **)(*(int *)(this + 0xb0) + iVar1 * 4),this_00,
                   (MMatrix *)(*(int *)(this + 0xbc) + iVar1 * 0x40),
                   (MMatrix *)(*(int *)(this + 0xc0) + iVar1 * 0x40));
        uVar5 = *(uint *)(this + 0xfc);
      }
      uVar3 = uVar3 + 1;
      piVar6 = piVar6 + 1;
    } while (uVar3 < uVar5);
  }
  uVar3 = *(uint *)(this + 0xa4);
  if (uVar5 < uVar3) {
    iVar1 = uVar5 * 4;
    iVar4 = 0;
    do {
      iVar2 = *(int *)((int)piVar8 + iVar4 + iVar1);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar2) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar2 * 4) != 0)) {
        iVar9 = *(int *)(this + 0xc0);
        MMatrix::Transform4x3
                  ((MMatrix *)(*(int *)(this + 0xbc) + iVar2 * 0x40),
                   (MMatrix *)(iVar9 + *(int *)(iVar7 + iVar1 + iVar4) * 0x40),aMStack_68);
        GEModel::CalcRenderTransform
                  (*(GEModel **)(*(int *)(this + 0xb0) + iVar2 * 4),this_00,aMStack_68,
                   (MMatrix *)(iVar9 + iVar2 * 0x40));
        uVar3 = *(uint *)(this + 0xa4);
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar3);
  }
  Internal_RunLogic(this,2);
  uVar5 = *(uint *)(this + 0xa4);
  uVar3 = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  if (uVar5 != 0) {
    do {
      iVar7 = *(int *)(this + 0xcc);
      iVar1 = *(int *)(this + 0xd4);
      *(undefined1 *)(iVar7 + uVar3) = 0;
      if (*(char *)(iVar1 + uVar3) != '\0') {
        iVar1 = *(int *)(*(int *)(this + 0xb0) + uVar3 * 4);
        if (*(char *)(iVar1 + 0xc3) == '\0') {
          iVar7 = GECamera::IsVisible(this_00,(MMatrix *)(*(int *)(this + 0xc0) + uVar3 * 0x40),
                                      (MVector3 *)(iVar1 + 0x6c),*(float *)(iVar1 + 0x78));
          if (iVar7 == 0) {
            uVar5 = *(uint *)(this + 0xa4);
            goto LAB_0004316c;
          }
          iVar7 = *(int *)(this + 0xcc);
        }
        *(uint *)(*(int *)(this + 0xc4) + *(int *)(this + 0xdc) * 4) = uVar3;
        iVar1 = *(int *)(this + 0xdc);
        uVar5 = *(uint *)(this + 0xa4);
        *(undefined1 *)(iVar7 + uVar3) = 1;
        *(int *)(this + 0xdc) = iVar1 + 1;
      }
LAB_0004316c:
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar5);
  }
  Internal_RunLogic(this,3);
  Internal_UpdateVertexAnims_Visible(this);
  Internal_UpdateSkeletons_Visible(this);
  return;
}

