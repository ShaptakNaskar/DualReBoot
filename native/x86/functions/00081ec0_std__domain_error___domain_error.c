/* 00081ec0 | std::domain_error::~domain_error */

/* std::domain_error::~domain_error() */

void __thiscall std::domain_error::~domain_error(domain_error *this)

{
  int unaff_EBX;
  
  FUN_0002e044();
  *(int *)this = *(int *)("_ZN3STG7GEModel8LoadSelfEPKNS_9FFileBaseE" + unaff_EBX + 9) + 8;
  logic_error::~logic_error((logic_error *)this);
  return;
}

