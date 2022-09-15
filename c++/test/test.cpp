#include <iostream>
using namespace std;
int main(){
    int a[10] = {1,2,4,3,2,6,1,2,3,5};
    for(int i = 0; i < 10; i++){
        for(int j = i; j < 10; j++){
            if(a[j] < a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
    for(int i = 0 ; i < 10; i ++){
        cout<<a[i]<<endl;
    }
}