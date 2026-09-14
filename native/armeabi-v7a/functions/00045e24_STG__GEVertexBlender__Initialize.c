/* 00045e24 | STG::GEVertexBlender::Initialize */

/* STG::GEVertexBlender::Initialize(unsigned long, unsigned long) */

void __thiscall STG::GEVertexBlender::Initialize(GEVertexBlender *this,ulong param_1,ulong param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *pvVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  *(ulong *)(this + 4) = param_1;
  *(ulong *)(this + 8) = param_2;
  if (1 < param_1) {
    iVar7 = 0;
    puVar2 = operator_new(0x58);
    iVar3 = *(int *)(this + 4);
    puVar2[2] = 0;
    puVar2[3] = 0;
    *puVar2 = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0;
    puVar2[0x13] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[1] = 0xc;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    *(undefined1 *)(puVar2 + 0x14) = 0;
    *(undefined4 **)this = puVar2;
    pvVar4 = operator_new__(iVar3 << 2);
    iVar3 = *(int *)(this + 4);
    iVar8 = *(int *)(this + 8);
    *(void **)(this + 0xc) = pvVar4;
    if (iVar3 != 0) {
      while( true ) {
        iVar1 = iVar7 * 4;
        pvVar5 = malloc(iVar8 * 0x10 + 0x13);
        iVar7 = iVar7 + 1;
        uVar6 = (int)pvVar5 + 0x13U & 0xfffffff0;
        if (pvVar5 == (void *)0x0) {
          uVar6 = 0;
        }
        else {
          *(void **)(uVar6 - 4) = pvVar5;
        }
        *(uint *)((int)pvVar4 + iVar1) = uVar6;
        if (iVar7 == iVar3) break;
        pvVar4 = *(void **)(this + 0xc);
      }
    }
  }
  this[0x20] = (GEVertexBlender)0x1;
  return;
}

