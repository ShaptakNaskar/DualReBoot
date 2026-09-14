/* 00045704 | STG::GETimeOfDay::operator= */

/* STG::GETimeOfDay::TEMPNAMEPLACEHOLDERVALUE(STG::GETimeOfDay const&) */

void __thiscall STG::GETimeOfDay::operator=(GETimeOfDay *this,GETimeOfDay *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = uVar1;
  return;
}

