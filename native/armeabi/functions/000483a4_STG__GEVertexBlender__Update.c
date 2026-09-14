/* 000483a4 | STG::GEVertexBlender::Update */

/* STG::GEVertexBlender::Update(float*, void (*)(float*, float const*, float const*, float, unsigned
   long)) */

void __thiscall
STG::GEVertexBlender::Update
          (GEVertexBlender *this,float *param_1,
          _func_void_float_ptr_float_ptr_float_ptr_float_ulong *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float in_s0;
  
  pfVar2 = *(float **)(*(int *)(this + 0xc) + *(int *)(this + 0x14) * 4);
  pfVar1 = *(float **)(*(int *)(this + 0xc) + *(int *)(this + 0x18) * 4);
  this[0x10] = (GEVertexBlender)0x0;
  (*param_2)(param_1,pfVar2,pfVar1,in_s0,*(ulong *)(this + 0x1c));
  return;
}

