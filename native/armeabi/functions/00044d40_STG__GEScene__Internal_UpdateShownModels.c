/* 00044d40 | STG::GEScene::Internal_UpdateShownModels */

/* STG::GEScene::Internal_UpdateShownModels() */

void __thiscall STG::GEScene::Internal_UpdateShownModels(GEScene *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  ComputeShownModelsList(this,(UArrayFixed *)(this + 0xd4));
  if (*(uint *)(this + 0x310) < *(uint *)(this + 0xac)) {
    iVar1 = *(uint *)(this + 0x310) * 0x248 + *(int *)(this + 0xb8);
    iVar3 = *(int *)(iVar1 + 0x234);
    if (iVar3 != 0) {
      iVar2 = 0;
      do {
        *(int *)(*(int *)(iVar1 + 0x22c) + iVar2 * 4) =
             *(int *)(*(int *)(iVar1 + 0x230) + iVar2 * 4) * 0x210 + *(int *)(this + 0xb4);
        iVar2 = iVar2 + 1;
      } while (iVar2 != iVar3);
    }
  }
  return;
}

