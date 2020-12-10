#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::getline;
using std::ispunct;
using std::string;

int main(int argc, char **argv)
{
  string line;
  while (getline(cin, line))
  {
    for (char c : line)
    {
      if (!ispunct(c))
      {
        cout << c;
      }
    }
    cout << endl;
  }

  return 0;
}
