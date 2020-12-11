#include <iostream>
#include <string>
#include <vector>

int main(int argc, char **argv)
{
  std::string word;
  std::vector<std::string> v;
  while ((std::cin >> word))
  {
    v.push_back(word);
  }

  for (std::string word : v)
  {
    std::cout << word << std::endl;
  }
}
