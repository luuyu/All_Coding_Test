#include <iostream>
#include <cmath>

using namespace std;

/**
 * Find nth prime. Given unsigned integer n, it will print out nth prime number.
 * @param n : unsinged integer n.
 * @return nth prime number.
 */
int find_nth_prime(unsigned int n){
    if(n == 1){
        return 2;
    }
    else{
        int flag = 1; //计数
        for(int m = 3 ; m < 1000 ; m+=2){
            bool plag = true; //标志
            for(int i = 2; i <= sqrt(m); i++){
                if(m % i == 0 ){
                    plag = false;
                }
            }
            if(plag){
                flag++;
                //plag = true;
                if(flag == n){ 
                    cout << "Flag = "<< flag <<endl;
                    return m;
                }
            }
        }
    }
}