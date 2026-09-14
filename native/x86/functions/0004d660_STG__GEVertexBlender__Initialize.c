/* 0004d660 | STG::GEVertexBlender::Initialize */

/* STG::GEVertexBlender::Initialize(unsigned long, unsigned long) */

void __thiscall STG::GEVertexBlender::Initialize(GEVertexBlender *this,ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  void *pvVar5;
  void *pvVar6;
  uint uVar7;
  int iVar8;
  
  FUN_0002e044();
  *(ulong *)(this + 4) = param_1;
  *(ulong *)(this + 8) = param_2;
  if (1 < param_1) {
    puVar4 = operator_new(0x54);
    *puVar4 = 0;
    puVar4[1] = 0xc;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    puVar4[8] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    puVar4[0xb] = 0;
    puVar4[0xc] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0;
    puVar4[0x12] = 0;
    puVar4[0x13] = 0;
    *(undefined1 *)(puVar4 + 0x14) = 0;
    *(undefined4 **)this = puVar4;
    pvVar5 = operator_new__(*(int *)(this + 4) << 2);
    iVar2 = *(int *)(this + 4);
    *(void **)(this + 0xc) = pvVar5;
    iVar3 = *(int *)(this + 8);
    if (iVar2 != 0) {
      iVar8 = 0;
      while( true ) {
        iVar1 = iVar8 * 4;
        pvVar6 = malloc(iVar3 * 0x10 + 0x13);
        uVar7 = 0;
        if (pvVar6 != (void *)0x0) {
          uVar7 = (int)pvVar6 + 0x13U & 0xfffffff0;
          *(void **)(uVar7 - 4) = pvVar6;
        }
        iVar8 = iVar8 + 1;
        *(uint *)((int)pvVar5 + iVar1) = uVar7;
        if (iVar8 == iVar2) break;
        pvVar5 = *(void **)(this + 0xc);
      }
    }
  }
  this[0x20] = (GEVertexBlender)0x1;
  return;
}

