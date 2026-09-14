/* 00074bac | std::domain_error::~domain_error */

/* std::domain_error::~domain_error() */

domain_error * __thiscall std::domain_error::~domain_error(domain_error *this)

{
  *(int *)this = *(int *)(DAT_00074bc4 + 0x74bb6) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

