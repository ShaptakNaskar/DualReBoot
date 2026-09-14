/* 00057810 | STG::LLogicScene_HidePrey::LoadData */

/* STG::LLogicScene_HidePrey::LoadData(STG::FFileBase const*) */

void __thiscall STG::LLogicScene_HidePrey::LoadData(LLogicScene_HidePrey *this,FFileBase *param_1)

{
  undefined4 *puVar1;
  uchar local_34 [4];
  undefined4 *local_30;
  int local_2c;
  undefined4 *local_20;
  int local_1c;
  undefined4 uStack_14;
  
  uStack_14 = 0x5781b;
  FUN_0002e044();
  FFileBase::Read(param_1,local_34,4);
  local_30 = (undefined4 *)0x0;
  local_2c = 0;
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  FUN_000563a0();
  FUN_000563a0();
  Initialize(this,(UArrayFixed *)&local_30,(UArrayFixed *)&local_20);
  if (local_1c != 0) {
    if (local_20 != (undefined4 *)0x0) {
      puVar1 = local_20 + local_20[-1] * 7;
      if (local_20 != puVar1) {
        do {
          puVar1 = puVar1 + -7;
          (**(code **)*puVar1)(puVar1);
        } while (local_20 != puVar1);
      }
      operator_delete__(local_20 + -1);
    }
    local_20 = (undefined4 *)0x0;
    local_1c = 0;
  }
  if ((local_2c != 0) && (local_30 != (undefined4 *)0x0)) {
    puVar1 = local_30 + local_30[-1] * 7;
    if (local_30 != puVar1) {
      do {
        puVar1 = puVar1 + -7;
        (**(code **)*puVar1)(puVar1);
      } while (local_30 != puVar1);
    }
    operator_delete__(local_30 + -1);
    return;
  }
  return;
}

