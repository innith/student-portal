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
bool authenticateUser(const string &username, const string &password)
{
  const string storedUsername = "student";
  const string storedPassword = "Student@123";

  return username == storedUsername && password == storedPassword;
}

string getLoginError(const string &username, const string &password)
{
  if (!validateUsrname(username))
  {
    return "Username must contain at least four characters.";
  }

  if (!validatePassword(password))
  {
    return "Password must contain at least eight characters.";
  }
  if (!authenticateUser(username, password))
  {
    return "Invalid username or password.";
  }
  return "";
}

int recordLoginAttempt(bool successful, int currentAttempts)
{
  if (successful)
  {
    return 0;
  }

  return currentAttempts + 1;
}