#ifndef COMPANY_HPP
#define COMPANY_HPP

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>  
#include "Employee.hpp"
#include "Employee.cpp"

using namespace std;

class Company{
public:
    // TODO: Complete constructors
    //Company(const string & na = "No name")
    //Company(const std::string & na = "No name", vector<Employee*> & vec = {});
    Company() : name_("No name"), vec_employees_() {}
    Company(const std::string & na) : name_(na), vec_employees_() {}

    // DO NOT MODIFY BELOW
    void add_employee(Employee& e);
    void sort_by_salary();
    void increase_salary(double rate);

    string get_name() const;
    vector<Employee*> get_employees() const;
    void print() const;

private:
    string name_;
    vector<Employee*> vec_employees_;
};

#endif
