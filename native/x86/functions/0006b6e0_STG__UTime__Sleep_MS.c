/* 0006b6e0 | STG::UTime::Sleep_MS */

/* STG::UTime::Sleep_MS(STG::UTimeValue<unsigned long long, 1000ul>) const */

void __thiscall STG::UTime::Sleep_MS(undefined4 this,int param_2)

{
  FUN_0002e044();
  usleep(param_2 * 1000);
  return;
}

