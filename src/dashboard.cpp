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

int pendingAssignments(const DashboardStats &stats)
{
  if (stats.completedAssignments >= stats.assignments)
  {
    return 0;
  }

  return stats.assignments - stats.completedAssignments;
}

string dashboardSummary(const DashboardStats &stats)
{
  return "Courses: " + to_string(stats.courses) +
         ", Pending assignments: " +
         to_string(pendingAssignments(stats)) +
         ", Completion: " +
         to_string(completionPercentage(stats)) + "%";
}