/* 0005a9d8 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEModel&) */

void STG::USerialize::Load(FFileBase *param_1,GEModel *param_2)

{
  int iVar1;
  uint uVar2;
  float fVar3;
  ulong local_28;
  ulong local_24;
  ulong local_20;
  uint local_1c [2];
  
  FFileBase::Read(param_1,(uchar *)local_1c,4);
  FFileBase::Read(param_1,(uchar *)&local_28,4);
  FFileBase::Read(param_1,(uchar *)&local_24,4);
  local_20 = 1;
  if (0xd < local_1c[0]) {
    FFileBase::Read(param_1,(uchar *)&local_20,4);
  }
  GEModel::Initialize(param_2,local_24,local_20,local_28);
  if (local_20 != 0) {
    uVar2 = 0;
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      Load(param_1,*(GEVertexBuffer **)(*(int *)(param_2 + 0x7c) + iVar1));
    } while (uVar2 < local_20);
  }
  if (local_28 != 0) {
    uVar2 = 0;
    do {
      Load(param_1,*(GEIndexBuffer **)(*(int *)(param_2 + 0x80) + uVar2 * 4));
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      Load(param_1,*(GEMaterial **)(*(int *)(param_2 + 0x84) + iVar1));
    } while (uVar2 < local_28);
  }
  if (local_1c[0] < 2) {
LAB_0005ac18:
    if (0xe < local_1c[0]) goto LAB_0005ab44;
    if (param_2[0xa4] != (GEModel)0x0) {
      fVar3 = *(float *)(param_2 + 0xa0) * DAT_0005aca0;
      param_2[0xb0] = (GEModel)0x1;
      *(undefined4 *)(param_2 + 0xac) = 0x3f800000;
      *(float *)(param_2 + 0xa8) = fVar3;
    }
    if (10 < local_1c[0]) goto LAB_0005ab60;
LAB_0005ac34:
    if ((3 < local_1c[0]) && (Load(param_1,(GEColor *)(param_2 + 0x88)), 4 < local_1c[0]))
    goto LAB_0005aba0;
  }
  else {
    Load(param_1,(MVector3 *)(param_2 + 0x54));
    Load(param_1,(MVector3 *)(param_2 + 0x60));
    Load(param_1,(MVector3 *)(param_2 + 0x6c));
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x78),4);
    if ((((local_1c[0] == 2) ||
         (FFileBase::Read(param_1,(uchar *)(param_2 + 0x9c),1), local_1c[0] < 7)) ||
        (FFileBase::Read(param_1,(uchar *)(param_2 + 0xa4),1), local_1c[0] < 10)) ||
       (FFileBase::Read(param_1,(uchar *)(param_2 + 0xa0),4), local_1c[0] < 0x10))
    goto LAB_0005ac18;
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xa5),1);
LAB_0005ab44:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xb0),1);
    Load(param_1,(MVector2 *)(param_2 + 0xa8));
LAB_0005ab60:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc0),1);
    Load(param_1,(MVector3 *)(param_2 + 0xb4));
    if (local_1c[0] < 0xc) goto LAB_0005ac34;
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc1),1);
    Load(param_1,(GEColor *)(param_2 + 0x88));
LAB_0005aba0:
    FFileBase::Read(param_1,(uchar *)(param_2 + 0x98),4);
    if (8 < local_1c[0]) {
      FFileBase::Read(param_1,(uchar *)(param_2 + 0x9d),1);
      goto LAB_0005abc8;
    }
  }
  if (local_1c[0] < 6) {
    return;
  }
LAB_0005abc8:
  Load<char,int>(param_1,(UStringBase *)(param_2 + 0x38));
  if (7 < local_1c[0]) {
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc4),1);
    FFileBase::Read(param_1,(uchar *)(param_2 + 0xc5),1);
    if (local_1c[0] < 0xd) {
      FFileBase::Read(param_1,(uchar *)local_1c,4);
    }
  }
  return;
}

