/* 0003b790 | STG::GEModel::Initialize */

/* STG::GEModel::Initialize(unsigned long, unsigned long, unsigned long) */

void __thiscall STG::GEModel::Initialize(GEModel *this,ulong param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  GEVertexBuffer *this_00;
  GEIndexBuffer *this_01;
  GEMaterial *this_02;
  uint uVar2;
  
  FUN_0002e044();
  *(ulong *)(this + 0x2c) = param_1;
  *(ulong *)(this + 0x30) = param_3;
  *(ulong *)(this + 0x34) = param_2;
  pvVar1 = operator_new__(param_2 << 2);
  *(void **)(this + 0x7c) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0x30) << 2);
  *(void **)(this + 0x80) = pvVar1;
  pvVar1 = operator_new__(*(int *)(this + 0x30) << 2);
  *(void **)(this + 0x84) = pvVar1;
  if (*(int *)(this + 0x34) != 0) {
    uVar2 = 0;
    do {
      this_00 = operator_new(0xac);
      GEVertexBuffer::GEVertexBuffer(this_00);
      *(GEVertexBuffer **)(*(int *)(this + 0x7c) + uVar2 * 4) = this_00;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x34));
  }
  if (*(int *)(this + 0x30) != 0) {
    uVar2 = 0;
    do {
      this_01 = operator_new(0x18);
      GEIndexBuffer::GEIndexBuffer(this_01);
      *(GEIndexBuffer **)(*(int *)(this + 0x80) + uVar2 * 4) = this_01;
      this_02 = operator_new(0x158);
      GEMaterial::GEMaterial(this_02);
      *(GEMaterial **)(*(int *)(this + 0x84) + uVar2 * 4) = this_02;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(this + 0x30));
  }
  this[0xc6] = (GEModel)0x1;
  return;
}

