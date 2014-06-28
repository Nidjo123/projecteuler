#include <stdio.h>

int main()
{
  const int N = 1000;
  int i, res = 0;

  for (i = 0; i < 1000; i++)
    if (i % 3 == 0 || i % 5 == 0)
      res += i;

  printf("%d", res);

  return 0;
}
