/* 0005f498 | STG::UPreferenceBase::SetListener */

/* STG::UPreferenceBase::SetListener(STG::UPreferenceBase::IListener*) */

void __thiscall STG::UPreferenceBase::SetListener(UPreferenceBase *this,IListener *param_1)

{
  if (*(int *)(this + 0x74) != 0) {
    return;
  }
  if (param_1 != (IListener *)0x0) {
    *(IListener **)(this + 0x74) = param_1;
  }
  return;
}

