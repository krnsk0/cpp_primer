#include <iostream>
#include <string>
#include <vector>
#include <locale>

int main(int argc, char **argv)
{
  std::string word;
  std::vector<std::string> v;
  while (std::cin >> word)
  {
    v.push_back(word);
  }

  int word_count = 0;
  for (auto w_itr = v.begin(); w_itr != v.end(); w_itr += 1)
  {
    for (auto c_itr = w_itr->begin(); c_itr != w_itr->end(); c_itr += 1)
    {
      *c_itr = toupper(*c_itr);
    }
    std::cout << *w_itr << ' ';

    if (word_count > 7)
      word_count = 0;
    if (word_count == 7)
    {
      std::cout << std::endl;
    }
    word_count += 1;
  }

  std::cout << std::endl;

  return 0;
}
