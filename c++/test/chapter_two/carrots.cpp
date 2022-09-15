#include <iostream>
using namespace std;

// cin cout分别是 istream ostream的对象
// << 是重新定义的运算符，后面的内容是参数
int main(){
    int carrots; // 确定了需要的内存已经内存单元名称，所有c++ 的变量必须进行声明
    cout << "how many carrots do u need? " << endl;
    cin >> carrots ;
    carrots = 25; //  = 是赋值运算符，可以连续使用 =， 赋值操作将从右往左进行
    cout << "I have " << carrots << " carrots." << endl;
    carrots = carrots - 1;
    cout << carrots; //经历了两步， 先将carrots的值替换成24， 再将24打印出来
    return 0;
    }