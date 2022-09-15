#include "Company.hpp"

void Company::add_employee(Employee& e){
    vec_employees_.push_back(&e);
}

void Company::sort_by_salary(){
    for(int i = 0 ; i < vec_employees_.size(); i++){
        for(int j = i; j < vec_employees_.size(); j++){
            if(vec_employees_[j]->get_salary() > vec_employees_[i]->get_salary()){
                swap(vec_employees_[i], vec_employees_[j]);
            }
        }
    }
}

void Company::increase_salary(double rate){
    for(int i = 0 ; i < vec_employees_.size() ; i++){
        vec_employees_[i]->set_salary( (1+rate) * vec_employees_[i]->get_salary());
    }
}

string Company::get_name() const{
    return name_;
}

vector<Employee*> Company::get_employees() const{
    return vec_employees_;
}

void Company::print() const{
    cout << "Company name : " << name_ << endl;
    cout << "List of Employee : " << endl;
    if(vec_employees_.size() != 0){
        for(int i = 0 ; i < vec_employees_.size() ; i++){
            vec_employees_[i]->print();
        }
    }
    else
        cout << "None" << endl;  
}