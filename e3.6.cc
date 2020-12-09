#include <iostream>

int main(int argc, char **argv)
{

  std::string str = "Hello World";

  for (auto &c : str)
  {
    c = 'x';
  }

  std::cout << str << std::endl;

  return 0;
}
