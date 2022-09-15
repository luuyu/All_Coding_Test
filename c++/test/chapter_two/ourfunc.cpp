#include <iostream>
using namespace std;

void simon(int);
int stonetolb(int);

int main(){
    simon(3);
    cout << "pick a integer: " << endl;
    int count;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;

    int stone;
    cout << "input the num of stone: " << endl;
    cin >> stone;
    cout <<  "all the stone wights: " << stonetolb(stone) << endl;
    return 0; 
    // main() 函数的返回值是返回给了操作系统 
}

/* 
type func_name(args list){
    statements;
} 
// c++ 不允许函数嵌套
*/
void simon(int n){
    cout << "Simon told u touch your toes " << n << " times!"<< endl;
}

int stonetolb(int n){
    return 14 * n;
}