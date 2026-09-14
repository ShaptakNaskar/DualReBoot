/* 0004e158 | STG::LLogicScene_HidePrey::Initialize */

/* STG::LLogicScene_HidePrey::Initialize(STG::UArrayFixed<STG::UStringBase<char, int>, unsigned
   long> const&, STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long> const&) */

void __thiscall
STG::LLogicScene_HidePrey::Initialize
          (LLogicScene_HidePrey *this,UArrayFixed *param_1,UArrayFixed *param_2)

{
  undefined4 *puVar1;
  undefined4 extraout_r2;
  undefined4 uVar2;
  int extraout_r3;
  int iVar3;
  int iVar4;
  
  UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator=
            ((UArrayFixed<STG::UStringBase<char,int>,unsigned_long> *)(this + 8),param_1);
  UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator=
            ((UArrayFixed<STG::UStringBase<char,int>,unsigned_long> *)(this + 0x10),param_2);
  iVar3 = *(int *)(this + 0xc);
  if (iVar3 != *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = iVar3;
    if (iVar3 != 0) {
      puVar1 = operator_new__(iVar3 << 2);
      iVar4 = *(int *)(this + 0x1c);
      uVar2 = extraout_r2;
      iVar3 = extraout_r3;
      if (iVar4 != 0) {
        iVar3 = 0;
        uVar2 = 0xffffffff;
      }
      *(undefined4 **)(this + 0x18) = puVar1;
      if (iVar4 != 0) {
        do {
          iVar3 = iVar3 + 1;
          *puVar1 = uVar2;
          puVar1 = puVar1 + 1;
        } while (iVar3 != iVar4);
        iVar4 = *(int *)(this + 0x14);
        iVar3 = *(int *)(this + 0x24);
        if (iVar4 == iVar3) {
          return;
        }
        goto LAB_0004e1c4;
      }
    }
  }
  iVar4 = *(int *)(this + 0x14);
  iVar3 = *(int *)(this + 0x24);
  if (iVar4 == iVar3) {
    return;
  }
LAB_0004e1c4:
  if (iVar3 != 0) {
    if (*(void **)(this + 0x20) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x20));
    }
    *(undefined4 *)(this + 0x20) = 0;
  }
  *(int *)(this + 0x24) = iVar4;
  if (iVar4 == 0) {
    return;
  }
  puVar1 = operator_new__(iVar4 << 2);
  iVar3 = *(int *)(this + 0x24);
  *(undefined4 **)(this + 0x20) = puVar1;
  if (iVar3 == 0) {
    return;
  }
  iVar4 = 0;
  do {
    iVar4 = iVar4 + 1;
    *puVar1 = 0xffffffff;
    puVar1 = puVar1 + 1;
  } while (iVar4 != iVar3);
  return;
}

