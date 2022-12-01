#pragma once

#include <iostream>
#include<string>
#include<conio.h>
#include<math.h>

using namespace std;

class Employee // Created a class called employee
{

public:

    virtual int calculate_salary() = 0; // set the salary to 0.

    virtual int Holidays() = 0; // set the number of holidays of the workers to 0.

    virtual int calculate_healthcare() = 0;

};


class Professional : public Employee // this is a class for all the professional workers 
{
public:
    int salary_workers; // defined objects to return

    int holidays;

    int Holidays()
    {
        return salary_workers / 5;
    }
    int calculate_salary()
    {
        return salary_workers / 4;
    }
    int calculate_healthcare()
    {
        return holidays * 0.1; // the percentage of money distribution
    }
    
};


class Nonprofessional : public Employee // this is a class for all the non-professional workers 
{
public:

    int hourly_pay;

    int total_hours_work;

    int calculate_salary()
    {
        return hourly_pay * total_hours_work; // to calculate total salary
 
    }
    int calculate_healthcare()
    {
        return hourly_pay * total_hours_work * 0.1;
    }
    int Holidays()
    {
        return total_hours_work / 40;
    }
};
