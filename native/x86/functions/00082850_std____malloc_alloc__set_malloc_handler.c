/* 00082850 | std::__malloc_alloc::set_malloc_handler */

/* std::__malloc_alloc::set_malloc_handler(void (*)()) */

undefined4 std::__malloc_alloc::set_malloc_handler(_func_void *param_1)

{
  undefined4 uVar1;
  int unaff_EBX;
  
  FUN_0002e044();
  pthread_mutex_lock((pthread_mutex_t *)
                     ("_ZN3STG13GERendererAPI21GL_RegisterExtensionsEv" + unaff_EBX + 0x2a));
  uVar1 = *(undefined4 *)("_ZN3STG13GERendererAPI21GL_RegisterExtensionsEv" + unaff_EBX + 0x2e);
  *(_func_void **)("_ZN3STG13GERendererAPI21GL_RegisterExtensionsEv" + unaff_EBX + 0x2e) = param_1;
  pthread_mutex_unlock
            ((pthread_mutex_t *)
             ("_ZN3STG13GERendererAPI21GL_RegisterExtensionsEv" + unaff_EBX + 0x2a));
  return uVar1;
}

