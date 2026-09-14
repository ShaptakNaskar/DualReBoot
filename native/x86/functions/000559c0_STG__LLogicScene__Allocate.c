/* 000559c0 | STG::LLogicScene::Allocate */

/* STG::LLogicScene::Allocate(STG::LLogicScene::EType) */

void STG::LLogicScene::Allocate(void)

{
  int iVar1;
  int *piVar2;
  int extraout_ECX;
  int unaff_EBX;
  
  FUN_0002e044();
  if (extraout_ECX == 0) {
    piVar2 = operator_new(0x4c);
    iVar1 = *(int *)(unaff_EBX + 0x4650c);
    piVar2[1] = 0;
    piVar2[2] = 0;
    *piVar2 = iVar1 + 8;
    piVar2[3] = 0;
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
  }
  return;
}

