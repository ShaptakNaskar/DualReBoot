/* 000508ec | STG::LLogicScene_HidePrey::Initialize */

/* STG::LLogicScene_HidePrey::Initialize(STG::UArrayFixed<STG::UStringBase<char, int>, unsigned
   long> const&, STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long> const&) */

void __thiscall
STG::LLogicScene_HidePrey::Initialize
          (LLogicScene_HidePrey *this,UArrayFixed *param_1,UArrayFixed *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
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
      iVar3 = *(int *)(this + 0x1c);
      *(undefined4 **)(this + 0x18) = puVar1;
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar3);
      }
    }
  }
  iVar3 = *(int *)(this + 0x14);
  if (iVar3 != *(int *)(this + 0x24)) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = iVar3;
    if (iVar3 != 0) {
      puVar1 = operator_new__(iVar3 << 2);
      iVar3 = *(int *)(this + 0x24);
      *(undefined4 **)(this + 0x20) = puVar1;
      if (iVar3 != 0) {
        iVar2 = 0;
        do {
          iVar2 = iVar2 + 1;
          *puVar1 = 0xffffffff;
          puVar1 = puVar1 + 1;
        } while (iVar2 != iVar3);
        return;
      }
      return;
    }
  }
  return;
}

