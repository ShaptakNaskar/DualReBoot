/* 0004cb00 | STG::LLogicScene_HidePrey::Run */

/* STG::LLogicScene_HidePrey::Run(STG::LLogicBase::EStage, STG::LLogicSceneWrapper&) */

void __thiscall
STG::LLogicScene_HidePrey::Run(LLogicScene_HidePrey *this,int param_2,LLogicSceneWrapper *param_3)

{
  float fVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  
  iVar2 = LLogicSceneWrapper::GetAnimTimeData(param_3);
  if ((*(int *)(iVar2 + 0xd0) != 0 || *(int *)(iVar2 + 0xd4) != 0) && (param_2 != 0)) {
    if (param_2 == 2) {
      uVar5 = 0;
      this[0x38] = (LLogicScene_HidePrey)0x0;
      fVar1 = DAT_0004cd48;
      if (*(int *)(this + 0x28) != 0) {
        do {
          uVar7 = *(ulong *)(*(int *)(this + 0x18) + uVar5 * 4);
          iVar2 = LLogicSceneWrapper::GetIsModelShown(param_3,uVar7);
          if ((iVar2 != 0) &&
             (LLogicSceneWrapper::GetBoundingData_World
                        (param_3,uVar7,(MVector3 *)&local_40,&local_48), *(int *)(this + 0x2c) != 0)
             ) {
            uVar6 = 0;
            do {
              iVar2 = uVar6 * 4;
              uVar7 = *(ulong *)(*(int *)(this + 0x20) + uVar6 * 4);
              uVar6 = uVar6 + 1;
              iVar3 = LLogicSceneWrapper::GetIsModelShown(param_3,uVar7);
              if (iVar3 != 0) {
                LLogicSceneWrapper::GetBoundingData_World
                          (param_3,uVar7,(MVector3 *)&local_34,&local_44);
                fVar9 = local_44 + local_48;
                fVar10 = (local_34 - local_40) * (local_34 - local_40) +
                         (local_30 - local_3c) * (local_30 - local_3c) +
                         (local_2c - local_38) * (local_2c - local_38);
                fVar8 = fVar10 / ((fVar9 + fVar9) * (fVar9 + fVar9));
                if (1.0 < fVar8) {
                  fVar8 = 1.0;
                }
                if (fVar8 < 0.0) {
                  fVar8 = fVar1;
                }
                *(float *)(*(int *)(this + 0x44) + iVar2) = (1.0 - fVar8) * (1.0 - fVar8);
                if (fVar10 <= fVar9 * fVar9) {
                  this[0x38] = (LLogicScene_HidePrey)0x1;
                  return;
                }
              }
            } while (uVar6 < *(uint *)(this + 0x2c));
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 < *(uint *)(this + 0x28));
      }
    }
    else if ((param_2 == 3) && (*(int *)(this + 0x2c) != 0)) {
      uVar5 = 0;
      do {
        uVar7 = *(ulong *)(*(int *)(this + 0x20) + uVar5 * 4);
        iVar2 = LLogicSceneWrapper::GetIsModelVisible(param_3,uVar7);
        if (iVar2 == 0) {
          puVar4 = (undefined1 *)(*(int *)(this + 0x30) + uVar5);
          if (*(char *)(*(int *)(this + 0x30) + uVar5) == '\0') {
            if (this[0x38] != (LLogicScene_HidePrey)0x0) {
              *puVar4 = 1;
              iVar2 = LLogicSceneWrapper::GetModel(param_3,uVar7);
              *(undefined4 *)(iVar2 + 0x98) = 0;
            }
          }
          else if (this[0x38] == (LLogicScene_HidePrey)0x0) {
            *puVar4 = 0;
            iVar2 = LLogicSceneWrapper::GetModel(param_3,uVar7);
            *(undefined4 *)(iVar2 + 0x98) = *(undefined4 *)(*(int *)(this + 0x3c) + uVar5 * 4);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(this + 0x2c));
    }
  }
  return;
}

