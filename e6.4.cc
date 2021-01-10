#include <iostream>

double fact(double input)
{
  if (input == 1)
    return 1;
  return input * fact(input - 1);
}

int main(int argc, char **argv)
{
  double input;

  std::cout << "input number" << std::endl;

  std::cin >> input;

  std::cout << "result: " << fact(input) << std::endl;

  return 0;
}
