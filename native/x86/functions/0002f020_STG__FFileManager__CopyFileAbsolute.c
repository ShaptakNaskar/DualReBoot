/* 0002f020 | STG::FFileManager::CopyFileAbsolute */

/* STG::FFileManager::CopyFileAbsolute(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&) const */

undefined1 __thiscall
STG::FFileManager::CopyFileAbsolute(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  int *piVar1;
  uchar *puVar2;
  ulong uVar3;
  char cVar4;
  int unaff_EBX;
  bool bVar5;
  undefined1 local_91;
  uchar *local_90 [4];
  ulong local_80;
  FFileBase local_7c [52];
  FFileDisk local_48 [52];
  int local_14;
  
  FUN_0002e044();
  piVar1 = *(int **)(unaff_EBX + 0x6cdff);
  local_14 = *piVar1;
  FFileDisk::FFileDisk((FFileDisk *)local_7c);
  cVar4 = FFileBase::Open(local_7c,*(undefined4 *)(param_1 + 0x18),0);
  local_91 = 0;
  if (cVar4 != '\0') {
    cVar4 = FFileBase::ReadAll(local_7c,local_90,&local_80);
    uVar3 = local_80;
    puVar2 = local_90[0];
    if (cVar4 == '\0') {
      if (local_90[0] != (uchar *)0x0) {
        operator_delete__(local_90[0]);
      }
    }
    else {
      bVar5 = local_80 != 0;
      local_90[0] = (uchar *)0x0;
      local_80 = 0;
      if (bVar5) {
        FFileBase::Close(local_7c);
        FFileDisk::FFileDisk(local_48);
        cVar4 = FFileBase::Open((FFileBase *)local_48,*(undefined4 *)(param_2 + 0x18),1);
        if (cVar4 != '\0') {
          cVar4 = FFileBase::Write((FFileBase *)local_48,puVar2,uVar3);
          if (cVar4 != '\0') {
            FFileBase::Close((FFileBase *)local_48);
            local_91 = 1;
          }
        }
        FFileDisk::~FFileDisk(local_48);
        if (puVar2 != (uchar *)0x0) {
          operator_delete__(puVar2);
        }
        goto LAB_0002f0c8;
      }
    }
    local_91 = 0;
  }
LAB_0002f0c8:
  FFileDisk::~FFileDisk((FFileDisk *)local_7c);
  if (local_14 == *piVar1) {
    return local_91;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

