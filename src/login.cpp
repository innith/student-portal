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

bool isAdmin(const string &username, const string &password)
{
  const string actualUsername = "admin";
  const string actualPassword = "admin@123";
  return (username == actualUsername) && (password == actualPassword);
}