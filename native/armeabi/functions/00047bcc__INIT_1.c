/* 00047bcc | _INIT_1 */

void _INIT_1(void)

{
  int iVar1;
  
  iVar1 = DAT_00047bfc;
  STG::GETimeOfDay::GETimeOfDay((GETimeOfDay *)(DAT_00047bfc + 0x47be8),2,0);
  STG::GETimeOfDay::GETimeOfDay((GETimeOfDay *)(iVar1 + 0x47bf8),6,DAT_00047c00);
  return;
}

