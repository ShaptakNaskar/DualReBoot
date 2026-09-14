/* 00081c20 | std::overflow_error::~overflow_error */

/* std::overflow_error::~overflow_error() */

void __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZNK3STG14GEVertexBuffer12HasComponentENS0_6EUsageE" + unaff_EBX + 0x1a)
                 + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return;
}

