/* 000575e0 | STG::LLogicScene_HidePrey::Initialize */

/* STG::LLogicScene_HidePrey::Initialize(STG::UArrayFixed<STG::UStringBase<char, int>, unsigned
   long> const&, STG::UArrayFixed<STG::UStringBase<char, int>, unsigned long> const&) */

void __thiscall
STG::LLogicScene_HidePrey::Initialize
          (LLogicScene_HidePrey *this,UArrayFixed *param_1,UArrayFixed *param_2)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  FUN_0002e044();
  UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator=
            ((UArrayFixed<STG::UStringBase<char,int>,unsigned_long> *)(this + 8),param_1);
  UArrayFixed<STG::UStringBase<char,int>,unsigned_long>::operator=
            ((UArrayFixed<STG::UStringBase<char,int>,unsigned_long> *)(this + 0x10),param_2);
  iVar1 = *(int *)(this + 0xc);
  if (iVar1 != *(int *)(this + 0x1c)) {
    if (*(int *)(this + 0x1c) != 0) {
      if (*(void **)(this + 0x18) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x18));
      }
      *(undefined4 *)(this + 0x18) = 0;
    }
    *(int *)(this + 0x1c) = iVar1;
    if (iVar1 != 0) {
      pvVar3 = operator_new__(iVar1 << 2);
      uVar2 = *(uint *)(this + 0x1c);
      *(void **)(this + 0x18) = pvVar3;
      if (uVar2 != 0) {
        uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
        if (uVar2 <= uVar4) {
          uVar4 = uVar2;
        }
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
          if (uVar2 == uVar4) goto LAB_0005764a;
        }
        uVar7 = uVar2 - uVar4 >> 2;
        if (uVar7 != 0) {
          puVar8 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *puVar8 = 0xffffffff;
            puVar8[1] = 0xffffffff;
            puVar8[2] = 0xffffffff;
            puVar8[3] = 0xffffffff;
            puVar8 = puVar8 + 4;
          } while (uVar5 < uVar7);
          uVar6 = uVar6 + uVar7 * 4;
          if (uVar2 - uVar4 == uVar7 * 4) goto LAB_0005764a;
        }
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar2);
      }
    }
  }
LAB_0005764a:
  iVar1 = *(int *)(this + 0x14);
  if (iVar1 != *(int *)(this + 0x24)) {
    if (*(int *)(this + 0x24) != 0) {
      if (*(void **)(this + 0x20) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(undefined4 *)(this + 0x20) = 0;
    }
    *(int *)(this + 0x24) = iVar1;
    if (iVar1 != 0) {
      pvVar3 = operator_new__(iVar1 << 2);
      uVar2 = *(uint *)(this + 0x24);
      *(void **)(this + 0x20) = pvVar3;
      if (uVar2 != 0) {
        uVar4 = -(((uint)pvVar3 & 0xf) >> 2) & 3;
        if (uVar2 < uVar4) {
          uVar4 = uVar2;
        }
        uVar6 = 0;
        if (uVar4 != 0) {
          do {
            *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar4);
          if (uVar4 == uVar2) {
            return;
          }
        }
        uVar7 = uVar2 - uVar4 >> 2;
        if (uVar7 != 0) {
          puVar8 = (undefined4 *)((int)pvVar3 + uVar4 * 4);
          uVar5 = 0;
          do {
            uVar5 = uVar5 + 1;
            *puVar8 = 0xffffffff;
            puVar8[1] = 0xffffffff;
            puVar8[2] = 0xffffffff;
            puVar8[3] = 0xffffffff;
            puVar8 = puVar8 + 4;
          } while (uVar5 < uVar7);
          uVar6 = uVar6 + uVar7 * 4;
          if (uVar2 - uVar4 == uVar7 * 4) {
            return;
          }
        }
        do {
          *(undefined4 *)((int)pvVar3 + uVar6 * 4) = 0xffffffff;
          if (uVar2 <= uVar6 + 1) {
            return;
          }
          *(undefined4 *)((int)pvVar3 + (uVar6 + 1) * 4) = 0xffffffff;
          uVar6 = uVar6 + 2;
        } while (uVar6 < uVar2);
      }
    }
  }
  return;
}

