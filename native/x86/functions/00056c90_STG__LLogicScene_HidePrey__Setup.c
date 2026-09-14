/* 00056c90 | STG::LLogicScene_HidePrey::Setup */

/* STG::LLogicScene_HidePrey::Setup(STG::LLogicSceneWrapper const&) */

undefined4 __thiscall
STG::LLogicScene_HidePrey::Setup(LLogicScene_HidePrey *this,LLogicSceneWrapper *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char cVar5;
  int iVar6;
  void *pvVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int unaff_EBX;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  FUN_0002e044();
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x2c) = 0;
  this[0x38] = (LLogicScene_HidePrey)0x0;
  cVar5 = SetupIndices(this,param_1,(UArrayFixed *)(this + 8),(UArrayFixed *)(this + 0x18),
                       (ulong *)(this + 0x28));
  if (cVar5 == '\0') {
    return 0;
  }
  cVar5 = SetupIndices(this,param_1,(UArrayFixed *)(this + 0x10),(UArrayFixed *)(this + 0x20),
                       (ulong *)(this + 0x2c));
  if (cVar5 == '\0') {
    return 0;
  }
  uVar12 = *(uint *)(this + 0x2c);
  if (uVar12 != *(uint *)(this + 0x34)) {
    if (*(uint *)(this + 0x34) != 0) {
      if (*(void **)(this + 0x30) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x30));
      }
      *(undefined4 *)(this + 0x30) = 0;
    }
    *(uint *)(this + 0x34) = uVar12;
    if (uVar12 != 0) {
      pvVar7 = operator_new__(uVar12);
      iVar6 = *(int *)(this + 0x34);
      *(void **)(this + 0x30) = pvVar7;
      if (iVar6 != 0) {
        iVar10 = 0;
        do {
          *(undefined1 *)((int)pvVar7 + iVar10) = 0;
          iVar10 = iVar10 + 1;
        } while (iVar10 != iVar6);
      }
    }
    uVar12 = *(uint *)(this + 0x2c);
  }
  if (*(uint *)(this + 0x48) != uVar12) {
    if (*(uint *)(this + 0x48) != 0) {
      if (*(void **)(this + 0x44) != (void *)0x0) {
        operator_delete__(*(void **)(this + 0x44));
      }
      *(undefined4 *)(this + 0x44) = 0;
    }
    *(uint *)(this + 0x48) = uVar12;
    if (uVar12 != 0) {
      pvVar7 = operator_new__(uVar12 << 2);
      uVar12 = *(uint *)(this + 0x48);
      *(void **)(this + 0x44) = pvVar7;
      if (uVar12 != 0) {
        uVar8 = -(((uint)pvVar7 & 0xf) >> 2) & 3;
        if (uVar12 <= uVar8) {
          uVar8 = uVar12;
        }
        uVar11 = 0;
        if (uVar8 != 0) {
          do {
            *(undefined4 *)((int)pvVar7 + uVar11 * 4) = 0;
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar8);
          if (uVar12 == uVar8) goto LAB_00056d8e;
        }
        uVar13 = uVar12 - uVar8 >> 2;
        if (uVar13 != 0) {
          puVar14 = (undefined4 *)((int)pvVar7 + uVar8 * 4);
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 1;
            *puVar14 = 0;
            puVar14[1] = 0;
            puVar14[2] = 0;
            puVar14[3] = 0;
            puVar14 = puVar14 + 4;
          } while (uVar9 < uVar13);
          uVar11 = uVar11 + uVar13 * 4;
          if (uVar12 - uVar8 == uVar13 * 4) goto LAB_00056d8e;
        }
        do {
          *(undefined4 *)((int)pvVar7 + uVar11 * 4) = 0;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar12);
      }
    }
LAB_00056d8e:
    uVar12 = *(uint *)(this + 0x2c);
  }
  if (*(uint *)(this + 0x40) == uVar12) goto LAB_00056dc4;
  if (*(uint *)(this + 0x40) != 0) {
    if (*(void **)(this + 0x3c) != (void *)0x0) {
      operator_delete__(*(void **)(this + 0x3c));
    }
    *(undefined4 *)(this + 0x3c) = 0;
  }
  *(uint *)(this + 0x40) = uVar12;
  if (uVar12 != 0) {
    pvVar7 = operator_new__(uVar12 << 2);
    uVar12 = *(uint *)(this + 0x40);
    *(void **)(this + 0x3c) = pvVar7;
    if (uVar12 != 0) {
      uVar8 = -(((uint)pvVar7 & 0xf) >> 2) & 3;
      if (uVar12 < uVar8) {
        uVar8 = uVar12;
      }
      uVar11 = 0;
      if (uVar8 != 0) {
        do {
          *(undefined4 *)((int)pvVar7 + uVar11 * 4) = 0x3f800000;
          uVar11 = uVar11 + 1;
        } while (uVar11 < uVar8);
        if (uVar8 == uVar12) goto LAB_00056dc1;
      }
      uVar13 = uVar12 - uVar8 >> 2;
      if (uVar13 != 0) {
        puVar14 = (undefined4 *)((int)pvVar7 + uVar8 * 4);
        uVar9 = 0;
        uVar1 = *(undefined4 *)(unaff_EBX + 0x30b33);
        uVar2 = *(undefined4 *)(unaff_EBX + 0x30b37);
        uVar3 = *(undefined4 *)(unaff_EBX + 0x30b3b);
        uVar4 = *(undefined4 *)(unaff_EBX + 0x30b3f);
        do {
          uVar9 = uVar9 + 1;
          *puVar14 = uVar1;
          puVar14[1] = uVar2;
          puVar14[2] = uVar3;
          puVar14[3] = uVar4;
          puVar14 = puVar14 + 4;
        } while (uVar9 < uVar13);
        uVar11 = uVar11 + uVar13 * 4;
        if (uVar12 - uVar8 == uVar13 * 4) goto LAB_00056dc1;
      }
      do {
        *(undefined4 *)((int)pvVar7 + uVar11 * 4) = 0x3f800000;
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar12);
    }
  }
LAB_00056dc1:
  uVar12 = *(uint *)(this + 0x2c);
LAB_00056dc4:
  if (uVar12 == 0) {
    return 1;
  }
  uVar12 = 0;
  do {
    iVar6 = LLogicSceneWrapper::GetModel(param_1,*(ulong *)(*(int *)(this + 0x20) + uVar12 * 4));
    *(undefined4 *)(*(int *)(this + 0x3c) + uVar12 * 4) = *(undefined4 *)(iVar6 + 0x98);
    uVar12 = uVar12 + 1;
  } while (uVar12 < *(uint *)(this + 0x2c));
  return 1;
}

