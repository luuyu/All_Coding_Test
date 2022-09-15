#ifndef MyString_hpp
#define MyString_hpp

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class MyString {

public:
    MyString()       : s(0)   {}
    MyString(char c) : s(1,c) {}

    // constructor using a string literal.
    // This constructor takes the string and initialize a vector<char> as a list of characters.
    // NO NEED TO MODIFY THIS LINE
    MyString(const char* str_lit) : s(0) { 
        for (; *str_lit != '\0'; ++str_lit) { 
            s.push_back( *str_lit ); 
            } 
        }

    MyString substr(size_t pos, size_t len = -1) const;

    size_t  find(char c, size_t pos =  0) const;
    size_t rfind(char c, size_t pos = -1) const;

    size_t  find(const MyString& str, size_t pos =  0) const;
    size_t rfind(const MyString& str, size_t pos = -1) const;
    // NO NEED TO MODIFY THE ABOVE LINES.

    // -----------------------------------------------------------------------

    // TODO: Declare a new constructor that has two parameters: size_t n, char c.
    //       It should create a new MyString with n characters all equal to c.
    
    MyString(size_t n, char c):s(n,c){}
    
    vector<char>get_s() const;
    
    // TODO: Declare member functions size, length, empty, push_back, pop_back, resize.
    
    size_t size();
    bool empty();
    void push_back(char c);
    void pop_back();
    void resize(size_t n);
    void resize(size_t n, char c);

private:
    vector<char> s;

    // DON'T MODIFY THIS LINE: this line allows you to use std::cout function on MyString.
    friend std::ostream& operator<< (std::ostream& out, const MyString& str);
};

#endif /* MyString_hpp */
