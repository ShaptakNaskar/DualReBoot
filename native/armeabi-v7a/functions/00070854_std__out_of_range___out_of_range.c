/* 00070854 | std::out_of_range::~out_of_range */

/* std::out_of_range::~out_of_range() */

out_of_range * __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  *(int *)this = *(int *)(DAT_0007086c + 0x7085c) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

