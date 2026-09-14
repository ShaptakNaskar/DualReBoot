/* 0002ed20 | STG::FFileBase::GetFileSize */

/* STG::FFileBase::GetFileSize() const */

uint STG::FFileBase::GetFileSize(void)

{
  int *in_r0;
  uint uVar1;
  
  (**(code **)(*in_r0 + 0x20))();
  uVar1 = (**(code **)(*in_r0 + 0x24))();
  (**(code **)(*in_r0 + 0x20))();
  return uVar1 & ~((int)uVar1 >> 0x1f);
}

