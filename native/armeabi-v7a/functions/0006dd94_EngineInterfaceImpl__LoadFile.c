/* 0006dd94 | EngineInterfaceImpl::LoadFile */

/* EngineInterfaceImpl::LoadFile(int, _jobject*, _jstring*) const */

void __thiscall
EngineInterfaceImpl::LoadFile
          (EngineInterfaceImpl *this,int param_1,_jobject *param_2,_jstring *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  EngineInterface *local_50;
  FFileManagerScoped aFStack_4c [4];
  FFileBase *local_48;
  undefined4 local_44;
  _jstring *local_40;
  undefined4 local_3c;
  int local_38;
  uint local_34 [4];
  uint *local_24;
  uint *local_20;
  int local_1c;
  
  piVar3 = *(int **)(DAT_0006df08 + 0x6ddb4);
  local_1c = *piVar3;
  local_50 = (EngineInterface *)param_1;
  if (param_1 == 0) {
    uRam0000000c = 0;
  }
  else {
    STG::FFileManagerScoped::FFileManagerScoped(aFStack_4c,*(_JNIEnv **)(this + 8),param_2);
    iVar1 = STG::FFileManagerScoped::IsValid();
    if (iVar1 == 0) {
      STG::FFileManagerScoped::~FFileManagerScoped(aFStack_4c);
      local_50[0xc] = (EngineInterface)0x0;
    }
    else {
      local_44 = *(undefined4 *)(this + 8);
      iVar1 = *(int *)(DAT_0006df0c + 0x6de30);
      local_38 = iVar1 + 8;
      local_3c = 0;
      local_34[0] = local_34[0] & 0xffffff00;
      local_40 = param_3;
      local_24 = local_34;
      local_20 = local_34;
      StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_44);
      local_48 = (FFileBase *)STG::FFileManagerScoped::Open((UStringBase *)aFStack_4c);
      if (local_48 == (FFileBase *)0x0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (**(code **)(**(int **)(local_50 + 8) + 0x10))(*(int **)(local_50 + 8),local_48);
        STG::FFileManagerScoped::Close(aFStack_4c,&local_48);
      }
      iVar1 = iVar1 + 8;
      StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString();
      local_38 = iVar1;
      if ((local_20 != local_34) && (local_20 != (uint *)0x0)) {
        if (local_34[0] - (int)local_20 < 0x81) {
          std::__node_alloc::_M_deallocate(local_20,local_34[0] - (int)local_20);
        }
        else {
          operator_delete(local_20);
        }
      }
      STG::FFileManagerScoped::~FFileManagerScoped(aFStack_4c);
      local_50[0xc] = SUB41(iVar2,0);
      if (iVar2 != 0) {
        EngineInterface::ReserveBitmapData(local_50,*(ulong *)(*(int *)(local_50 + 8) + 100));
        goto LAB_0006ddf4;
      }
    }
  }
  EngineInterface::Deallocate(&local_50);
LAB_0006ddf4:
  if (local_1c != *piVar3) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(local_50);
  }
  return;
}

