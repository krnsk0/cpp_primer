#include <iostream>
#include <vector>

int main(int argc, char **argv)
{
  std::vector<int> vec = {1,
                          2,
                          3,
                          4,
                          5,
                          6,
                          7,
                          8,
                          9,
                          10};

  // for-style iterator
  for (auto itr = vec.begin(); itr != vec.end(); itr += 1)
  {
    *itr *= 2;
  }

  // while-style iterator
  auto itr = vec.cbegin();
  while (itr != vec.cend())
  {
    std::cout << *itr << std::endl;
    itr += 1;
  }

  return 0;
}
