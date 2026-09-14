/* 000369f0 | STG::GEBufferObject::Unbind */

/* STG::GEBufferObject::Unbind() const */

void __thiscall STG::GEBufferObject::Unbind(GEBufferObject *this)

{
  FUN_0002e044();
  GERendererAPI::GL_UnbindBuffer(*(undefined4 *)(this + 4));
  return;
}

