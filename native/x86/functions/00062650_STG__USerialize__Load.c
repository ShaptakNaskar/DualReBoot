/* 00062650 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEModel&) */

void STG::USerialize::Load(FFileBase *param_1,GEModel *param_2)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  ulong local_20;
  ulong local_1c;
  ulong local_18;
  uint local_14;
  
  local_14 = 0x6265b;
  FUN_0002e044();
  FFileBase::Read(param_1,(uchar *)&local_14,4);
  uVar2 = local_14;
  FFileBase::Read(param_1,(uchar *)&local_20,4);
  FFileBase::Read(param_1,(uchar *)&local_1c,4);
  local_18 = 1;
  if (0xd < uVar2) {
    FFileBase::Read(param_1,(uchar *)&local_18,4);
  }
  GEModel::Initialize(param_2,local_1c,local_18,local_20);
  if (local_18 != 0) {
    uVar3 = 0;
    do {
      Load(param_1,*(GEVertexBuffer **)(*(int *)(param_2 + 0x7c) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_18);
  }
  if (local_20 != 0) {
    uVar3 = 0;
    do {
      Load(param_1,*(GEIndexBuffer **)(*(int *)(param_2 + 0x80) + uVar3 * 4));
      Load(param_1,*(GEMaterial **)(*(int *)(param_2 + 0x84) + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_20);
  }
  if (uVar2 < 2) {
LAB_00062998:
    if (0xe < uVar2) goto LAB_00062852;
    if (param_2[0xa4] != (GEModel)0x0) {
      fVar1 = *(float *)("_ZNK3STG17UPreference_Scene13ReflectToFileEPKc" + unaff_EBX + 0x29);
      param_2[0xb0] = (GEModel)0x1;
      *(undefined4 *)(param_2 + 0xac) = 0x3f800000;
      *(float *)(param_2 + 0xa8) = fVar1 * *(float *)(param_2 + 0xa0);
    }
    if (10 < uVar2) goto LAB_0006287e;
LAB_000629b7:
    if ((3 < uVar2) && (Load(param_1,(GEColor *)(param_2 + 0x88)), 4 < uVar2)) goto LAB_000628e1;
  }
  else {
    Load(param_1,(MVector3 *)(param_2 + 0x54));
    Load(param_1,(MVector3 *)(param_2 + 0x60));
    Load(param_1,(MVector3 *)(param_2 + 0x6c));
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x78),4);
    if ((((uVar2 == 2) || (FFileBase::Read(param_1,(uchar *)(param_2 + 0x9c),1), uVar2 < 7)) ||
        (FFileBase::Read(param_1,(uchar *)(param_2 + 0xa4),1), uVar2 < 10)) ||
       (FFileBase::Read(param_1,(uchar *)(param_2 + 0xa0),4), uVar2 < 0x10)) goto LAB_00062998;
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xa5),1);
LAB_00062852:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xb0),1);
    Load(param_1,(MVector2 *)(param_2 + 0xa8));
LAB_0006287e:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc0),1);
    Load(param_1,(MVector3 *)(param_2 + 0xb4));
    if (uVar2 < 0xc) goto LAB_000629b7;
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc1),1);
    Load(param_1,(GEColor *)(param_2 + 0x88));
LAB_000628e1:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x98),4);
    if (8 < uVar2) {
      FFileBase::Read(param_1,(uchar *)(param_2 + 0x9d),1);
      goto LAB_00062920;
    }
  }
  if (uVar2 < 6) {
    return;
  }
LAB_00062920:
  Load<char,int>(param_1,(UStringBase *)(param_2 + 0x38));
  if (7 < uVar2) {
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc4),1);
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc5),1);
    if (uVar2 < 0xd) {
      FFileBase::Read(param_1,(uchar *)&local_14,4);
      return;
    }
  }
  return;
}

