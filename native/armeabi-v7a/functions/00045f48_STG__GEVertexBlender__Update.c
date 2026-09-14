/* 00045f48 | STG::GEVertexBlender::Update */

/* STG::GEVertexBlender::Update(float*, void (*)(float*, float const*, float const*, float, unsigned
   long)) */

void __thiscall
STG::GEVertexBlender::Update
          (GEVertexBlender *this,float *param_1,
          _func_void_float_ptr_float_ptr_float_ptr_float_ulong *param_2)

{
  this[0x10] = (GEVertexBlender)0x0;
  (*param_2)(param_1,*(float **)(*(int *)(this + 0xc) + *(int *)(this + 0x14) * 4),
             *(float **)(*(int *)(this + 0xc) + *(int *)(this + 0x18) * 4),*(float *)(this + 0x1c),
             *(ulong *)(this + 8));
  return;
}

