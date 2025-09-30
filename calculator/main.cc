// older versions can be seen within the commit history.
// WIP
#include <stdio.h>

#define list \
 o(add, double, x + y) \
 o(multi, double, x * y) \
 o(sub, double, x - y) \
 o(divi, double, x / y)

#define o(name, type, expr) \
 type name(type x, type y){ \
 return expr; \
}

list
#undef o

int main()
{
  int x = getchar() - '0';
  int y = getchar() - '0';
  int z = getchar() - '0';

  if(z == 1) printf("%f", add((double)x, (double)y));
  if(z == 2) printf("%f", multi((double)x,(double) y));
  if(z == 3) printf("%f", sub((double)x,(double) y));
  if(z == 4) printf("%f", divi((double)x, (double)y));
	
	return 0;
}
