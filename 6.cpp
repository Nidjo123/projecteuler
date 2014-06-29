#include <cstdio>

int main()
{
  int sum = 0;
  int sumsq = 0;

  for (int i = 1; i <= 100; i++) {
    sum += i;
    sumsq += i * i;
  }

  printf("%d", sum * sum - sumsq);

  return 0;
}
