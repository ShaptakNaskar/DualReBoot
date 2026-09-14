/* 0007de80 | EngineInterfaceImpl::LoadFile */

/* EngineInterfaceImpl::LoadFile(int, _jobject*, _jstring*) const */

EngineInterface * __thiscall
EngineInterfaceImpl::LoadFile
          (EngineInterfaceImpl *this,int param_1,_jobject *param_2,_jstring *param_3)

{
  int *piVar1;
  char cVar2;
  EngineInterface EVar3;
  int unaff_EBX;
  EngineInterface *local_50 [2];
  FFileManagerScoped local_48 [4];
  FFileBase *local_44;
  undefined4 local_40;
  _jstring *local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30 [4];
  uint *local_20;
  uint *local_1c;
  int local_14;
  
  local_14 = 0x7de8b;
  FUN_0002e044();
  piVar1 = *(int **)("_ZNK3STG9GETexture16GetChildResourceEm" + unaff_EBX + 0x15);
  local_14 = *piVar1;
  local_50[0] = (EngineInterface *)param_1;
  if (param_1 == 0) {
LAB_0007def3:
    local_50[0][0xc] = (EngineInterface)0x0;
  }
  else {
    STG::FFileManagerScoped::FFileManagerScoped(local_48,*(_JNIEnv **)(this + 8),param_2);
    cVar2 = STG::FFileManagerScoped::IsValid();
    if (cVar2 == '\0') {
      STG::FFileManagerScoped::~FFileManagerScoped(local_48);
      goto LAB_0007def3;
    }
    local_40 = *(undefined4 *)(this + 8);
    local_3c = param_3;
    local_38 = 0;
    local_30[0] = local_30[0] & 0xffffff00;
    local_34 = *(int *)("_ZNK3STG9GETexture16GetChildResourceEm" + unaff_EBX + 0x19) + 8;
    local_20 = local_30;
    local_1c = local_30;
    StringHelperBase<STG::UStringBase<char,int>,char>::AcquireString((int)&local_40);
    local_44 = (FFileBase *)STG::FFileManagerScoped::Open(local_48,(UStringBase *)&local_34);
    EVar3 = (EngineInterface)0x0;
    if (local_44 != (FFileBase *)0x0) {
      EVar3 = (EngineInterface)
              (**(code **)(**(int **)(local_50[0] + 8) + 0x10))(*(int **)(local_50[0] + 8),local_44)
      ;
      STG::FFileManagerScoped::Close(local_48,&local_44);
    }
    StringHelperBase<STG::UStringBase<char,int>,char>::ReleaseString
              ((StringHelperBase<STG::UStringBase<char,int>,char> *)&local_40);
    local_34 = *(int *)("_ZNK3STG9GETexture16GetChildResourceEm" + unaff_EBX + 0x19) + 8;
    if ((local_1c != local_30) && (local_1c != (uint *)0x0)) {
      if (local_30[0] - (int)local_1c < 0x81) {
        std::__node_alloc::_M_deallocate(local_1c,local_30[0] - (int)local_1c);
      }
      else {
        operator_delete(local_1c);
      }
    }
    STG::FFileManagerScoped::~FFileManagerScoped(local_48);
    local_50[0][0xc] = EVar3;
    if (EVar3 != (EngineInterface)0x0) {
      EngineInterface::ReserveBitmapData(local_50[0],*(ulong *)(*(int *)(local_50[0] + 8) + 100));
      goto LAB_0007df03;
    }
  }
  EngineInterface::Deallocate(local_50);
LAB_0007df03:
  if (local_14 == *piVar1) {
    return local_50[0];
  }
                    /* WARNING: Subroutine does not return */
  FUN_0002e000();
}

