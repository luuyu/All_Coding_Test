#include "Company.hpp"
#include "Company.cpp"

using namespace std;

int main(){
    Employee e1;

    cout << "\nChecking the default constructor of Employee\n\n";
    e1.print();

    e1.set_name("John");
    e1.set_salary(50000);
    e1.set_age(25);

    cout << "\nChecking the mutators of Employee\n\n";
    e1.print();

    Employee e2("Paul", 75000, 23);
    Employee e3("George", 65000, 22);
    Employee e4("Ringo", 72000, 25);

    cout << "\nPrinting out Employee objects\n\n";
    // Employee description
    e1.print();
    e2.print();
    e3.print();
    e4.print();

    Company c0;

    cout << "\nChecking the default constructor of Company\n\n";    
    c0.print();

    Company c1("Company A");

    cout << "\nChecking the constructor of Company\n\n";
    c1.print();

    c1.add_employee(e1);
    c1.add_employee(e2);
    c1.add_employee(e3);
    c1.add_employee(e4);

    c1.increase_salary(0.2);
    c1.sort_by_salary();

    cout << "\nAfter c1.increase_salary and c1.sort_by_salary.\n\n";
    c1.print();


}