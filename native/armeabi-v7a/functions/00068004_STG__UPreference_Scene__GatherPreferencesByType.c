/* 00068004 | STG::UPreference_Scene::GatherPreferencesByType */

/* STG::UPreference_Scene::GatherPreferencesByType(STG::UPreference_Scene::EPreferenceType,
   STG::UArrayFixed<STG::UPreferenceBase const*, unsigned long>&) const */

int __thiscall
STG::UPreference_Scene::GatherPreferencesByType
          (UPreference_Scene *this,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  
  switch(param_2) {
  case 0:
    piVar5 = *(int **)(this + 4);
    piVar8 = piVar5 + *(int *)(this + 8) * 0x22;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x22;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x22;
      } while (piVar5 < piVar8);
    }
    break;
  case 1:
    piVar5 = *(int **)(this + 0x5c);
    piVar8 = piVar5 + *(int *)(this + 0x60) * 0x23;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x23;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x23;
      } while (piVar5 < piVar8);
    }
    break;
  case 2:
    piVar5 = *(int **)(this + 0xc);
    piVar8 = piVar5 + *(int *)(this + 0x10) * 0x22;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x22;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x22;
      } while (piVar5 < piVar8);
    }
    break;
  case 3:
    piVar5 = *(int **)(this + 0x1c);
    piVar8 = piVar5 + *(int *)(this + 0x20) * 0x24;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x24;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x24;
      } while (piVar5 < piVar8);
    }
    break;
  case 4:
    piVar5 = *(int **)(this + 0x44);
    piVar8 = piVar5 + *(int *)(this + 0x48) * 0x28;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x28;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x28;
      } while (piVar5 < piVar8);
    }
    break;
  case 5:
    piVar5 = *(int **)(this + 0x24);
    piVar8 = piVar5 + *(int *)(this + 0x28) * 0x24;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x24;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x24;
      } while (piVar5 < piVar8);
    }
    break;
  case 6:
    piVar5 = *(int **)(this + 0x2c);
    piVar8 = piVar5 + *(int *)(this + 0x30) * 0x26;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x26;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x26;
      } while (piVar5 < piVar8);
    }
    break;
  case 7:
    piVar5 = *(int **)(this + 0x34);
    piVar8 = piVar5 + *(int *)(this + 0x38) * 0x25;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x25;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x25;
      } while (piVar5 < piVar8);
    }
    break;
  case 8:
    piVar5 = *(int **)(this + 0x3c);
    piVar8 = piVar5 + *(int *)(this + 0x40) * 0x22;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x22;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x22;
      } while (piVar5 < piVar8);
    }
    break;
  case 9:
    piVar5 = *(int **)(this + 0x4c);
    piVar8 = piVar5 + *(int *)(this + 0x50) * 0x23;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x23;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x23;
      } while (piVar5 < piVar8);
    }
    break;
  case 10:
    piVar5 = *(int **)(this + 0x54);
    piVar8 = piVar5 + *(int *)(this + 0x58) * 0x22;
    if (piVar5 < piVar8) {
      iVar4 = 0;
      piVar7 = piVar5;
      do {
        piVar6 = piVar7 + 0x22;
        iVar1 = (**(code **)(*piVar7 + 4))(piVar7);
        if (iVar1 != 0) {
          iVar4 = iVar4 + 1;
        }
        piVar7 = piVar6;
      } while (piVar6 < piVar8);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 != param_3[1]) {
      if (param_3[1] != 0) {
        if ((void *)*param_3 != (void *)0x0) {
          operator_delete__((void *)*param_3);
        }
        *param_3 = 0;
      }
      param_3[1] = iVar4;
      if (iVar4 != 0) {
        pvVar3 = operator_new__(iVar4 << 2);
        *param_3 = (int)pvVar3;
      }
    }
    if (piVar5 < piVar8) {
      iVar1 = 0;
      do {
        iVar2 = (**(code **)(*piVar5 + 4))(piVar5);
        if (iVar2 != 0) {
          *(int **)(*param_3 + iVar1 * 4) = piVar5;
          iVar1 = iVar1 + 1;
        }
        piVar5 = piVar5 + 0x22;
      } while (piVar5 < piVar8);
    }
    break;
  default:
    iVar4 = 0;
    if (param_3[1] != 0) {
      if ((void *)*param_3 != (void *)0x0) {
        operator_delete__((void *)*param_3);
      }
      iVar4 = 0;
      *param_3 = 0;
      param_3[1] = 0;
    }
  }
  return iVar4;
}

