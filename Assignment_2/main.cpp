#include <iostream>

using namespace std;

// creating the class Employee
class Employee
{
  public:
  virtual int calculate_weekly_salary() = 0;
  virtual int compute_health_care_contributions() = 0;
  virtual int earned_vacation_days() = 0;
};

// creating the class for professional workers
class Professional : public Employee
{
  public:
  int salary;
  int vacation_days;
  int calculate_weekly_salary()
  {
    return salary/4;
  }
  int compute_health_care_contributions()
  {
    return salary*0.1;
  }
  int earned_vacation_days()
  {
    return vacation_days/5;
  }
};

// creating the class for non-professional workers
class Nonprofessional : public Employee
{
  public:
  int hourly_rate;
  int hours_worked;
  int calculate_weekly_salary()
  {
    return hourly_rate*hours_worked;
  }
  int compute_health_care_contributions()
  {
    return hourly_rate*hours_worked*0.1;
  }
  int earned_vacation_days()
  {
    return hours_worked/40;
  }
};

int main()
{
  Professional p;  // p is the object for professional class
  p.salary = 10000;
  p.vacation_days = 10;
  cout<<"Professional:"<<endl;
  cout<<"Weekly Salary: "<<p.calculate_weekly_salary()<<endl;
  cout<<"Health Care Contribution: "<<p.compute_health_care_contributions()<<endl;
  cout<<"Vacation Days Earned: "<<p.earned_vacation_days()<<endl;
  Nonprofessional n;  // n is the object for non-professional class
  n.hourly_rate = 30;
  n.hours_worked = 40;
  cout<<"Nonprofessional:"<<endl;
  cout<<"Weekly Salary: "<<n.calculate_weekly_salary()<<endl;
  cout<<"Health Care Contribution: "<<n.compute_health_care_contributions()<<endl;
  cout<<"Vacation Days Earned: "<<n.earned_vacation_days()<<endl;
}