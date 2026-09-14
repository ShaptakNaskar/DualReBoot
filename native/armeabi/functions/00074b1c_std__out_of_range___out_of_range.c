/* 00074b1c | std::out_of_range::~out_of_range */

/* std::out_of_range::~out_of_range() */

out_of_range * __thiscall std::out_of_range::~out_of_range(out_of_range *this)

{
  *(int *)this = *(int *)(DAT_00074b34 + 0x74b26) + 8;
  logic_error::~logic_error((logic_error *)this);
  return this;
}

