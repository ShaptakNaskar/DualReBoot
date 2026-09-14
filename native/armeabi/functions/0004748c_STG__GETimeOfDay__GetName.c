/* 0004748c | STG::GETimeOfDay::GetName */

/* STG::GETimeOfDay::GetName(STG::GETimeOfDay::EPhase) */

undefined4 STG::GETimeOfDay::GetName(int param_1)

{
  return *(undefined4 *)(DAT_0004749c + 0x47498 + param_1 * 4);
}

