#include <iostream>

using std::cout;
using std::endl;
using std::string;

string str1 = "One two three four";
string str2 = "Five six seven eight";

int main(int argc, char *argv[])
{
  if (str1 == str2)
    cout << "strings are equal" << endl;
  else
  {
    if (str1.size() > str2.size())
      cout << "1 is bigger" << endl;
    else
      cout << "2 is bigger" << endl;
  }
  return 0;
}
