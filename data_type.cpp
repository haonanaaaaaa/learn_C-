#include <iostream>
using namespace std;
#include <string>//C++风格字符串需要包含的头文件
//数据类型的作用就是给变量分配合适的内存空间
/*整形：表示整数类型的数据
short(短整型，占用2字节)，int(整形，占用4字节)
long(长整型，windows4字节，linux4字节(32位)，8字节(64位))
long long(长长整形，占用8字节)*/
//sizeof:可以统计数据类型所占内存大小，sizeof(数据类型或变量)
/*浮点型：表示小数。
单精度float占用4字节，7位有效数字。双精度double,占用8字节，15-16位有效数字
默认情况下输出小数显示6位有效数字*/
/*字符型：用于显示单个字符，单引号，只占用1个字节，存储字符的对应ASCII码*/
//转义字符，\n换行，\\反斜杠，\t水平制表符，可以整齐输出数据
/*字符串：表示一串字符，双引号*/
/*布尔类型：代表真或假的值，只有两个值true,false，占用1个字节*/
/*数据的输入：用于从键盘获取数据*/
int main()
{
    short num1 = 32768;//-32768~32767
    int num2 = 32768;//
    long num3 = 10;
    long long num4 = 10;
    float f1 = 3.14f;
    double d1 = 3.14;
    char ch = 'a';
    char str[] = "hello world";//C风格
    string str2 = "hello world";//C++风格
    bool flag = true;
    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << sizeof(num4) << endl;
    cout << f1 << endl;
    cout << d1 << endl;
    cout << ch << endl;
    cout << (int)ch <<endl;//字符型对应ASCII码
    cout << str << endl;
    cout << str2 << endl;
    cout << flag;
    return 0;
}