/* 00049850 | STG::GEScene::UpdateRendering */

/* STG::GEScene::UpdateRendering(STG::UTimeValue<unsigned long long, 1ul> const&, STG::MVector2
   const&, STG::GEViewport const&) */

void __thiscall
STG::GEScene::UpdateRendering
          (GEScene *this,UTimeValue *param_1,MVector2 *param_2,GEViewport *param_3)

{
  GECamera *this_00;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  MMatrix local_5c [72];
  undefined4 uStack_14;
  
  uStack_14 = 0x49859;
  FUN_0002e044();
  this_00 = (GECamera *)(this + 0x350);
  GECameraSet::ComputeCamera
            ((GECameraSet *)(*(int *)(this + 0x304) * 0x248 + *(int *)(this + 0xb8)),param_3,this_00
            );
  GECamera::BuildTransforms(this_00);
  GECamera::ComputeCursorData(this_00,param_3,param_2,param_1,(GECursorData *)(this + 0x560));
  uVar7 = *(uint *)(this + 0xfc);
  iVar1 = *(int *)(this + 0xf4);
  iVar2 = *(int *)(this + 0xf8);
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      iVar3 = *(int *)(iVar1 + uVar6 * 4);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar3) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar3 * 4) != 0)) {
        GEModel::CalcRenderTransform
                  (*(GEModel **)(*(int *)(this + 0xb0) + iVar3 * 4),this_00,
                   (MMatrix *)(iVar3 * 0x40 + *(int *)(this + 0xbc)),
                   (MMatrix *)(*(int *)(this + 0xc0) + iVar3 * 0x40));
        uVar7 = *(uint *)(this + 0xfc);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  uVar6 = *(uint *)(this + 0xa4);
  if (uVar7 < uVar6) {
    do {
      iVar3 = *(int *)(iVar1 + uVar7 * 4);
      if ((*(char *)(*(int *)(this + 0xd4) + iVar3) != '\0') ||
         (*(int *)(*(int *)(this + 0x108) + iVar3 * 4) != 0)) {
        iVar4 = *(int *)(this + 0xc0);
        MMatrix::Transform4x3
                  ((MMatrix *)(iVar3 * 0x40 + *(int *)(this + 0xbc)),
                   (MMatrix *)(*(int *)(this + 0xc0) + *(int *)(iVar2 + uVar7 * 4) * 0x40),local_5c)
        ;
        GEModel::CalcRenderTransform
                  (*(GEModel **)(*(int *)(this + 0xb0) + iVar3 * 4),this_00,local_5c,
                   (MMatrix *)(iVar4 + iVar3 * 0x40));
        uVar6 = *(uint *)(this + 0xa4);
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < uVar6);
  }
  Internal_RunLogic(this,2);
  uVar7 = *(uint *)(this + 0xa4);
  *(undefined4 *)(this + 0xdc) = 0;
  if (uVar7 != 0) {
    uVar6 = 0;
    do {
      *(undefined1 *)(*(int *)(this + 0xcc) + uVar6) = 0;
      if (*(char *)(*(int *)(this + 0xd4) + uVar6) != '\0') {
        iVar1 = *(int *)(*(int *)(this + 0xb0) + uVar6 * 4);
        if ((*(char *)(iVar1 + 0xc3) != '\0') ||
           (cVar5 = GECamera::IsVisible(this_00,(MMatrix *)(*(int *)(this + 0xc0) + uVar6 * 0x40),
                                        (MVector3 *)(iVar1 + 0x6c),*(float *)(iVar1 + 0x78)),
           cVar5 != '\0')) {
          *(uint *)(*(int *)(this + 0xc4) + *(int *)(this + 0xdc) * 4) = uVar6;
          *(undefined1 *)(*(int *)(this + 0xcc) + uVar6) = 1;
          *(int *)(this + 0xdc) = *(int *)(this + 0xdc) + 1;
        }
        uVar7 = *(uint *)(this + 0xa4);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  Internal_RunLogic(this,3);
  Internal_UpdateVertexAnims_Visible(this);
  Internal_UpdateSkeletons_Visible(this);
  return;
}

