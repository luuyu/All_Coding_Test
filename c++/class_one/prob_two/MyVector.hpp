#ifndef MyVector_hpp
#define MyVector_hpp

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
using namespace std;

class MyVector{
public:
    // constructors. DO NOT MODFY
    MyVector()                      : v_(0)          {}
    MyVector(int n)                 : v_(1,n)        {}
    MyVector(size_t m, int n)       : v_(m,n)        {}
    MyVector(const vector<int>& v)  : v_(v)          {}
    MyVector(const MyVector& other) : v_(other.v_)   {}
    // ------------------------------------------------------------
    
    /**
     * TODO: Write comments
     */
    void push_back(int n);
    
    /**
     * TODO: Write comments
     */
    void push_back(const MyVector& other);

    /**
     * TODO: Write comments
     */
    void clear();
    
    /**
     * TODO: Write comments
     */
    bool isEqual(const MyVector& other);
    
    /**
     * TODO: Write comments
     */
    void pop_back();
    
    /**
     * TODO: Write comments
     */
    size_t size() const;
    
    /**
     * TODO: Write comments
     */
    int dot(const MyVector& other) const;
    
    /**
     * TODO: Write comments
     */
    int alternating_sum() const;
    
    /**
     * TODO: Write comments
     */
    void reverse();
    
    /**
     * TODO: Write comments
     */
    void remove_duplicates();
    
    /**
     * TODO: Write comments
     */
    void sort();
 

// ------------------------------------------------------------
// DO NOT MODIFY BELOW 
    
    /**
     * print the items of the member variable v_.
     */
    void print() const;

    /**
     * Return the member variable v_.
     * @return vector<int> v_.
     */
    vector<int> get_v() const;
    
    
private:
    vector<int> v_;
};

#endif /* MyVector_hpp */
