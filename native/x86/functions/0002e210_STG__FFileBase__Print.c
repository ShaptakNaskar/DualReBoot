/* 0002e210 | STG::FFileBase::Print */

/* STG::FFileBase::Print(char const*, ...) */

void __thiscall STG::FFileBase::Print(FFileBase *this,char *param_1,...)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int unaff_EBX;
  char local_820 [2048];
  int local_20;
  
  FUN_0002e044();
  piVar1 = *(int **)(&DAT_0006dc0e + unaff_EBX);
  local_20 = *piVar1;
  uVar2 = vsnprintf(local_820,0x800,param_1,&stack0x0000000c);
  if (0 < (int)uVar2) {
    uVar3 = 0x800;
    if (uVar2 < 0x800) {
      uVar3 = uVar2;
    }
    *(uint *)(this + 0xc) = *(int *)(this + 0xc) + uVar3;
  }
  (**(code **)(*(int *)this + 0x34))(this,unaff_EBX + 0x590d6,local_820);
  if (local_20 == *piVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

