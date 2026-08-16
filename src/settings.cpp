#include <string>
#include <unordered_set>
using namespace std;

struct UserSettings
{
  bool darkMode;
  bool emailNotifications;
  string language;
};

bool isValidLanguage(const string &language)
{
  static const std::unordered_set<std::string> Languages = {
      "English", "Hindi", "Bengali", "Telugu", "Marathi",
      "Tamil", "Gujarati", "Urdu", "Kannada", "Odia",
      "Malayalam", "Punjabi", "Assamese"};

  return Languages.count(language) > 0;
}

bool isValidTheme(bool darkMode)
{
  return darkMode == true || darkMode == false;
}