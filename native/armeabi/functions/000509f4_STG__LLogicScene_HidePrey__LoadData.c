/* 000509f4 | STG::LLogicScene_HidePrey::LoadData */

/* STG::LLogicScene_HidePrey::LoadData(STG::FFileBase const*) */

void __thiscall STG::LLogicScene_HidePrey::LoadData(LLogicScene_HidePrey *this,FFileBase *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uchar auStack_24 [4];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FFileBase::Read(param_1,auStack_24,4);
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_0004fae4(param_1,&local_20);
  FUN_0004fae4(param_1,&local_18);
  Initialize(this,(UArrayFixed *)&local_20,(UArrayFixed *)&local_18);
  if (local_14 != 0) {
    if (local_18 != 0) {
      iVar2 = *(int *)(local_18 + -4) * 0x1c + local_18;
      if (local_18 != iVar2) {
        do {
          puVar1 = (undefined4 *)(iVar2 + -0x1c);
          iVar2 = iVar2 + -0x1c;
          (**(code **)*puVar1)(iVar2);
        } while (local_18 != iVar2);
      }
      operator_delete__((void *)(local_18 + -8));
    }
    local_18 = 0;
    local_14 = 0;
  }
  if ((local_1c != 0) && (local_20 != 0)) {
    iVar2 = *(int *)(local_20 + -4) * 0x1c + local_20;
    if (local_20 != iVar2) {
      do {
        puVar1 = (undefined4 *)(iVar2 + -0x1c);
        iVar2 = iVar2 + -0x1c;
        (**(code **)*puVar1)(iVar2);
      } while (local_20 != iVar2);
    }
    operator_delete__((void *)(local_20 + -8));
  }
  return;
}

