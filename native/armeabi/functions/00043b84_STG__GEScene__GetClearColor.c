/* 00043b84 | STG::GEScene::GetClearColor */

/* STG::GEScene::GetClearColor() const */

void STG::GEScene::GetClearColor(void)

{
  undefined4 *in_r0;
  int iVar1;
  GEScene *in_r1;
  
  iVar1 = GetEnvironmentSettings(in_r1);
  *in_r0 = *(undefined4 *)(iVar1 + 0x20);
  in_r0[1] = *(undefined4 *)(iVar1 + 0x24);
  in_r0[2] = *(undefined4 *)(iVar1 + 0x28);
  in_r0[3] = *(undefined4 *)(iVar1 + 0x2c);
  return;
}

