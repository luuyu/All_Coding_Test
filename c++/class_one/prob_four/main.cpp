#include <iostream>
#include "p1.hpp"

using namespace std;

int main(){
    cout << find_nth_prime(1) << endl; // should print out 2
    cout << find_nth_prime(2) << endl; // should print out 3
    cout << find_nth_prime(5) << endl; // should print out 11
    cout << find_nth_prime(7) << endl; // should print out 17
}