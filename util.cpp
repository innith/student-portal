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

bool isValidEmail(const string &email)
{
  size_t atPosition = email.find('@');
  size_t dotPosition = email.find('.', atPosition);
  return atPosition != string::npos && dotPosition != string::npos && atPosition > 0 &&
         dotPosition > atPosition + 1 && dotPosition < email.length() - 1;
}