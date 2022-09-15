#include "MyVector.hpp"


using namespace std;

int main(){


    cout << "\nXXX Initialize v1 XXX" << endl;
    MyVector v1;
    v1.push_back(12);
    v1.push_back(1);
    v1.push_back(-10);
    v1.push_back(-20);
    v1.push_back(-20);
    v1.push_back(-10);
    
    cout << "v1        = "; 
    v1.print(); 
    cout << endl;
    cout << "v1.size() = " << v1.size() << endl << endl;
    
    cout << "\nXXX clear XXX" << endl;
    v1.clear();
    cout << "v1        = "; 
    v1.print(); 
    cout << endl;
    
    
    cout << "\nXXX Push back again XXX" << endl;
    v1.push_back(12);
    v1.push_back(1);
    v1.push_back(-1);
    v1.push_back(-2);
    v1.push_back(-2);
    v1.push_back(-1);
    cout << "v1        = "; 
    v1.print(); 
    cout << endl;
    
    
    cout << "\nXXX Initialize v2 XXX" << endl;
    MyVector v2;
    v2.push_back(1);
    v2.push_back(2);
    v2.push_back(3);
    v2.push_back(2);
    v2.push_back(5);
    v2.push_back(5);
    cout << "v2        = "; v2.print(); cout << endl;
    cout << "v2.size() = " << v2.size() << endl << endl;
    

    cout << "\nXXX Dot product XXX" << endl;
    cout << "v1.dot(v2) = " << v1.dot(v2) << endl;
    

    cout << "\nXXX After push_back(v2) XXX" << endl;
    v1.push_back(v2);
    cout << "v1 = "; v1.print(); cout << endl;
    
    
    cout << "\nXXX Alternating sum XXX" << endl;
    cout << "v1.alternating_sum() = " << v1.alternating_sum() << endl;
    
    
    cout << "\nXXX Remove duplicates XXX" << endl;
    v1.remove_duplicates();
    cout << "v1 = "; v1.print(); cout << endl;
    
    
    cout << "\nXXX Pop back XXX" << endl;
    v1.pop_back();
    v1.pop_back();
    cout << "v1 = "; v1.print(); cout << endl;
    
    
    cout << "\nXXX Sort XXX" << endl;
    v1.sort();
    cout << "v1 = "; v1.print(); cout << endl;
    v2.sort();
    cout << "v2 = "; v2.print(); cout << endl;
    
    
    cout << "\nXXX isEqual XXX" << endl;
    MyVector v3(v1);
    cout << boolalpha;
    cout << "v1.isEqual(v3) = " << v1.isEqual(v3) << endl;
    cout << "v1.isEqual(v2) = " << v1.isEqual(v2) << endl;
    
    cout << "\nafter XXX reverse" << endl;
    v1.reverse();
    cout << "v1 = "; v1.print(); cout << endl;

}
