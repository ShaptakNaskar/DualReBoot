/* 0003557c | STG::GEBufferObject::Bind */

/* STG::GEBufferObject::Bind() const */

void __thiscall STG::GEBufferObject::Bind(GEBufferObject *this)

{
  GERendererAPI::GL_BindBuffer(*(undefined4 *)(this + 4),*(undefined4 *)(this + 0x10));
  return;
}

