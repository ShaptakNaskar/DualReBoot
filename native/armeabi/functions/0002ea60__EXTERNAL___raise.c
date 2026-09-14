/* 0002ea60 | <EXTERNAL>::raise */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

int raise(int __sig)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_raise_00080ff8)(__sig);
  return iVar1;
}

