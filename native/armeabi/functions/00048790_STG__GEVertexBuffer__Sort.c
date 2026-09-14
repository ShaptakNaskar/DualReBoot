/* 00048790 | STG::GEVertexBuffer::Sort */

/* STG::GEVertexBuffer::Sort(STG::GEIndexBuffer**, unsigned long, unsigned long*&) */

void __thiscall
STG::GEVertexBuffer::Sort
          (GEVertexBuffer *this,GEIndexBuffer **param_1,ulong param_2,ulong **param_3)

{
  int iVar1;
  void *__s;
  ulong *puVar2;
  uint uVar3;
  ulong uVar4;
  size_t __n;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  GEIndexBuffer *pGVar10;
  GEIndexBuffer **local_34;
  
  __s = operator_new__(*(int *)(this + 0x10) * *(int *)(this + 0xc));
  memset(__s,0,*(int *)(this + 0xc) * *(int *)(this + 0x10));
  puVar2 = operator_new__(*(int *)(this + 0x10) << 2);
  iVar5 = *(int *)(this + 0x10);
  *param_3 = puVar2;
  uVar6 = 0;
  if (iVar5 != 0) {
    uVar3 = 0;
    do {
      *puVar2 = 0xffffffff;
      uVar6 = *(uint *)(this + 0x10);
      uVar3 = uVar3 + 1;
      puVar2 = puVar2 + 1;
    } while (uVar3 < uVar6);
  }
  if (param_2 != 0) {
    uVar9 = 0;
    uVar8 = 0;
    local_34 = param_1;
    do {
      pGVar10 = *local_34;
      uVar6 = *(uint *)(pGVar10 + 8);
      if (uVar6 != 0) {
        iVar5 = *(int *)(pGVar10 + 0x10);
        uVar3 = 0;
        do {
          while( true ) {
            iVar1 = uVar3 * 2;
            uVar7 = (uint)*(ushort *)(iVar5 + iVar1);
            uVar3 = uVar3 + 1;
            uVar4 = (*param_3)[uVar7];
            if (uVar4 != 0xffffffff) break;
            (*param_3)[uVar7] = uVar8;
            __n = *(size_t *)(this + 0xc);
            uVar4 = uVar8 + 1;
            memcpy((void *)(__n * uVar8 + (int)__s),(void *)(__n * uVar7 + *(int *)(this + 0x14)),
                   __n);
            iVar5 = *(int *)(pGVar10 + 0x10);
            uVar6 = *(uint *)(pGVar10 + 8);
            *(short *)(iVar5 + iVar1) = (short)uVar8;
            uVar8 = uVar4;
            if (uVar6 <= uVar3) goto LAB_000488b0;
          }
          *(short *)(iVar5 + iVar1) = (short)uVar4;
        } while (uVar3 < uVar6);
      }
LAB_000488b0:
      uVar9 = uVar9 + 1;
      local_34 = local_34 + 1;
    } while (uVar9 != param_2);
    uVar6 = *(uint *)(this + 0x10);
  }
  memcpy(*(void **)(this + 0x14),__s,uVar6 * *(int *)(this + 0xc));
  if (__s != (void *)0x0) {
    operator_delete__(__s);
    return;
  }
  return;
}

