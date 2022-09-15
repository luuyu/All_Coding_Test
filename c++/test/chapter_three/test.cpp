#include <iostream>
using namespace std;
int main(){
    int i=5;
    int *p;
    p=&i;
    int **q;
    q=&p;
    printf("%d",**q);  //输出结果是5
    cout << " " << *q;
}