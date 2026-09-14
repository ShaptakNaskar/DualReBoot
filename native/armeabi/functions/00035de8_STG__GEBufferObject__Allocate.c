/* 00035de8 | STG::GEBufferObject::Allocate */

/* STG::GEBufferObject::Allocate(unsigned long) */

GEBufferObject __thiscall STG::GEBufferObject::Allocate(GEBufferObject *this,ulong param_1)

{
  *(ulong *)(this + 0xc) = param_1;
  if (param_1 == 0) {
    return this[0x18];
  }
  GERendererAPI::GL_GenBuffer((ulong *)(this + 0x10));
  Bind(this);
  GERendererAPI::GL_BufferData
            (*(undefined4 *)(this + 4),*(undefined4 *)(this + 8),*(undefined4 *)(this + 0xc));
  Unbind(this);
  this[0x18] = (GEBufferObject)(*(int *)(this + 0x10) != 0);
  return (GEBufferObject)(*(int *)(this + 0x10) != 0);
}

