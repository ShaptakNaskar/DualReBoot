/* 0002e590 | STG::FFileBase::GetFileSize */

/* STG::FFileBase::GetFileSize() const */

int __thiscall STG::FFileBase::GetFileSize(FFileBase *this)

{
  int iVar1;
  int iVar2;
  
  (**(code **)(*(int *)this + 0x20))(this,0,2);
  iVar1 = (**(code **)(*(int *)this + 0x24))(this);
  (**(code **)(*(int *)this + 0x20))(this,0,0);
  iVar2 = 0;
  if (-1 < iVar1) {
    iVar2 = iVar1;
  }
  return iVar2;
}

