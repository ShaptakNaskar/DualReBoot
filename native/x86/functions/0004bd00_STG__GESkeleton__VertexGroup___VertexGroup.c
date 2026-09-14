/* 0004bd00 | STG::GESkeleton::VertexGroup::~VertexGroup */

/* STG::GESkeleton::VertexGroup::~VertexGroup() */

void __thiscall STG::GESkeleton::VertexGroup::~VertexGroup(VertexGroup *this)

{
  FUN_0002e044();
  if (*(int *)(this + 4) != 0) {
    if (*(void **)this != (void *)0x0) {
      operator_delete__(*(void **)this);
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)(this + 4) = 0;
  }
  return;
}

