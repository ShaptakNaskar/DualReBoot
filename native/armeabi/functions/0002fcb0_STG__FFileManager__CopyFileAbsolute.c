/* 0002fcb0 | STG::FFileManager::CopyFileAbsolute */

/* STG::FFileManager::CopyFileAbsolute(STG::UStringBase<char, int> const&, STG::UStringBase<char,
   int> const&) const */

void __thiscall
STG::FFileManager::CopyFileAbsolute(FFileManager *this,UStringBase *param_1,UStringBase *param_2)

{
  uchar *puVar1;
  ulong uVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  bool bVar6;
  uchar *local_8c;
  ulong local_88;
  FFileDisk aFStack_84 [52];
  FFileDisk aFStack_50 [52];
  int local_1c;
  
  piVar4 = *(int **)(DAT_0002fdd0 + 0x2fcc8);
  local_1c = *piVar4;
  FFileDisk::FFileDisk(aFStack_84);
  iVar3 = FFileBase::Open((FFileBase *)aFStack_84,*(undefined4 *)(param_1 + 0x18),0);
  if (iVar3 == 0) {
    uVar5 = 0;
  }
  else {
    iVar3 = FFileBase::ReadAll((FFileBase *)aFStack_84,&local_8c,&local_88);
    uVar2 = local_88;
    puVar1 = local_8c;
    if (iVar3 == 0) {
      if (local_8c != (uchar *)0x0) {
        operator_delete__(local_8c);
      }
    }
    else {
      bVar6 = local_88 != 0;
      local_8c = (uchar *)0x0;
      local_88 = 0;
      if (bVar6) {
        FFileBase::Close((FFileBase *)aFStack_84);
        FFileDisk::FFileDisk(aFStack_50);
        iVar3 = FFileBase::Open((FFileBase *)aFStack_50,*(undefined4 *)(param_2 + 0x18),1);
        uVar5 = 0;
        if ((iVar3 != 0) &&
           (iVar3 = FFileBase::Write((FFileBase *)aFStack_50,puVar1,uVar2), uVar5 = 0, iVar3 != 0))
        {
          FFileBase::Close((FFileBase *)aFStack_50);
          uVar5 = 1;
        }
        FFileDisk::~FFileDisk(aFStack_50);
        if (puVar1 != (uchar *)0x0) {
          operator_delete__(puVar1);
        }
        goto LAB_0002fd20;
      }
    }
    uVar5 = 0;
  }
LAB_0002fd20:
  FFileDisk::~FFileDisk(aFStack_84);
  if (local_1c != *piVar4) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar5);
  }
  return;
}

