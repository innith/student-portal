#include <string>
#include <vector>

using namespace std;

struct AcademicRecord
{
  string courseCode;
  string courseName;
  int credits;
  double grade;
};

bool isValidRecord(const AcademicRecord &record)
{
  return !record.courseCode.empty() &&
         !record.courseName.empty() &&
         record.credits > 0 &&
         record.grade >= 0.0 &&
         record.grade <= 10.0;
}