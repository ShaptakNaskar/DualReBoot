/* 00081b80 | std::runtime_error::~runtime_error */

/* std::runtime_error::~runtime_error() */

void __thiscall std::runtime_error::~runtime_error(runtime_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG7GEModel30ConvertToMultiPassTransparencyERNS_11UArrayFixedImmEE" +
                         unaff_EBX + 0x46) + 8;
  __Named_exception::~__Named_exception((__Named_exception *)this);
  return;
}

