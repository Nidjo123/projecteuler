#include <cstdio>
#include <algorithm>

bool isPalindrome(int n)
{
  int nn = n;
  int rev = 0;

  while (nn) {
    rev = rev * 10 + nn % 10;
    nn /= 10;
  }

  return n == rev;
}

int main()
{
  int res = 0;

  for (int i = 100; i < 1000; i++)
    for (int j = i + 1; j < 1000; j++)
      if (isPalindrome(i * j))
        res = std::max(res, i * j);

  printf("%d", res);

  return 0;
}
