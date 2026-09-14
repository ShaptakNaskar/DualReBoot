/* 00069e14 | STG::UPreference_Scene::SetValueByKey */

/* STG::UPreference_Scene::SetValueByKey(STG::UPreference_Scene::EPreferenceType,
   STG::UStringBase<char, int> const&, STG::UStringBase<char, int> const&) */

void __thiscall
STG::UPreference_Scene::SetValueByKey
          (UPreference_Scene *this,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  undefined1 *puVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  size_t sVar10;
  int *piVar11;
  uint uVar12;
  void *pvVar13;
  int *piVar14;
  uint uVar15;
  size_t sVar16;
  void *pvVar17;
  char *pcVar18;
  uint local_4c;
  int local_48;
  undefined1 *local_44 [4];
  undefined1 **local_34;
  undefined1 **local_30;
  int local_2c;
  
  piVar6 = *(int **)(DAT_0006a3d4 + 0x69e2c);
  local_2c = *piVar6;
  switch(param_2) {
  case 0:
    piVar11 = *(int **)(this + 4);
    piVar14 = piVar11 + *(int *)(this + 8) * 0x22;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x22;
        piVar7 = piVar7 + 0x22;
      } while (piVar11 < piVar14);
    }
    break;
  case 1:
    piVar11 = *(int **)(this + 0x5c);
    piVar14 = piVar11 + *(int *)(this + 0x60) * 0x23;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x23;
        piVar7 = piVar7 + 0x23;
      } while (piVar11 < piVar14);
    }
    break;
  case 2:
    piVar11 = *(int **)(this + 0xc);
    piVar14 = piVar11 + *(int *)(this + 0x10) * 0x22;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x22;
        piVar7 = piVar7 + 0x22;
      } while (piVar11 < piVar14);
    }
    break;
  case 3:
    piVar11 = *(int **)(this + 0x1c);
    piVar14 = piVar11 + *(int *)(this + 0x20) * 0x24;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x24;
        piVar7 = piVar7 + 0x24;
      } while (piVar11 < piVar14);
    }
    break;
  case 4:
    piVar11 = *(int **)(this + 0x44);
    piVar14 = piVar11 + *(int *)(this + 0x48) * 0x28;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x28;
        piVar7 = piVar7 + 0x28;
      } while (piVar11 < piVar14);
    }
    break;
  case 5:
    break;
  case 6:
    piVar11 = *(int **)(this + 0x2c);
    piVar14 = piVar11 + *(int *)(this + 0x30) * 0x26;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x26;
        piVar7 = piVar7 + 0x26;
      } while (piVar11 < piVar14);
    }
    break;
  case 7:
    uVar12 = *(uint *)(this + 0x34);
    uVar15 = *(int *)(this + 0x38) * 0x94 + uVar12;
    if (uVar12 < uVar15) {
      pvVar13 = *(void **)(param_3 + 0x18);
      puVar8 = (undefined4 *)(uVar12 + 0x1c);
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = puVar8[-1] - (int)*puVar8;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*puVar8,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10)) {
          if (uVar12 == 0) goto LAB_0006a374;
          pvVar17 = *(void **)(param_4 + 0x18);
          pvVar13 = *(void **)(param_4 + 0x14);
          sVar16 = (int)pvVar13 - (int)pvVar17;
          uVar15 = sVar16 + 1;
          iVar2 = *(int *)(DAT_0006a3d8 + 0x6a140);
          local_48 = iVar2 + 8;
          local_34 = local_44;
          local_30 = local_44;
          if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__stl_throw_length_error((char *)(DAT_0006a3dc + 0x6a34c));
          }
          if (0x10 < uVar15) {
            local_4c = uVar15;
            if (uVar15 < 0x81) {
              local_34 = (undefined1 **)std::__node_alloc::_M_allocate(&local_4c);
            }
            else {
              local_34 = operator_new(uVar15);
            }
            local_44[0] = (undefined1 *)((int)local_34 + local_4c);
          }
          local_30 = local_34;
          if (pvVar17 != pvVar13) {
            pvVar13 = memcpy(local_34,pvVar17,sVar16);
            local_34 = (undefined1 **)((int)pvVar13 + sVar16);
          }
          *(undefined1 *)local_34 = 0;
          iVar3 = UStringBase<char,int>::Trim((UStringBase<char,int> *)&local_48);
          iVar9 = *(int *)(uVar12 + 0x7c);
          if ((string *)(iVar9 + 4) != (string *)(iVar3 + 4)) {
            pvVar17 = *(void **)(iVar3 + 0x18);
            pcVar18 = *(char **)(iVar3 + 0x14);
            puVar5 = *(undefined1 **)(iVar9 + 0x14);
            pvVar13 = *(void **)(iVar9 + 0x18);
            uVar12 = (int)pcVar18 - (int)pvVar17;
            sVar16 = (int)puVar5 - (int)pvVar13;
            if (sVar16 < uVar12) {
              iVar3 = 0;
              if (sVar16 != 0) {
                memmove(pvVar13,pvVar17,sVar16);
                iVar3 = *(int *)(iVar9 + 0x14) - *(int *)(iVar9 + 0x18);
              }
              std::string::_M_append((string *)(iVar9 + 4),(char *)((int)pvVar17 + iVar3),pcVar18);
            }
            else {
              if (uVar12 != 0) {
                memmove(pvVar13,pvVar17,uVar12);
                pvVar13 = *(void **)(iVar9 + 0x18);
                puVar5 = *(undefined1 **)(iVar9 + 0x14);
              }
              if (puVar5 != (undefined1 *)((int)pvVar13 + uVar12)) {
                *(undefined1 *)((int)pvVar13 + uVar12) = *puVar5;
                *(undefined1 **)(iVar9 + 0x14) =
                     (undefined1 *)((int)pvVar13 + uVar12) + (*(int *)(iVar9 + 0x14) - (int)puVar5);
              }
            }
          }
          local_48 = iVar2 + 8;
          if ((local_30 == local_44) || (local_30 == (undefined1 **)0x0)) {
            uVar1 = 1;
          }
          else if ((uint)((int)local_44[0] - (int)local_30) < 0x81) {
            std::__node_alloc::_M_deallocate(local_30,(int)local_44[0] - (int)local_30);
            uVar1 = 1;
          }
          else {
            operator_delete(local_30);
            uVar1 = 1;
          }
          goto LAB_00069ed4;
        }
        uVar12 = uVar12 + 0x94;
        puVar8 = puVar8 + 0x25;
      } while (uVar12 < uVar15);
    }
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    piVar11 = *(int **)(this + 0x54);
    piVar14 = piVar11 + *(int *)(this + 0x58) * 0x22;
    if (piVar11 < piVar14) {
      pvVar13 = *(void **)(param_3 + 0x18);
      piVar7 = piVar11 + 7;
      sVar16 = *(int *)(param_3 + 0x14) - (int)pvVar13;
      do {
        sVar10 = piVar7[-1] - *piVar7;
        sVar4 = sVar10;
        if ((int)sVar16 <= (int)sVar10) {
          sVar4 = sVar16;
        }
        iVar2 = memcmp(pvVar13,(void *)*piVar7,sVar4);
        if (((iVar2 == 0) && ((int)sVar10 <= (int)sVar16)) && ((int)sVar16 <= (int)sVar10))
        goto LAB_00069f48;
        piVar11 = piVar11 + 0x22;
        piVar7 = piVar7 + 0x22;
      } while (piVar11 < piVar14);
    }
  }
  uVar1 = 0;
LAB_00069ed4:
  if (local_2c == *piVar6) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar1);
LAB_00069f48:
  if (piVar11 == (int *)0x0) {
LAB_0006a374:
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*piVar11 + 0x30))(piVar11,param_4);
  }
  goto LAB_00069ed4;
}

