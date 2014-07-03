#include <cstdio>

int main()
{
  const int m = 10001;
  int c = 1, n = 3;

  int p[m] = {2};

  while (c < m) {
    bool prime = true;

    for (int i = 0; p[i] * p[i] <= n; i++)
      if (n % p[i] == 0) {
        prime = false;
        break;
      }

    if (prime)
      p[c++] = n;

    n += 2;
  }

  printf("%d", p[m - 1]);

  return 0;
}
