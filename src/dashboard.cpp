#include <string>
using namespace std;

struct DashboardStats
{
  int courses;
  int assignments;
  int completedAssignments;
};

int completionPercentage(const DashboardStats &stats)
{
  if (stats.assignments <= 0)
  {
    return 0;
  }

  return (stats.completedAssignments * 100) / stats.assignments;
}

string courseStatus(int courses)
{
  if (courses <= 0)
  {
    return "No courses registered";
  }
  if (courses < 4)
  {
    return "Light course load";
  }
  return "Active course load";
}