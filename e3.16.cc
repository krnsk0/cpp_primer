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
  for (std::string w : v)
  {
    for (char &c : w)
    {
      c = toupper(c);
    }
    std::cout << w << ' ';

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
