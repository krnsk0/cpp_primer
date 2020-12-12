#include <iostream>
#include <iterator>

int main(int argc, char **argv)
{
  int array[10];
  int *ptr = array;
  while (ptr != std::end(array))
  {
    *ptr = 0;
    ptr += 1;
  }

  for (auto i = 0; i < 10; i += 1)
  {
    std::cout << i << ": " << array[i] << std::endl;
  }

  return 0;
}
