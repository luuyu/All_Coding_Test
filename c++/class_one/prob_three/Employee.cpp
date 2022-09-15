#include "Employee.hpp"

void Employee::set_name(const string& s){
    name_ = s;
}

void Employee::set_salary(double d){
    salary_ = d;
}

void Employee::set_age(int n){
    age_ = n;
}

string Employee::get_name() const{
    return name_;
}

double Employee::get_salary() const{
    return salary_;
}

int Employee::get_age() const{
    return age_;
}

void Employee::print() const{
    std::cout << "Name   : " << name_ << endl;
    std::cout << "Salary : " << "$" << salary_ << endl;
    std::cout << "Age    : " << age_ << endl; 
}