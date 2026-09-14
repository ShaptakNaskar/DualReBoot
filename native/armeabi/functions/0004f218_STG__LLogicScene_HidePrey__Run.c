/* 0004f218 | STG::LLogicScene_HidePrey::Run */

/* STG::LLogicScene_HidePrey::Run(STG::LLogicBase::EStage, STG::LLogicSceneWrapper&) */

void __thiscall
STG::LLogicScene_HidePrey::Run(LLogicScene_HidePrey *this,int param_2,LLogicSceneWrapper *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  uint uVar9;
  uint uVar10;
  ulong uVar11;
  float local_48;
  float local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar1 = LLogicSceneWrapper::GetAnimTimeData(param_3);
  if ((*(int *)(iVar1 + 0xd0) != 0 || *(int *)(iVar1 + 0xd4) != 0) && (param_2 != 0)) {
    if (param_2 == 2) {
      uVar9 = 0;
      this[0x38] = (LLogicScene_HidePrey)0x0;
      if (*(int *)(this + 0x28) != 0) {
        do {
          uVar11 = *(ulong *)(*(int *)(this + 0x18) + uVar9 * 4);
          iVar1 = LLogicSceneWrapper::GetIsModelShown(param_3,uVar11);
          if ((iVar1 != 0) &&
             (LLogicSceneWrapper::GetBoundingData_World
                        (param_3,uVar11,(MVector3 *)&local_40,&local_48), *(int *)(this + 0x2c) != 0
             )) {
            uVar10 = 0;
            do {
              iVar1 = uVar10 * 4;
              uVar11 = *(ulong *)(*(int *)(this + 0x20) + uVar10 * 4);
              uVar10 = uVar10 + 1;
              iVar2 = LLogicSceneWrapper::GetIsModelShown(param_3,uVar11);
              if (iVar2 != 0) {
                LLogicSceneWrapper::GetBoundingData_World
                          (param_3,uVar11,(MVector3 *)&local_34,&local_44);
                uVar3 = __addsf3(local_44,local_48);
                uVar4 = __addsf3(uVar3,uVar3);
                uVar3 = __mulsf3(uVar3,uVar3);
                uVar4 = __mulsf3(uVar4,uVar4);
                uVar5 = __subsf3(local_34,local_40);
                uVar6 = __subsf3(local_30,local_3c);
                uVar7 = __subsf3(local_2c,local_38);
                uVar6 = __mulsf3(uVar6,uVar6);
                uVar5 = __mulsf3(uVar5,uVar5);
                uVar5 = __addsf3(uVar6,uVar5);
                uVar6 = __mulsf3(uVar7,uVar7);
                uVar5 = __addsf3(uVar5,uVar6);
                uVar4 = __divsf3(uVar5,uVar4);
                iVar2 = __aeabi_fcmple(uVar4,0x3f800000);
                if (iVar2 == 0) {
                  uVar4 = 0x3f800000;
                }
                iVar2 = __aeabi_fcmpge(uVar4,0);
                if (iVar2 == 0) {
                  uVar4 = 0;
                }
                uVar4 = __subsf3(0x3f800000,uVar4);
                uVar4 = __mulsf3(uVar4,uVar4);
                *(undefined4 *)(*(int *)(this + 0x44) + iVar1) = uVar4;
                iVar1 = __aeabi_fcmpge(uVar3,uVar5);
                if (iVar1 != 0) {
                  this[0x38] = (LLogicScene_HidePrey)0x1;
                  return;
                }
              }
            } while (uVar10 < *(uint *)(this + 0x2c));
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(this + 0x28));
      }
    }
    else if ((param_2 == 3) && (*(int *)(this + 0x2c) != 0)) {
      uVar9 = 0;
      do {
        uVar11 = *(ulong *)(*(int *)(this + 0x20) + uVar9 * 4);
        iVar1 = LLogicSceneWrapper::GetIsModelVisible(param_3,uVar11);
        if (iVar1 == 0) {
          puVar8 = (undefined1 *)(*(int *)(this + 0x30) + uVar9);
          if (*(char *)(*(int *)(this + 0x30) + uVar9) == '\0') {
            if (this[0x38] != (LLogicScene_HidePrey)0x0) {
              *puVar8 = 1;
              iVar1 = LLogicSceneWrapper::GetModel(param_3,uVar11);
              *(undefined4 *)(iVar1 + 0x98) = 0;
            }
          }
          else if (this[0x38] == (LLogicScene_HidePrey)0x0) {
            *puVar8 = 0;
            iVar1 = LLogicSceneWrapper::GetModel(param_3,uVar11);
            *(undefined4 *)(iVar1 + 0x98) = *(undefined4 *)(*(int *)(this + 0x3c) + uVar9 * 4);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < *(uint *)(this + 0x2c));
    }
  }
  return;
}

