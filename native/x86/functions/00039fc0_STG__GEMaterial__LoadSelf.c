/* 00039fc0 | STG::GEMaterial::LoadSelf */

/* STG::GEMaterial::LoadSelf(STG::FFileBase const*) */

undefined4 STG::GEMaterial::LoadSelf(FFileBase *param_1)

{
  undefined4 uVar1;
  FFileBase *pFVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_0002e044();
  pFVar2 = (FFileBase *)((ulonglong)uVar3 >> 0x20);
  uVar1 = (undefined4)uVar3;
  if (pFVar2 != (FFileBase *)0x0) {
    USerialize::Load(pFVar2,(GEMaterial *)param_1);
    uVar1 = 1;
  }
  return uVar1;
}

