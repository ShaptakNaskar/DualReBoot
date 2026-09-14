/* 0003558c | STG::GEBufferObject::Unbind */

/* STG::GEBufferObject::Unbind() const */

void __thiscall STG::GEBufferObject::Unbind(GEBufferObject *this)

{
  GERendererAPI::GL_UnbindBuffer(*(undefined4 *)(this + 4));
  return;
}

