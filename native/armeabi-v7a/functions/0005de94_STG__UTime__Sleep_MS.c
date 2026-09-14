/* 0005de94 | STG::UTime::Sleep_MS */

/* STG::UTime::Sleep_MS(STG::UTimeValue<unsigned long long, 1000ul>) const */

void STG::UTime::Sleep_MS(undefined4 param_1,undefined4 param_2,int param_3)

{
  (*(code *)PTR_usleep_0007df7c)(param_3 * 1000);
  return;
}

