/* 00081d70 | std::out_of_range::~out_of_range */

/* std::out_of_range::~out_of_range() */

void __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZNK3STG7GEModel19CalcRenderTransformERKNS_8GECameraERKNS_7MMatrixERS4_"
                         + unaff_EBX + 3) + 8;
  logic_error::~logic_error((logic_error *)this);
  return;
}

