/* 00081bb0 | std::underflow_error::~underflow_error */

/* std::underflow_error::~underflow_error() */

void __thiscall std::underflow_error::~underflow_error(underflow_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG7GEModel30ConvertToMultiPassTransparencyERNS_11UArrayFixedImmEE" +
                         unaff_EBX + 0x1a) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return;
}

