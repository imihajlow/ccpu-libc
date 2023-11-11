#pragma once

#ifndef __SIZE_T_DEFINED
# define __SIZE_T_DEFINED
  typedef __SIZE_TYPE__ size_t;
#endif

extern void bzero(void *s, size_t n);
