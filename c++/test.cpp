#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout << n << " isn't a prime" << endl;
            return 1;
        }
    }
    cout << n << " is a prime" << endl;
    return 0;
    //cout<< 5 << endl;
}