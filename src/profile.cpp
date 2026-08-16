#include <string>
using namespace std;

struct StudentProfile
{
  string name;
  string email;
  string department;
  int semester;
};

bool isValidProfile(const StudentProfile &profile)
{
  return !profile.name.empty() &&
         !profile.email.empty() &&
         !profile.department.empty() &&
         profile.semester >= 1 &&
         profile.semester <= 8;
}