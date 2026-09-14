/* 00081290 | FUN_00081290 */

undefined4 FUN_00081290(int param_1,int param_2,undefined4 param_3,byte param_4,undefined1 *param_5)

{
  char cVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 uVar3;
  
  FUN_0002e044();
  uVar3 = 0;
  if (((param_4 & 1) != 0) &&
     (cVar1 = FUN_00081700(*(undefined4 *)(param_1 + 0xc),
                           *(undefined4 *)
                            ("_ZN3STG14GEVertexBuffer12AddComponentENS0_6EUsageENS0_5ETypeEm" +
                            unaff_EBX + 0x16)), cVar1 != '\0')) {
    if ((*(int *)(param_2 + 0xc) != 0) &&
       (iVar2 = FUN_00080240(*(int *)(param_2 + 0xc),
                             *(undefined4 *)
                              ("_ZN3STG14GEVertexBuffer12AddComponentENS0_6EUsageENS0_5ETypeEm" +
                              unaff_EBX + 10),
                             *(undefined4 *)
                              ("_ZN3STG14GEVertexBuffer12AddComponentENS0_6EUsageENS0_5ETypeEm" +
                              unaff_EBX + 0x1a),0), iVar2 != 0)) {
      *param_5 = 0;
      return 1;
    }
    *param_5 = 1;
    uVar3 = 1;
  }
  return uVar3;
}

