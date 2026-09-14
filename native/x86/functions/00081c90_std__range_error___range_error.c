/* 00081c90 | std::range_error::~range_error */

/* std::range_error::~range_error() */

void __thiscall std::range_error::~range_error(range_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)(
                         "_ZN3STG7GEModel16CalcBoundingDataERKNS_7MMatrixERKNS_11UArrayFixedINS_8MVector3EmEE"
                         + unaff_EBX + 0x33) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return;
}

