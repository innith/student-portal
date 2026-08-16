#include <iostream>
#include <string>
using namespace std;

bool validateUsrname(const string &username)
{
  return (!username.empty()) && (username.length() >= 4);
}

bool validatePassword(const string &password)
{
  return (password.length() >= 6);
}