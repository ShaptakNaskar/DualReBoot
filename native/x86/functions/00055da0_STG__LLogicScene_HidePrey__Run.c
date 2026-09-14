/* 00055da0 | STG::LLogicScene_HidePrey::Run */

/* STG::LLogicScene_HidePrey::Run(STG::LLogicBase::EStage, STG::LLogicSceneWrapper&) */

void __thiscall
STG::LLogicScene_HidePrey::Run(LLogicScene_HidePrey *this,int param_2,LLogicSceneWrapper *param_3)

{
  char *pcVar1;
  ulong uVar2;
  char cVar3;
  int iVar4;
  int unaff_EBX;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 uStack_14;
  
  uStack_14 = 0x55da9;
  FUN_0002e044();
  iVar4 = LLogicSceneWrapper::GetAnimTimeData(param_3);
  if ((*(int *)(iVar4 + 0xd4) != 0 || *(int *)(iVar4 + 0xd0) != 0) && (param_2 != 0)) {
    if (param_2 == 2) {
      this[0x38] = (LLogicScene_HidePrey)0x0;
      if (*(int *)(this + 0x28) != 0) {
        local_40 = 0;
        do {
          uVar2 = *(ulong *)(*(int *)(this + 0x18) + local_40 * 4);
          cVar3 = LLogicSceneWrapper::GetIsModelShown(param_3,uVar2);
          if ((cVar3 != '\0') &&
             (LLogicSceneWrapper::GetBoundingData_World
                        (param_3,uVar2,(MVector3 *)&local_34,&local_3c), *(int *)(this + 0x2c) != 0)
             ) {
            uVar5 = 0;
            do {
              uVar2 = *(ulong *)(*(int *)(this + 0x20) + uVar5 * 4);
              cVar3 = LLogicSceneWrapper::GetIsModelShown(param_3,uVar2);
              if (cVar3 != '\0') {
                LLogicSceneWrapper::GetBoundingData_World
                          (param_3,uVar2,(MVector3 *)&local_28,&local_38);
                fVar7 = local_38 + local_3c;
                fVar6 = (local_24 - local_30) * (local_24 - local_30) +
                        (local_28 - local_34) * (local_28 - local_34) +
                        (local_20 - local_2c) * (local_20 - local_2c);
                fVar8 = fVar6 / ((fVar7 + fVar7) * (fVar7 + fVar7));
                if (*(float *)(unaff_EBX + 0x318ff) <= fVar8) {
                  fVar8 = *(float *)(unaff_EBX + 0x318ff);
                }
                if (fVar8 <= *(float *)(unaff_EBX + 0x31947)) {
                  fVar8 = *(float *)(unaff_EBX + 0x31947);
                }
                fVar8 = *(float *)(unaff_EBX + 0x318ff) - fVar8;
                *(float *)(*(int *)(this + 0x44) + uVar5 * 4) = fVar8 * fVar8;
                if (fVar6 <= fVar7 * fVar7) {
                  this[0x38] = (LLogicScene_HidePrey)0x1;
                  return;
                }
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 < *(uint *)(this + 0x2c));
          }
          local_40 = local_40 + 1;
        } while (local_40 < *(uint *)(this + 0x28));
      }
    }
    else if ((param_2 == 3) && (*(int *)(this + 0x2c) != 0)) {
      uVar5 = 0;
      do {
        uVar2 = *(ulong *)(*(int *)(this + 0x20) + uVar5 * 4);
        cVar3 = LLogicSceneWrapper::GetIsModelVisible(param_3,uVar2);
        if (cVar3 == '\0') {
          pcVar1 = (char *)(*(int *)(this + 0x30) + uVar5);
          if (*pcVar1 == '\0') {
            if (this[0x38] != (LLogicScene_HidePrey)0x0) {
              *pcVar1 = '\x01';
              iVar4 = LLogicSceneWrapper::GetModel(param_3,uVar2);
              *(undefined4 *)(iVar4 + 0x98) = 0;
            }
          }
          else if (this[0x38] == (LLogicScene_HidePrey)0x0) {
            *pcVar1 = '\0';
            iVar4 = LLogicSceneWrapper::GetModel(param_3,uVar2);
            *(undefined4 *)(iVar4 + 0x98) = *(undefined4 *)(*(int *)(this + 0x3c) + uVar5 * 4);
          }
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 < *(uint *)(this + 0x2c));
    }
  }
  return;
}

