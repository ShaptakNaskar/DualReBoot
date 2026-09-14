/* 00045080 | STG::GETimeOfDay::GetName */

/* STG::GETimeOfDay::GetName(STG::GETimeOfDay::EPhase) */

undefined4 STG::GETimeOfDay::GetName(int param_1)

{
  return *(undefined4 *)(DAT_00045090 + 0x4508c + param_1 * 4);
}

