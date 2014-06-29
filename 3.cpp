#include <iostream>

int main()
{
  long long N = 600851475143;
  long long f = 3;

  while (N % 2 == 0)
    N /= 2;

  while (N > 1) {
    while (N % f) f += 2;

    while (N % f == 0) N /= f;
  }

  std::cout << (N > f ? N : f) << std::endl;

  return 0;
}
