#include <iostream>
using namespace std;
//变量：给一段指定的内存空间起名，方便操作这段内存
//常量：记录程序中不可更改的数据
//在给变量或常量起名时，不要使用C++关键字
//1.#define 宏常量，通常在文件上方定义，表示一个常量
//2.const修饰的变量，在变量定义前加关键字const，修饰该变量为常量，不可修改
#define day 7;
int main()
{
    int a = 10;
    cout << a << endl;
    const int month = 12;
    cout << month << endl;
    cout << day;
    return 0;
}