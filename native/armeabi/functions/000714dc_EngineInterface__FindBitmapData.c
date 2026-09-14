/* 000714dc | EngineInterface::FindBitmapData */

/* EngineInterface::FindBitmapData(STG::UStringBase<char, int> const&) const */

void __thiscall EngineInterface::FindBitmapData(EngineInterface *this,UStringBase *param_1)

{
  byte **ppbVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  byte **ppbVar7;
  byte **ppbVar8;
  uint uVar9;
  EngineBitmapData *this_00;
  size_t sVar10;
  void *pvVar11;
  byte **ppbVar12;
  void *pvVar13;
  size_t sVar14;
  int iVar15;
  size_t sVar16;
  uint local_68;
  int local_64;
  byte *local_60 [4];
  byte **local_50;
  byte **local_4c;
  int local_48;
  byte *local_44 [4];
  byte **local_34;
  byte **local_30;
  int local_2c;
  
  iVar15 = DAT_0007181c + 0x714f4;
  piVar5 = *(int **)(iVar15 + DAT_00071820);
  uVar6 = *(uint *)(this + 0x18);
  local_2c = *piVar5;
  if (uVar6 == 0) {
    this_00 = (EngineBitmapData *)0x0;
  }
  else {
    uVar9 = 0;
    do {
      this_00 = *(EngineBitmapData **)(*(int *)(this + 0x10) + uVar9 * 4);
      if (this_00 != (EngineBitmapData *)0x0) {
        iVar2 = EngineBitmapData::GetIsValid(this_00);
        if (iVar2 != 0) {
          local_50 = local_60;
          iVar2 = *(int *)(iVar15 + DAT_00071824);
          pvVar11 = *(void **)(this_00 + 0x18);
          pvVar13 = *(void **)(this_00 + 0x14);
          local_64 = iVar2 + 8;
          sVar10 = (int)pvVar13 - (int)pvVar11;
          uVar6 = sVar10 + 1;
          local_4c = local_50;
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__stl_throw_length_error((char *)(DAT_0007182c + 0x717d8));
          }
          if (0x10 < uVar6) {
            local_68 = uVar6;
            if (uVar6 < 0x81) {
              local_4c = (byte **)std::__node_alloc::_M_allocate(&local_68);
            }
            else {
              local_4c = operator_new(uVar6);
            }
            local_60[0] = (byte *)((int)local_4c + local_68);
          }
          local_50 = local_4c;
          if (pvVar11 != pvVar13) {
            pvVar11 = memcpy(local_4c,pvVar11,sVar10);
            local_50 = (byte **)((int)pvVar11 + sVar10);
          }
          *(byte *)local_50 = 0;
          local_34 = local_44;
          pvVar11 = *(void **)(param_1 + 0x18);
          pvVar13 = *(void **)(param_1 + 0x14);
          local_48 = iVar2 + 8;
          sVar10 = (int)pvVar13 - (int)pvVar11;
          uVar6 = sVar10 + 1;
          local_30 = local_34;
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__stl_throw_length_error((char *)(DAT_00071830 + 0x717e4));
          }
          if (0x10 < uVar6) {
            local_68 = uVar6;
            if (uVar6 < 0x81) {
              local_30 = (byte **)std::__node_alloc::_M_allocate(&local_68);
            }
            else {
              local_30 = operator_new(uVar6);
            }
            local_44[0] = (byte *)((int)local_30 + local_68);
          }
          local_34 = local_30;
          if (pvVar11 != pvVar13) {
            pvVar11 = memcpy(local_30,pvVar11,sVar10);
            local_34 = (byte **)((int)pvVar11 + sVar10);
          }
          ppbVar12 = local_4c;
          *(byte *)local_34 = 0;
          ppbVar1 = local_30;
          if (local_4c != local_50) {
            piVar4 = *(int **)(iVar15 + DAT_00071828);
            ppbVar7 = local_4c;
            do {
              ppbVar8 = (byte **)((int)ppbVar7 + 1);
              *(byte *)ppbVar7 = (byte)*(undefined2 *)(*piVar4 + (uint)*(byte *)ppbVar7 * 2 + 2);
              ppbVar7 = ppbVar8;
            } while (ppbVar8 != local_50);
          }
          if (local_30 != local_34) {
            piVar4 = *(int **)(iVar15 + DAT_00071828);
            ppbVar7 = local_30;
            do {
              ppbVar8 = (byte **)((int)ppbVar7 + 1);
              *(byte *)ppbVar7 = (byte)*(undefined2 *)(*piVar4 + (uint)*(byte *)ppbVar7 * 2 + 2);
              ppbVar7 = ppbVar8;
            } while (ppbVar8 != local_34);
          }
          sVar16 = (int)local_34 - (int)local_30;
          sVar14 = (int)local_50 - (int)local_4c;
          sVar10 = sVar16;
          if ((int)sVar14 <= (int)sVar16) {
            sVar10 = sVar14;
          }
          iVar3 = memcmp(local_4c,local_30,sVar10);
          if (iVar3 == 0) {
            if ((int)sVar14 < (int)sVar16) {
              iVar3 = -1;
            }
            else if ((int)sVar16 < (int)sVar14) {
              iVar3 = 1;
            }
            else {
              iVar3 = 0;
            }
          }
          local_48 = iVar2 + 8;
          if ((ppbVar1 != local_44) && (ppbVar1 != (byte **)0x0)) {
            if ((uint)((int)local_44[0] - (int)ppbVar1) < 0x81) {
              std::__node_alloc::_M_deallocate(ppbVar1,(int)local_44[0] - (int)ppbVar1);
              ppbVar12 = local_4c;
            }
            else {
              operator_delete(ppbVar1);
              ppbVar12 = local_4c;
            }
          }
          local_64 = iVar2 + 8;
          if ((ppbVar12 != local_60) && (ppbVar12 != (byte **)0x0)) {
            if ((uint)((int)local_60[0] - (int)ppbVar12) < 0x81) {
              std::__node_alloc::_M_deallocate(ppbVar12,(int)local_60[0] - (int)ppbVar12);
            }
            else {
              operator_delete(ppbVar12);
            }
          }
          if (iVar3 == 0) goto LAB_000717ac;
        }
        uVar6 = *(uint *)(this + 0x18);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < uVar6);
    this_00 = (EngineBitmapData *)0x0;
  }
LAB_000717ac:
  if (local_2c == *piVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(this_00);
}

