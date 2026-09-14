/* 0003dc18 | STG::GEScene::InitializeCameraSets */

/* STG::GEScene::InitializeCameraSets(unsigned long) */

void __thiscall STG::GEScene::InitializeCameraSets(GEScene *this,ulong param_1)

{
  undefined4 *puVar1;
  GECameraSet *this_00;
  
  *(ulong *)(this + 0xac) = param_1;
  if (param_1 != 0) {
    puVar1 = operator_new__(param_1 * 0x248 + 8);
    *puVar1 = 0x248;
    puVar1[1] = param_1;
    this_00 = (GECameraSet *)(puVar1 + 2);
    while (param_1 = param_1 - 1, param_1 != 0xffffffff) {
      GECameraSet::GECameraSet(this_00);
      this_00 = this_00 + 0x248;
    }
    *(GECameraSet **)(this + 0xb8) = (GECameraSet *)(puVar1 + 2);
    return;
  }
  return;
}

