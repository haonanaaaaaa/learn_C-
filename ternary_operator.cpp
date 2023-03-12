#include <iostream>
using namespace std;
//表达式1 ？表达式2 ：表达式3。表达式1值为真，执行表达式2，为假执行表达式3
int main()
{
    int a = 10;
    int b = 20;
    int c;
    int d;
    c = (a > b ?  a : b);
    cout << c << endl;
    (a > b ? a : b) = 100;//三目运算符返回的是变量，可以继续赋值
    cout << "a = " << a << endl;
    cout << "b = " << b ;
    return 0;
}