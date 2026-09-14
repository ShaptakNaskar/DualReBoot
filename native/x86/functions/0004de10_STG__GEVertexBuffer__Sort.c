/* 0004de10 | STG::GEVertexBuffer::Sort */

/* STG::GEVertexBuffer::Sort(STG::GEIndexBuffer**, unsigned long, unsigned long*&) */

void __thiscall
STG::GEVertexBuffer::Sort
          (GEVertexBuffer *this,GEIndexBuffer **param_1,ulong param_2,ulong **param_3)

{
  ushort *puVar1;
  int iVar2;
  GEIndexBuffer *pGVar3;
  size_t __n;
  void *__s;
  ulong *puVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  int local_38;
  uint local_34;
  ulong local_30;
  ulong local_28;
  
  FUN_0002e044();
  __s = operator_new__(*(int *)(this + 0xc) * *(int *)(this + 0x10));
  memset(__s,0,*(int *)(this + 0xc) * *(int *)(this + 0x10));
  puVar4 = operator_new__(*(int *)(this + 0x10) << 2);
  iVar2 = *(int *)(this + 0x10);
  *param_3 = puVar4;
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar6 = 0;
    do {
      puVar4[uVar6] = 0xffffffff;
      uVar6 = uVar6 + 1;
      uVar5 = *(uint *)(this + 0x10);
    } while (uVar6 < uVar5);
  }
  if (param_2 != 0) {
    local_28 = 0;
    local_30 = 0;
    do {
      pGVar3 = param_1[local_28];
      local_34 = *(uint *)(pGVar3 + 8);
      if (local_34 != 0) {
        local_38 = *(int *)(pGVar3 + 0x10);
        uVar5 = 0;
        do {
          while( true ) {
            iVar2 = uVar5 * 2;
            puVar1 = (ushort *)(local_38 + iVar2);
            uVar6 = (uint)*puVar1;
            uVar7 = (*param_3)[uVar6];
            if (uVar7 != 0xffffffff) break;
            uVar7 = local_30 + 1;
            (*param_3)[uVar6] = local_30;
            uVar5 = uVar5 + 1;
            __n = *(size_t *)(this + 0xc);
            memcpy((void *)(local_30 * __n + (int)__s),(void *)(uVar6 * __n + *(int *)(this + 0x14))
                   ,__n);
            local_38 = *(int *)(pGVar3 + 0x10);
            local_34 = *(uint *)(pGVar3 + 8);
            *(short *)(local_38 + iVar2) = (short)local_30;
            local_30 = uVar7;
            if (local_34 <= uVar5) goto LAB_0004df90;
          }
          uVar5 = uVar5 + 1;
          *puVar1 = (ushort)uVar7;
        } while (uVar5 < local_34);
      }
LAB_0004df90:
      local_28 = local_28 + 1;
    } while (local_28 != param_2);
    uVar5 = *(uint *)(this + 0x10);
  }
  memcpy(*(void **)(this + 0x14),__s,uVar5 * *(int *)(this + 0xc));
  if (__s != (void *)0x0) {
    operator_delete__(__s);
  }
  return;
}

