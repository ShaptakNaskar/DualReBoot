/* 000707c4 | std::overflow_error::~overflow_error */

/* std::overflow_error::~overflow_error() */

overflow_error * __thiscall std::overflow_error::~overflow_error(overflow_error *this)

{
  *(int *)this = *(int *)(DAT_000707dc + 0x707cc) + 8;
  runtime_error::~runtime_error((runtime_error *)this);
  return this;
}

