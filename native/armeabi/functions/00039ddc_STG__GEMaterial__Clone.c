/* 00039ddc | STG::GEMaterial::Clone */

/* STG::GEMaterial::Clone(STG::GEMaterial&) const */

void __thiscall STG::GEMaterial::Clone(GEMaterial *this,GEMaterial *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  size_t sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  void *pvVar10;
  char *pcVar11;
  
  SetDefault(param_1);
  uVar2 = *(undefined4 *)(this + 0x140);
  uVar4 = *(undefined4 *)(this + 0x144);
  *(undefined4 *)(param_1 + 0x13c) = *(undefined4 *)(this + 0x13c);
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  *(undefined4 *)(param_1 + 0x144) = uVar4;
  *(undefined4 *)(param_1 + 0x148) = *(undefined4 *)(this + 0x148);
  *(undefined4 *)(param_1 + 0x14c) = *(undefined4 *)(this + 0x14c);
  *(undefined4 *)(param_1 + 0x150) = *(undefined4 *)(this + 0x150);
  *(undefined4 *)(param_1 + 0x154) = *(undefined4 *)(this + 0x154);
  uVar5 = *(undefined4 *)(this + 0x44);
  uVar2 = *(undefined4 *)(this + 0x34);
  uVar4 = *(undefined4 *)(this + 0x3c);
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(this + 0x2c);
  *(undefined4 *)(param_1 + 0x34) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(this + 0x4c);
  *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(this + 0x50);
  *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(this + 0x54);
  *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(this + 0x58);
  if ((string *)(param_1 + 0x70) != (string *)(this + 0x70)) {
    pvVar10 = *(void **)(this + 0x84);
    pcVar11 = *(char **)(this + 0x80);
    puVar6 = *(undefined1 **)(param_1 + 0x80);
    pvVar1 = *(void **)(param_1 + 0x84);
    uVar9 = (int)pcVar11 - (int)pvVar10;
    sVar3 = (int)puVar6 - (int)pvVar1;
    if (sVar3 < uVar9) {
      iVar7 = 0;
      if (sVar3 != 0) {
        memmove(pvVar1,pvVar10,sVar3);
        iVar7 = *(int *)(param_1 + 0x80) - *(int *)(param_1 + 0x84);
      }
      std::string::_M_append((string *)(param_1 + 0x70),(char *)((int)pvVar10 + iVar7),pcVar11);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar1,pvVar10,uVar9);
        pvVar1 = *(void **)(param_1 + 0x84);
        puVar6 = *(undefined1 **)(param_1 + 0x80);
      }
      if ((undefined1 *)((int)pvVar1 + uVar9) != puVar6) {
        *(undefined1 *)((int)pvVar1 + uVar9) = *puVar6;
        *(undefined1 **)(param_1 + 0x80) =
             (undefined1 *)((int)pvVar1 + uVar9) + (*(int *)(param_1 + 0x80) - (int)puVar6);
      }
    }
  }
  uVar2 = *(undefined4 *)(this + 0x88);
  uVar4 = *(undefined4 *)(this + 0xb4);
  *(undefined4 *)(param_1 + 0xac) = *(undefined4 *)(this + 0xac);
  *(undefined4 *)(param_1 + 0x88) = uVar2;
  *(undefined4 *)(param_1 + 0xb4) = uVar4;
  MMatrix::operator=((MMatrix *)(param_1 + 0xbc),(MMatrix *)(this + 0xbc));
  iVar7 = *(int *)(param_1 + 0x2c);
  uVar2 = *(undefined4 *)(this + 0x30);
  uVar4 = *(undefined4 *)(this + 0x38);
  if (iVar7 != 0) {
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
  }
  uVar5 = *(undefined4 *)(this + 0x40);
  uVar8 = *(undefined4 *)(this + 0x48);
  *(undefined4 *)(param_1 + 0x30) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar5;
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(this + 0x5c);
  *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(this + 0x60);
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)(this + 100);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(this + 0x68);
  if ((string *)(param_1 + 0x90) != (string *)(this + 0x90)) {
    pvVar10 = *(void **)(this + 0xa4);
    pcVar11 = *(char **)(this + 0xa0);
    puVar6 = *(undefined1 **)(param_1 + 0xa0);
    pvVar1 = *(void **)(param_1 + 0xa4);
    uVar9 = (int)pcVar11 - (int)pvVar10;
    sVar3 = (int)puVar6 - (int)pvVar1;
    if (sVar3 < uVar9) {
      iVar7 = 0;
      if (sVar3 != 0) {
        memmove(pvVar1,pvVar10,sVar3);
        iVar7 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0xa4);
      }
      std::string::_M_append((string *)(param_1 + 0x90),(char *)((int)pvVar10 + iVar7),pcVar11);
    }
    else {
      if (uVar9 != 0) {
        memmove(pvVar1,pvVar10,uVar9);
        pvVar1 = *(void **)(param_1 + 0xa4);
        puVar6 = *(undefined1 **)(param_1 + 0xa0);
      }
      if ((undefined1 *)((int)pvVar1 + uVar9) != puVar6) {
        *(undefined1 *)((int)pvVar1 + uVar9) = *puVar6;
        *(undefined1 **)(param_1 + 0xa0) =
             (undefined1 *)((int)pvVar1 + uVar9) + (*(int *)(param_1 + 0xa0) - (int)puVar6);
      }
    }
  }
  uVar2 = *(undefined4 *)(this + 0xa8);
  uVar4 = *(undefined4 *)(this + 0xb8);
  *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(this + 0xb0);
  *(undefined4 *)(param_1 + 0xa8) = uVar2;
  *(undefined4 *)(param_1 + 0xb8) = uVar4;
  MMatrix::operator=((MMatrix *)(param_1 + 0xfc),(MMatrix *)(this + 0xfc));
  iVar7 = *(int *)(param_1 + 0x30);
  if (iVar7 != 0) {
    *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
  }
  return;
}

