#include <iostream>
#include <iterator>

int main(int argc, char **argv)
{
  int a1[5] = {1, 2, 3, 4, 5};
  int a2[5] = {1, 2, 3, 4, 4};

  int *ptr1 = a1;
  int *ptr2 = a2;
  while (ptr1 != std::end(a1) && ptr2 != std::end(a2))
  {
    if (*ptr1 != *ptr2)
    {
      std::cout << "arrays not equal" << std::endl;
      return 1;
    }
    ptr1 += 1;
    ptr2 += 1;
  }

  std::cout << "arrays equal" << std::endl;
  return 0;
}
