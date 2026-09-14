/* 0006f918 | STG::UPreference_TextureGroup::~UPreference_TextureGroup */

/* STG::UPreference_TextureGroup::~UPreference_TextureGroup() */

UPreference_TextureGroup * __thiscall
STG::UPreference_TextureGroup::~UPreference_TextureGroup(UPreference_TextureGroup *this)

{
  ~UPreference_TextureGroup(this);
  operator_delete(this);
  return this;
}

