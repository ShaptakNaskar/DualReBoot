/* 00062210 | STG::USerialize::Load */

/* STG::USerialize::Load(STG::FFileBase const*, STG::GEMaterial&) */

void STG::USerialize::Load(FFileBase *param_1,GEMaterial *param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int unaff_EBX;
  GEMaterial *local_e8;
  uint local_e4;
  uint local_e0 [4];
  undefined4 local_d0 [4];
  undefined4 local_c0 [2];
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  uint local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  MMatrix local_90 [64];
  UStringBase<char,int> local_50 [20];
  int local_3c;
  int local_38;
  UStringBase<char,int> local_34 [20];
  int local_20;
  uchar *local_1c;
  undefined4 local_18;
  int local_14;
  
  local_14 = 0x6221b;
  FUN_0002e044();
  local_14 = **(int **)(unaff_EBX + 0x39c1d);
  FFileBase::Read(param_1,(uchar *)&local_a4,4);
  uVar2 = local_a4;
  FFileBase::Read(param_1,(uchar *)&local_b8,4);
  FFileBase::Read(param_1,(uchar *)&local_b4,4);
  FFileBase::Read(param_1,(uchar *)&local_b0,4);
  *(undefined4 *)(param_2 + 0x13c) = local_b8;
  *(undefined4 *)(param_2 + 0x140) = local_b4;
  *(undefined4 *)(param_2 + 0x144) = local_b0;
  if (3 < uVar2) {
    Load(param_1,(GEColor *)(param_2 + 0x148));
  }
  FFileBase::Read(param_1,(uchar *)local_e0,4);
  if (local_e0[0] != 0) {
    local_e4 = 0;
    local_e8 = param_2;
    do {
      FFileBase::Read(param_1,(uchar *)&local_ac,4);
      FFileBase::Read(param_1,(uchar *)&local_a8,4);
      if (uVar2 < 5) {
        local_a4 = 0;
        Load(param_1,(GEColor *)&local_a0);
        UStringBase<char,int>::UStringBase(local_34);
LAB_0006237a:
        local_18 = 0xffffffff;
        UStringBase<char,int>::UStringBase(local_50);
        Load<char,int>(param_1,(UStringBase *)local_50);
        if (local_38 != local_3c) {
          UStringBase<char,int>::operator=(local_34,(UStringBase *)local_50);
          local_18 = UStringBaseHash_Internal(local_1c,local_20 - (int)local_1c);
        }
        UStringBase<char,int>::~UStringBase(local_50);
        if (uVar2 < 2) {
          local_d0[0] = 0;
          local_c0[0] = 0;
        }
        else {
          FFileBase::Read(param_1,(uchar *)local_d0,4);
          FFileBase::Read(param_1,(uchar *)local_c0,4);
          if (2 < uVar2) goto LAB_000624e2;
        }
        MMatrix::MakeIdentity(local_90);
      }
      else {
        FFileBase::Read(param_1,(uchar *)&local_a4,4);
        Load(param_1,(GEColor *)&local_a0);
        UStringBase<char,int>::UStringBase(local_34);
        local_18 = 0xffffffff;
        if (uVar2 == 5) goto LAB_0006237a;
        Load(param_1,(FFileHash *)local_34);
        FFileBase::Read(param_1,(uchar *)local_d0,4);
        FFileBase::Read(param_1,(uchar *)local_c0,4);
LAB_000624e2:
        Load(param_1,local_90);
      }
      if (local_e4 < 2) {
        *(undefined4 *)(local_e8 + 0x34) = local_ac;
        *(undefined4 *)(local_e8 + 0x3c) = local_a8;
        *(uint *)(local_e8 + 0x44) = local_a4;
        iVar3 = local_e4 + 4;
        *(undefined4 *)(param_2 + iVar3 * 0x10 + 0xc) = local_a0;
        *(undefined4 *)(param_2 + iVar3 * 0x10 + 0x10) = local_9c;
        *(undefined4 *)(param_2 + iVar3 * 0x10 + 0x14) = local_98;
        *(undefined4 *)(param_2 + iVar3 * 0x10 + 0x18) = local_94;
        UStringBase<char,int>::operator=
                  ((UStringBase<char,int> *)(param_2 + (local_e4 + 3) * 0x20 + 0xc),
                   (UStringBase *)local_34);
        *(undefined4 *)((UStringBase<char,int> *)(param_2 + (local_e4 + 3) * 0x20 + 0xc) + 0x1c) =
             local_18;
        *(undefined4 *)(local_e8 + 0xac) = local_d0[0];
        *(undefined4 *)(local_e8 + 0xb4) = local_c0[0];
        MMatrix::operator=((MMatrix *)(param_2 + local_e4 * 0x40 + 0xbc),local_90);
        piVar1 = *(int **)(local_e8 + 0x2c);
        if ((piVar1 != (int *)0x0) && (iVar3 = piVar1[1], piVar1[1] = iVar3 + -1, iVar3 == 1)) {
          (**(code **)(*piVar1 + 4))(piVar1);
        }
        *(undefined4 *)(local_e8 + 0x2c) = 0;
      }
      UStringBase<char,int>::~UStringBase(local_34);
      local_e4 = local_e4 + 1;
      local_e8 = local_e8 + 4;
    } while (local_e4 < local_e0[0]);
  }
  if (local_14 == **(int **)(unaff_EBX + 0x39c1d)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

