/* 00049140 | STG::GEScene::Internal_UpdateShownModels */

/* STG::GEScene::Internal_UpdateShownModels() */

void __thiscall STG::GEScene::Internal_UpdateShownModels(GEScene *this)

{
  uint uVar1;
  int iVar2;
  
  FUN_0002e044();
  ComputeShownModelsList(this,(UArrayFixed *)(this + 0xd4));
  if ((*(uint *)(this + 0x304) < *(uint *)(this + 0xac)) &&
     (iVar2 = *(uint *)(this + 0x304) * 0x248 + *(int *)(this + 0xb8), *(int *)(iVar2 + 0x234) != 0)
     ) {
    uVar1 = 0;
    do {
      *(int *)(*(int *)(iVar2 + 0x22c) + uVar1 * 4) =
           *(int *)(*(int *)(iVar2 + 0x230) + uVar1 * 4) * 0x210 + *(int *)(this + 0xb4);
      uVar1 = uVar1 + 1;
    } while (uVar1 < *(uint *)(iVar2 + 0x234));
  }
  return;
}

