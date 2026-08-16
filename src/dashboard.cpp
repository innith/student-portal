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