/* 00047ba0 | STG::GEScene::GetClearColor */

/* STG::GEScene::GetClearColor() const */

undefined4 * STG::GEScene::GetClearColor(void)

{
  int iVar1;
  undefined4 *in_stack_00000004;
  GEScene *in_stack_00000008;
  
  FUN_0002e044();
  iVar1 = GetEnvironmentSettings(in_stack_00000008);
  *in_stack_00000004 = *(undefined4 *)(iVar1 + 0x20);
  in_stack_00000004[1] = *(undefined4 *)(iVar1 + 0x24);
  in_stack_00000004[2] = *(undefined4 *)(iVar1 + 0x28);
  in_stack_00000004[3] = *(undefined4 *)(iVar1 + 0x2c);
  return in_stack_00000004;
}

