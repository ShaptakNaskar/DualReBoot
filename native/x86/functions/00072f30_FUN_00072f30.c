/* 00072f30 | FUN_00072f30 */

void FUN_00072f30(void)

{
  int *piVar1;
  size_t sVar2;
  uint uVar3;
  int *__dest;
  void *pvVar4;
  size_t __n;
  char *__s;
  int unaff_EBX;
  undefined8 uVar5;
  uint local_20 [4];
  
  uVar5 = FUN_0002e044();
  __s = (char *)((ulonglong)uVar5 >> 0x20);
  piVar1 = (int *)uVar5;
  __dest = piVar1 + 1;
  *piVar1 = *(int *)((int)DWORD_ARRAY_00028b54 + unaff_EBX + 0x3a2) + 8;
  piVar1[5] = (int)__dest;
  piVar1[6] = (int)__dest;
  sVar2 = strlen(__s);
  __n = (int)(__s + sVar2) - (int)__s;
  uVar3 = __n + 1;
  if (uVar3 != 0) {
    if (0x10 < uVar3) {
      local_20[0] = uVar3;
      if (uVar3 < 0x81) {
        __dest = (int *)std::__node_alloc::_M_allocate(local_20);
      }
      else {
        __dest = operator_new(uVar3);
      }
      piVar1[6] = (int)__dest;
      piVar1[5] = (int)__dest;
      piVar1[1] = (int)(local_20[0] + (int)__dest);
    }
    if (__s != __s + sVar2) {
      pvVar4 = memcpy(__dest,__s,__n);
      __dest = (int *)((int)pvVar4 + __n);
    }
    piVar1[5] = (int)__dest;
    *(undefined1 *)__dest = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__stl_throw_length_error((char *)((int)&__DT_SYMTAB[0x42b].st_name + unaff_EBX + 2));
}

