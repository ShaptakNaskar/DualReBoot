/* 00057980 | STG::MLocation::MLocation */

/* STG::MLocation::MLocation(STG::MFloatQuantized<(unsigned char)2> const&,
   STG::MFloatQuantized<(unsigned char)2> const&) */

void __thiscall
STG::MLocation::MLocation(MLocation *this,MFloatQuantized *param_1,MFloatQuantized *param_2)

{
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined4 *)(this + 4) = *(undefined4 *)param_2;
  return;
}

