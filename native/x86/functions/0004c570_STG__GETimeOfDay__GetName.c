/* 0004c570 | STG::GETimeOfDay::GetName */

/* STG::GETimeOfDay::GetName(STG::GETimeOfDay::EPhase) */

undefined4 STG::GETimeOfDay::GetName(int param_1)

{
  int extraout_ECX;
  
  FUN_0002e915();
  return *(undefined4 *)(extraout_ECX + 0x4ddcb + param_1 * 4);
}

