#include <stdio.h>

unsigned int binary_to_uint(const char *b)
{
  unsigned int result = 0;
  
  while (*b)
  {
    if ((*b != '0') && (*b != '1'))
    {
      return 0;
    }

    result *= 2;
    
    if (*b++ == '1')
    { 
      result += 1;
    }
  }

  return (result);
}
