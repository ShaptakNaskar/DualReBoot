/* 00045330 | STG::GEScene::UpdateRendering */

/* STG::GEScene::UpdateRendering(STG::UTimeValue<unsigned long long, 1ul> const&, STG::MVector2
   const&, STG::GEViewport const&) */

void __thiscall
STG::GEScene::UpdateRendering
          (GEScene *this,UTimeValue *param_1,MVector2 *param_2,GEViewport *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  GECamera *this_00;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  float fVar9;
  float extraout_s0;
  MMatrix aMStack_68 [68];
  
  this_00 = (GECamera *)(this + 0x35c);
  GECameraSet::ComputeCamera
            ((GEViewport *)(*(int *)(this + 0x310) * 0x248 + *(int *)(this + 0xb8)),
             (GECamera *)param_3);
  GECamera::BuildTransforms(this_00);
  GECamera::ComputeCursorData(this_00,param_3,param_2,param_1,(GECursorData *)(this + 0x570));
  uVar4 = *(uint *)(this + 0xfc);
  piVar6 = *(int **)(this + 0xf4);
  iVar7 = *(int *)(this + 0xf8);
  if (uVar4 != 0) {
    uVar2 = 0;
    piVar5 = piVar6;
    do {
      iVar1 = *piVar5;
      if ((*(char *)(*(int *)(this + 0xd4) + iVar1) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar1 * 4) != 0)) {
        GEModel::CalcRenderTransform
                  (*(GECamera **)(*(int *)(this + 0xb0) + iVar1 * 4),(MMatrix *)this_00,
                   (MMatrix *)(*(int *)(this + 0xbc) + iVar1 * 0x40));
        uVar4 = *(uint *)(this + 0xfc);
      }
      uVar2 = uVar2 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar2 < uVar4);
  }
  uVar2 = *(uint *)(this + 0xa4);
  if (uVar4 < uVar2) {
    iVar1 = uVar4 * 4;
    iVar3 = 0;
    do {
      iVar8 = *(int *)((int)piVar6 + iVar3 + iVar1);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar8) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar8 * 4) != 0)) {
        MMatrix::Transform4x3
                  ((MMatrix *)(*(int *)(this + 0xbc) + iVar8 * 0x40),
                   (MMatrix *)(*(int *)(this + 0xc0) + *(int *)(iVar7 + iVar1 + iVar3) * 0x40),
                   aMStack_68);
        GEModel::CalcRenderTransform
                  (*(GECamera **)(*(int *)(this + 0xb0) + iVar8 * 4),(MMatrix *)this_00,aMStack_68);
        uVar2 = *(uint *)(this + 0xa4);
      }
      uVar4 = uVar4 + 1;
      iVar3 = iVar3 + 4;
    } while (uVar4 < uVar2);
  }
  fVar9 = (float)Internal_RunLogic(this,2);
  uVar4 = *(uint *)(this + 0xa4);
  uVar2 = 0;
  *(undefined4 *)(this + 0xdc) = 0;
  if (uVar4 != 0) {
    do {
      iVar7 = *(int *)(this + 0xcc);
      iVar1 = *(int *)(this + 0xd4);
      *(undefined1 *)(iVar7 + uVar2) = 0;
      if (*(char *)(iVar1 + uVar2) != '\0') {
        iVar1 = *(int *)(*(int *)(this + 0xb0) + uVar2 * 4);
        if (*(char *)(iVar1 + 0xc3) == '\0') {
          iVar7 = GECamera::IsVisible(this_00,(MMatrix *)(*(int *)(this + 0xc0) + uVar2 * 0x40),
                                      (MVector3 *)(iVar1 + 0x6c),fVar9);
          fVar9 = extraout_s0;
          if (iVar7 == 0) {
            uVar4 = *(uint *)(this + 0xa4);
            goto LAB_000454e4;
          }
          iVar7 = *(int *)(this + 0xcc);
        }
        *(uint *)(*(int *)(this + 0xc4) + *(int *)(this + 0xdc) * 4) = uVar2;
        iVar1 = *(int *)(this + 0xdc);
        uVar4 = *(uint *)(this + 0xa4);
        *(undefined1 *)(iVar7 + uVar2) = 1;
        *(int *)(this + 0xdc) = iVar1 + 1;
      }
LAB_000454e4:
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar4);
  }
  Internal_RunLogic(this,3);
  Internal_UpdateVertexAnims_Visible(this);
  Internal_UpdateSkeletons_Visible(this);
  return;
}

