#include <iostream>
// include是预处理的编译指令
// iostream 用于将源代码文件和iostream组合成一个复合文件，编译的下一阶段将会使用该文件
using namespace std;
// using 是编译指令，使得std::cout -> cout
// std是一个名称空间，用于指定输出

// main() 函数不接受任何参数，其描述的实际上是程序和操作系统之间的接口
// main() 函数是必须的，程序从main()函数开始执行
int main(){
    cout<< "this is my first cpp";
    // 实际上<<是插入符号，是将string变量插入到了cout输出流中
    cout<<endl;
    cout<< "you won't forget it";
    return 0; // 函数返回语句
}
