/* 0006b4a0 | STG::UTime::GetTime_Local */

/* STG::UTime::GetTime_Local() const */

undefined4 * STG::UTime::GetTime_Local(void)

{
  undefined4 *in_stack_00000004;
  int in_stack_00000008;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  (**(code **)**(undefined4 **)(in_stack_00000008 + 4))
            (*(undefined4 **)(in_stack_00000008 + 4),&local_38);
  in_stack_00000004[4] = local_28;
  in_stack_00000004[5] = local_24;
  in_stack_00000004[6] = local_20;
  in_stack_00000004[7] = local_1c;
  in_stack_00000004[8] = local_18;
  in_stack_00000004[0xd] = local_28;
  in_stack_00000004[0xe] = local_24;
  in_stack_00000004[0xf] = local_20;
  in_stack_00000004[0x10] = local_1c;
  in_stack_00000004[0x11] = local_18;
  *in_stack_00000004 = local_38;
  in_stack_00000004[1] = local_34;
  in_stack_00000004[9] = local_38;
  in_stack_00000004[10] = local_34;
  in_stack_00000004[2] = local_30;
  in_stack_00000004[3] = local_2c;
  in_stack_00000004[0xb] = local_30;
  in_stack_00000004[0xc] = local_2c;
  in_stack_00000004[0x12] = local_14;
  in_stack_00000004[0x13] = local_10;
  return in_stack_00000004;
}

