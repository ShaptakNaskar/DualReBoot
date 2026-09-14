/* 0005dad4 | STG::UTime::InstallTimer */

/* STG::UTime::InstallTimer(STG::UTime::IInternalTime const*) */

void __thiscall STG::UTime::InstallTimer(UTime *this,IInternalTime *param_1)

{
  if (param_1 == (IInternalTime *)0x0) {
    *(UTime **)(this + 4) = this + 8;
  }
  else {
    *(IInternalTime **)(this + 4) = param_1;
  }
  return;
}

