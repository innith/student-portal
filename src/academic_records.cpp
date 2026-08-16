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

double calculateGPA(const vector<AcademicRecord> &records)
{
  if (records.empty())
  {
    return 0.0;
  }
  double totalGradePoints = 0.0;
  int totalCredits = 0;
  for (const AcademicRecord &record : records)
  {
    if (isValidRecord(record))
    {
      totalGradePoints += record.grade * record.credits;
      totalCredits += record.credits;
    }
  }
  if (totalCredits == 0)
  {
    return 0.0;
  }
  return totalGradePoints / totalCredits;
}