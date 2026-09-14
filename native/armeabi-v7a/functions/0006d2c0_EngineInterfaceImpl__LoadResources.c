/* 0006d2c0 | EngineInterfaceImpl::LoadResources */

/* EngineInterfaceImpl::LoadResources(int, _jobject*) const */

EngineInterface * __thiscall
EngineInterfaceImpl::LoadResources(EngineInterfaceImpl *this,int param_1,_jobject *param_2)

{
  int iVar1;
  EngineInterface *local_10;
  FFileManagerScoped aFStack_c [8];
  
  local_10 = (EngineInterface *)param_1;
  if (param_1 != 0) {
    STG::FFileManagerScoped::FFileManagerScoped(aFStack_c,*(_JNIEnv **)(this + 8),param_2);
    iVar1 = STG::FFileManagerScoped::IsValid();
    if ((iVar1 != 0) && (local_10[0xc] != (EngineInterface)0x0)) {
      EngineInterface::Activate(local_10);
      (**(code **)(**(int **)(local_10 + 8) + 8))();
      EngineInterface::Deactivate(local_10);
      EngineInterface::ReserveBitmapData(local_10,0);
      STG::FFileManagerScoped::~FFileManagerScoped(aFStack_c);
      return local_10;
    }
    STG::FFileManagerScoped::~FFileManagerScoped(aFStack_c);
  }
  EngineInterface::Deallocate(&local_10);
  return local_10;
}

