/* 00040b58 | STG::GEScene::ToolsOnly_SetUpdateOrder */

/* STG::GEScene::ToolsOnly_SetUpdateOrder(unsigned long, unsigned long, unsigned long) */

void __thiscall
STG::GEScene::ToolsOnly_SetUpdateOrder(GEScene *this,ulong param_1,ulong param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(this + 0xf8);
  iVar2 = *(int *)(this + 0x100);
  *(ulong *)(*(int *)(this + 0xf4) + param_1 * 4) = param_2;
  *(ulong *)(iVar1 + param_1 * 4) = param_3;
  *(ulong *)(iVar2 + param_2 * 4) = param_3;
  if (param_3 < *(uint *)(this + 0xa4)) {
    *(int *)(*(int *)(this + 0x108) + param_3 * 4) =
         *(int *)(*(int *)(this + 0x108) + param_3 * 4) + 1;
  }
  return;
}

