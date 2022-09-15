#include <iostream>
#include <string>
#include "MyString.hpp"
#include "MyString.cpp"
using namespace std;

int main(){
    MyString test(3, 'c');
    cout << test << endl;
    cout << test.length() << endl;
    cout << test.empty() << endl;
    test.push_back('a');
    cout << test << endl;
    test.pop_back();
    cout << test << endl;
    test.resize(5);
    cout << test << endl;
    test.resize(3,'c');
    cout << test << endl;
    test.push_back('a');
    test.push_back('c');
    cout << test <<endl;
    test.find('a', 2);
    MyString s = test.substr(2,2);
    cout << s <<endl;

    string m = "0123456789012345678901234567890123456789";
    string t;
    MyString ms = "0123456789012345678901234567890123456789";
    MyString em;
    cout << "m: "<< m.find("")<<endl;
    cout << "ms : " << ms.rfind('0', 20) << endl;
    cout << "m: "<< m.rfind('0', 20)<< endl;
    cout << "t: " << t.find("")<<endl;
    cout << "em: " << em.find("")<<endl;
    cout << "ms : " << ms.rfind("789", 60)<< endl;
    cout << "m : " << m.rfind("789", 60)<< endl;
    cout << "ms 2 : "<<ms.rfind("890",40) <<endl;
    cout << "--------------------" << endl;
    cout << "em : " << em.rfind("0") << endl; 
    cout << "t : " << t.rfind("0") << endl;
    return 0;
}