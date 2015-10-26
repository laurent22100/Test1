#include "Company.h"


void Company::addEmployee(Person* pers) {

    _employees.pushback(pers);

}

float computeSalary(string name, string month, float baseSalary) {

    float final_salary;
    float days;

    for (int i; i<size(_employees);i++)
      {

        if (_employees[i]->getName()== name.str_c ) { final_salary = baseSalary + _employees[i]->totalExpenses(month.str_c);}

      }
}
