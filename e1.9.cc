#include <iostream>

int main()
{
  int i = 50;
  int sum = 0;
  while (i <= 500)
  {
    sum += i;
    i += 1;
  }

  std::cout << sum << std::endl;

  return 0;
}
