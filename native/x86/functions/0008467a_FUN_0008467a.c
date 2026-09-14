/* 0008467a | FUN_0008467a */

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0008467a(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  int unaff_EBX;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  byte *pbVar10;
  uint local_144;
  undefined4 local_140;
  int local_130;
  uint local_12c;
  uint local_128;
  uint local_124 [68];
  undefined4 uStack_14;
  
  uStack_14 = 0x8468a;
  uVar9 = FUN_0002e044();
  local_124[2] = param_2;
  pbVar4 = (byte *)uVar9;
  uVar7 = 1;
LAB_00084c67:
  pbVar10 = pbVar4;
  if ((byte *)((ulonglong)uVar9 >> 0x20) <= pbVar10) {
    if (uVar7 != 0) {
      return local_124[uVar7 + 1];
    }
LAB_00084c77:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar1 = *pbVar10;
  pbVar4 = pbVar10 + 1;
  local_144 = (uint)bVar1;
  if (0x20 < bVar1) {
    if (0x4f < bVar1) {
      if (bVar1 == 0x90) {
        pbVar4 = (byte *)FUN_00084210();
        iVar3 = local_130;
        pbVar10 = pbVar4;
LAB_000848fc:
        local_144 = _Unwind_GetGR(param_1,iVar3,pbVar10,pbVar10);
        goto LAB_00084c52;
      }
      if (bVar1 < 0x91) {
        if (0x6f < bVar1) {
          pbVar4 = (byte *)FUN_00084241();
          iVar3 = _Unwind_GetGR(param_1,local_144 - 0x70,pbVar4,pbVar4);
          local_144 = iVar3 + local_128;
          goto LAB_00084c52;
        }
        iVar3 = local_144 - 0x50;
        goto LAB_000848fc;
      }
      if (bVar1 == 0x94) goto LAB_00084a85;
      if (0x94 < bVar1) goto LAB_00084814;
      if (bVar1 == 0x92) {
        FUN_00084210();
        pbVar4 = (byte *)FUN_00084241();
        iVar3 = _Unwind_GetGR(param_1,local_130,pbVar4,pbVar4);
        local_144 = iVar3 + local_128;
        goto LAB_00084c52;
      }
      goto LAB_00084c77;
    }
    local_144 = local_144 - 0x30;
    if (0x2f < bVar1) goto LAB_00084c52;
    if (bVar1 < 0x28) {
      if ((bVar1 < 0x24) && (0x22 < bVar1)) goto LAB_00084a85;
    }
    else {
      if (0x2e < bVar1) {
        local_128 = (uint)*(short *)(pbVar10 + 1);
        pbVar4 = pbVar10 + local_128 + 3;
        goto LAB_00084c67;
      }
      if (bVar1 < 0x29) {
        if (uVar7 == 0) goto LAB_00084c77;
        uVar6 = uVar7 - 1;
        local_128 = (uint)*(short *)(pbVar10 + 1);
        uVar5 = uVar7 + 1;
        pbVar4 = pbVar10 + 3;
        uVar7 = uVar6;
        if (local_124[uVar5] != 0) {
          pbVar4 = pbVar10 + 3 + local_128;
        }
        goto LAB_00084c67;
      }
    }
LAB_00084b6c:
    if ((1 < (int)uVar7) && ((byte)(bVar1 - 0x1a) < 0x15)) {
                    /* WARNING: Could not recover jumptable at 0x00084ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar5 = (*(code *)("_ZNK3STG12FFileManager8OpenFileERKNS_9FFileHashENS_9FFileBase7EAccessE" +
                        *(int *)(unaff_EBX + 0x4b4e + (uint)(byte)(bVar1 - 0x1a) * 4) +
                        unaff_EBX + 6))();
      return uVar5;
    }
    goto LAB_00084c77;
  }
  if (bVar1 < 0x1f) {
    if (bVar1 == 0x10) {
      pbVar4 = (byte *)FUN_00084210();
      local_144 = local_12c;
    }
    else if (bVar1 < 0x11) {
      if (bVar1 != 10) {
        if (bVar1 < 0xb) {
          if (bVar1 == 6) goto LAB_00084a85;
          if (6 < bVar1) {
            pbVar4 = pbVar10 + 2;
            if (bVar1 == 8) {
              local_144 = (uint)pbVar10[1];
              goto LAB_00084c52;
            }
            if (bVar1 != 9) goto LAB_00084c77;
            local_144 = (uint)(char)pbVar10[1];
            goto LAB_00084c52;
          }
          bVar8 = bVar1 == 3;
LAB_0008471c:
          if (!bVar8) goto LAB_00084c77;
          local_144 = *(uint *)(pbVar10 + 1);
        }
        else {
          if (bVar1 != 0xd) {
            if (bVar1 < 0xe) {
              if (bVar1 != 0xb) {
                bVar8 = bVar1 == 0xc;
                goto LAB_0008471c;
              }
              local_144 = (uint)*(short *)(pbVar10 + 1);
              goto LAB_0008487d;
            }
            pbVar4 = pbVar10 + 9;
            if ((bVar1 == 0xe) || (bVar1 == 0xf)) {
              local_144 = *(uint *)(pbVar10 + 1);
              goto LAB_00084c52;
            }
            goto LAB_00084c77;
          }
          local_144 = *(uint *)(pbVar10 + 1);
        }
        pbVar4 = pbVar10 + 5;
        goto LAB_00084c52;
      }
      local_144 = (uint)*(ushort *)(pbVar10 + 1);
LAB_0008487d:
      pbVar4 = pbVar10 + 3;
    }
    else if (bVar1 == 0x15) {
      local_128 = (uint)pbVar10[1];
      if ((int)(uVar7 - 1) <= (int)local_128) goto LAB_00084c77;
      pbVar4 = pbVar10 + 2;
      local_144 = local_124[((uVar7 - 1) - local_128) + 2];
    }
    else {
      if (0x15 < bVar1) {
        if (bVar1 == 0x19) goto LAB_00084a85;
        if (0x19 < bVar1) goto LAB_00084b6c;
        if (bVar1 == 0x16) {
          if ((int)uVar7 < 2) goto LAB_00084c77;
          iVar3 = uVar7 - 2;
          local_140 = local_124[uVar7 + 1];
          local_124[uVar7 + 1] = local_124[uVar7];
        }
        else {
          if ((bVar1 != 0x17) || ((int)uVar7 < 3)) goto LAB_00084c77;
          local_140 = local_124[uVar7 + 1];
          iVar3 = uVar7 - 3;
          local_124[uVar7 + 1] = local_124[uVar7];
          local_124[uVar7] = local_124[uVar7 + 0xffffffff];
        }
        local_124[iVar3 + 2] = local_140;
        goto LAB_00084c67;
      }
      if (bVar1 == 0x12) {
        if (uVar7 == 0) goto LAB_00084c77;
        local_144 = local_124[uVar7 + 1];
      }
      else if (bVar1 < 0x12) {
        pbVar4 = (byte *)FUN_00084241();
        local_144 = local_124[0];
      }
      else {
        if (bVar1 == 0x13) {
          if (uVar7 == 0) goto LAB_00084c77;
          uVar7 = uVar7 - 1;
          goto LAB_00084c67;
        }
        if ((bVar1 != 0x14) || ((int)uVar7 < 2)) goto LAB_00084c77;
        local_144 = local_124[uVar7];
      }
    }
  }
  else {
LAB_00084a85:
    if (uVar7 == 0) goto LAB_00084c77;
    uVar6 = uVar7 - 1;
    puVar2 = (uint *)local_124[uVar7 + 1];
    uVar7 = uVar6;
    if (bVar1 == 0x1f) {
      local_144 = -(int)puVar2;
    }
    else if (bVar1 < 0x20) {
      if (bVar1 == 6) {
LAB_00084b09:
        local_144 = *puVar2;
      }
      else {
        if (bVar1 != 0x19) goto LAB_00084c77;
        local_144 = ((uint)puVar2 ^ (int)puVar2 >> 0x1f) - ((int)puVar2 >> 0x1f);
      }
    }
    else if (bVar1 == 0x23) {
      pbVar4 = (byte *)FUN_00084210();
      local_144 = (int)puVar2 + local_12c;
    }
    else if (bVar1 == 0x94) {
      pbVar4 = pbVar10 + 2;
      bVar1 = pbVar10[1];
      if (bVar1 == 2) {
        local_144 = (uint)(ushort)*puVar2;
      }
      else {
        if (2 < bVar1) {
          if ((bVar1 == 4) || (bVar1 == 8)) goto LAB_00084b09;
          goto LAB_00084c77;
        }
        if (bVar1 != 1) goto LAB_00084c77;
        local_144 = (uint)(byte)*puVar2;
      }
    }
    else {
      if (bVar1 != 0x20) goto LAB_00084c77;
      local_144 = ~(uint)puVar2;
    }
  }
  goto LAB_00084c52;
LAB_00084814:
  if (bVar1 == 0x96) goto LAB_00084c67;
  if (bVar1 != 0xf1) goto LAB_00084c77;
  pbVar4 = (byte *)FUN_00084570(pbVar10 + 2,local_124 + 1,pbVar10,pbVar10);
  local_144 = local_124[1];
LAB_00084c52:
  if (0x3f < uVar7) goto LAB_00084c77;
  local_124[uVar7 + 2] = local_144;
  uVar7 = uVar7 + 1;
  goto LAB_00084c67;
}

