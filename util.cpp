#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string stringTrimmer(const string &text)
{
  size_t start = 0;
  size_t end = text.length();
  while (start < end && isspace(static_cast<unsigned char>(text[start])))
  {
    start++;
  }
  while (end > start && isspace(static_cast<unsigned char>(text[end - 1])))
  {
    end--;
  }
  return text.substr(start, end - start);
}