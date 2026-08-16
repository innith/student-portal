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

int profileCompletion(const StudentProfile &profile)
{
  int completed = 0;

  if (!profile.name.empty())
    completed++;
  if (!profile.email.empty())
    completed++;
  if (!profile.department.empty())
    completed++;
  if (profile.semester >= 1 && profile.semester <= 8)
    completed++;

  return completed * 25;
}