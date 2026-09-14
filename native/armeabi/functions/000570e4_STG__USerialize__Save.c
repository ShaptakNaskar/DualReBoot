/* 000570e4 | STG::USerialize::Save */

/* STG::USerialize::Save(STG::FFileBase*, STG::GEVertexBuffer const&) */

void STG::USerialize::Save(FFileBase *param_1,GEVertexBuffer *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  GEVertexBuffer *pGVar4;
  int local_38;
  int local_34;
  undefined1 auStack_30 [4];
  int local_2c [2];
  
  local_2c[0] = 2;
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  iVar3 = *(int *)(param_2 + 0xa4);
  local_2c[0] = iVar3;
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  if (iVar3 != 0) {
    pGVar4 = param_2 + 0x84;
    iVar1 = 0;
    do {
      pGVar4 = pGVar4 + 4;
      iVar2 = *(int *)pGVar4;
      GEVertexBuffer::HasComponent(param_2,iVar2,&local_38,&local_34,auStack_30);
      local_2c[0] = iVar2;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      local_2c[0] = local_38;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
      iVar1 = iVar1 + 1;
      local_2c[0] = local_34;
      FFileBase::Write(param_1,(uchar *)local_2c,4);
    } while (iVar1 != iVar3);
  }
  local_2c[0] = *(int *)(param_2 + 8);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(int *)(param_2 + 0x10);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  local_2c[0] = *(int *)(param_2 + 0xc);
  FFileBase::Write(param_1,(uchar *)local_2c,4);
  FFileBase::Write(param_1,*(uchar **)(param_2 + 0x14),
                   *(int *)(param_2 + 0x10) * *(int *)(param_2 + 0xc));
  return;
}

