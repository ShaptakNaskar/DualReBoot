/* 000369c0 | STG::GEBufferObject::Bind */

/* STG::GEBufferObject::Bind() const */

void __thiscall STG::GEBufferObject::Bind(GEBufferObject *this)

{
  FUN_0002e044();
  GERendererAPI::GL_BindBuffer(*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10));
  return;
}

