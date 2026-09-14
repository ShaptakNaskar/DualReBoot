/* 000709a4 | STG::UPreference_TimeOfDay_Auto::Initialize */

/* STG::UPreference_TimeOfDay_Auto::Initialize(STG::UPreference_TimeOfDay&) */

void __thiscall
STG::UPreference_TimeOfDay_Auto::Initialize
          (UPreference_TimeOfDay_Auto *this,UPreference_TimeOfDay *param_1)

{
  void *pvVar1;
  size_t __n;
  int iVar2;
  undefined1 *puVar3;
  uint __n_00;
  int iVar4;
  void *__src;
  int *piVar5;
  char *pcVar6;
  uint local_84;
  int local_80;
  int local_7c [4];
  int *local_6c;
  int *local_68;
  int local_64;
  int local_60;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55 [5];
  undefined1 *local_50;
  int *local_4c;
  int local_48;
  int local_44 [4];
  int *local_34;
  int *local_30;
  int local_2c;
  
  local_84 = 0x16;
  piVar5 = *(int **)(DAT_00070ca0 + 0x709d4);
  local_2c = *piVar5;
  iVar4 = *(int *)(DAT_00070ca4 + 0x709e0);
  *(UPreference_TimeOfDay **)(this + 0x88) = param_1;
  local_6c = local_7c;
  local_68 = local_7c;
  local_6c = (int *)std::__node_alloc::_M_allocate(&local_84);
  local_7c[0] = (int)local_6c + local_84;
  local_68 = local_6c;
  pvVar1 = memcpy(local_6c,(void *)(DAT_00070ca8 + 0x70a24),0x15);
  iVar2 = DAT_00070cac;
  local_6c = (int *)((int)pvVar1 + 0x15);
  *(undefined1 *)((int)pvVar1 + 0x15) = 0;
  local_60 = *(int *)(iVar2 + 0x70a5c);
  local_5c = *(undefined4 *)(iVar2 + 0x70a60);
  local_56 = (undefined1)((uint)*(undefined4 *)(iVar2 + 0x70a64) >> 0x10);
  local_50 = local_55;
  local_58 = (undefined2)*(undefined4 *)(iVar2 + 0x70a64);
  local_34 = local_44;
  local_55[0] = 0;
  local_84 = 0x4c;
  local_64 = iVar4 + 8;
  local_4c = &local_60;
  local_30 = local_34;
  local_34 = (int *)std::__node_alloc::_M_allocate(&local_84);
  local_44[0] = (int)local_34 + local_84;
  local_30 = local_34;
  pvVar1 = memcpy(local_34,(void *)(DAT_00070cb0 + 0x70ad0),0x4b);
  local_34 = (int *)((int)pvVar1 + 0x4b);
  *(undefined1 *)((int)pvVar1 + 0x4b) = 0;
  *(undefined4 *)(this + 0x80) = 2;
  UPreferenceBase::Initialize
            ((UPreferenceBase *)this,(UStringBase *)&local_80,(UStringBase *)&local_64,
             (UStringBase *)&local_48);
  if (*(uint *)(this + 0x80) == 0) {
    puVar3 = *(undefined1 **)(this + 0x7c);
  }
  else {
    puVar3 = operator_new__(*(uint *)(this + 0x80));
    *(undefined1 **)(this + 0x7c) = puVar3;
  }
  local_48 = iVar4 + 8;
  *puVar3 = 0;
  puVar3[1] = 1;
  if ((local_30 != local_44) && (local_30 != (int *)0x0)) {
    if ((uint)(local_44[0] - (int)local_30) < 0x81) {
      std::__node_alloc::_M_deallocate(local_30,local_44[0] - (int)local_30);
    }
    else {
      operator_delete(local_30);
    }
  }
  local_64 = iVar4 + 8;
  if ((local_4c != &local_60) && (local_4c != (int *)0x0)) {
    if ((uint)(local_60 - (int)local_4c) < 0x81) {
      std::__node_alloc::_M_deallocate(local_4c,local_60 - (int)local_4c);
    }
    else {
      operator_delete(local_4c);
    }
  }
  local_80 = iVar4 + 8;
  if ((local_68 != local_7c) && (local_68 != (int *)0x0)) {
    if ((uint)(local_7c[0] - (int)local_68) < 0x81) {
      std::__node_alloc::_M_deallocate(local_68,local_7c[0] - (int)local_68);
    }
    else {
      operator_delete(local_68);
    }
  }
  if ((string *)(param_1 + 0x5c) != (string *)(this + 8)) {
    __src = *(void **)(this + 0x1c);
    pcVar6 = *(char **)(this + 0x18);
    puVar3 = *(undefined1 **)(param_1 + 0x6c);
    pvVar1 = *(void **)(param_1 + 0x70);
    __n_00 = (int)pcVar6 - (int)__src;
    __n = (int)puVar3 - (int)pvVar1;
    if (__n < __n_00) {
      iVar2 = 0;
      if (__n != 0) {
        memmove(pvVar1,__src,__n);
        iVar2 = *(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x70);
      }
      std::string::_M_append((string *)(param_1 + 0x5c),(char *)((int)__src + iVar2),pcVar6);
    }
    else {
      if (__n_00 != 0) {
        memmove(pvVar1,__src,__n_00);
        pvVar1 = *(void **)(param_1 + 0x70);
        puVar3 = *(undefined1 **)(param_1 + 0x6c);
      }
      if ((undefined1 *)((int)pvVar1 + __n_00) != puVar3) {
        *(undefined1 *)((int)pvVar1 + __n_00) = *puVar3;
        *(undefined1 **)(param_1 + 0x6c) =
             (undefined1 *)((int)pvVar1 + __n_00) + (*(int *)(param_1 + 0x6c) - (int)puVar3);
      }
    }
  }
  if (local_2c != *piVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

