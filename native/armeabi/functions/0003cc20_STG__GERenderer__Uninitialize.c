/* 0003cc20 | STG::GERenderer::Uninitialize */

/* STG::GERenderer::Uninitialize() */

void __thiscall STG::GERenderer::Uninitialize(GERenderer *this)

{
  DeallocateResources(this);
  (**(code **)(*(int *)this + 0x28))(this);
  this[0x378] = (GERenderer)0x0;
  return;
}

