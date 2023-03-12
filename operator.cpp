#include <iostream>
using namespace std;
int main()
{
    int a1 = 10;
    int b1 = 3;
    cout << a1+b1-a1*b1 << endl;
    cout << a1/b1 << endl;//整数相除结果依然是整数，小数部分直接舍去
    cout << a1%b1 << endl;//取余，小数之间不能取余
    double d1 = 0.5;
    double d2 = 0.22;
    cout << d1/d2 << endl;
    int a2 = 9;
    int b2 = ++a2*10;//前置递增先让变量+1，再进行表达式运算；前置递减同理
    cout << a2 << endl;
    cout << b2 << endl;
    int a3 = 10;
    int b3 = a3++*10;//后置递增先进行表达式运算，再让变量+1；后置递减同理
    cout << a3 << endl;
    cout << b3 << endl;
    //比较运算符用于表达式的比较，并返回1或0
    int a = 10;
    int b = 20;
    cout << (a == b);
    //逻辑运算符，！非，&&与，||或
    return 0;
}