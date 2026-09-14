/* 000708e4 | std::domain_error::~domain_error */

/* std::domain_error::~domain_error() */

domain_error * __thiscall std::domain_error::~domain_error(domain_error *this)

{
  *(int *)this = *(int *)(DAT_000708fc + 0x708ec) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

