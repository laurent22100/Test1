#ifndef COMPANY_H
#define COMPANY_H
#include <string>

class Company {

private:
    string _name;
    vector <Person*> _employees;

public:
    Company(string name): _name(name) {}
    void addEmployee(Person*);
    float computeSalary(string name, string month, float baseSalary);



};
#endif // COMPANY_H
