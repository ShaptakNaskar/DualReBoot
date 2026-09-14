/* 0004c7bc | STG::LLogicScene::Allocate */

/* STG::LLogicScene::Allocate(STG::LLogicScene::EType) */

int * STG::LLogicScene::Allocate(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = DAT_0004c83c + 0x4c7d0;
  if (param_1 != 0) {
    return (int *)0x0;
  }
  piVar2 = operator_new(0x4c);
  iVar1 = DAT_0004c840;
  piVar2[1] = 0;
  iVar3 = *(int *)(iVar3 + iVar1);
  piVar2[2] = 0;
  piVar2[3] = 0;
  *piVar2 = iVar3 + 8;
  piVar2[4] = 0;
  piVar2[5] = 0;
  piVar2[6] = 0;
  piVar2[7] = 0;
  piVar2[8] = 0;
  piVar2[9] = 0;
  piVar2[10] = 0;
  piVar2[0xb] = 0;
  piVar2[0xc] = 0;
  piVar2[0xd] = 0;
  *(undefined1 *)(piVar2 + 0xe) = 0;
  piVar2[0xf] = 0;
  piVar2[0x10] = 0;
  piVar2[0x11] = 0;
  piVar2[0x12] = 0;
  return piVar2;
}

