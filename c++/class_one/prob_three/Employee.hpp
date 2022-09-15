#ifndef EMPLOYEE_HPP
#define EMPLOYEE_HPP

#include <iostream>
#include <string>

using namespace std;

class Employee{
public:
    // TODO: Complete constructors
    //Employee(const string & na = "No name", double sa = 0.0, int ag = 0) : name_(na), salary_(sa), age_(ag) {};
    Employee() : name_("No name"), salary_(0.0), age_(0) {}
    Employee(const string & na, double sa, int ag) : name_(na), salary_(sa), age_(ag) {}

    // DO NOT MODIFY BELOW
    void set_name(const string& s);
    void set_salary(double d);
    void set_age(int n);

    string get_name() const;
    double get_salary() const;
    int    get_age() const;
    void   print() const;

private:
    string name_;
    double salary_;
    int    age_;
};


#endif