/* 000355e0 | STG::GEBufferObject::Update */

/* STG::GEBufferObject::Update(unsigned char const*) */

void __thiscall STG::GEBufferObject::Update(GEBufferObject *this,uchar *param_1)

{
  Bind(this);
  GERendererAPI::GL_BufferSubData(*(undefined4 *)(this + 4),param_1,*(undefined4 *)(this + 0xc));
  Unbind(this);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return;
}

