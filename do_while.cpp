#include <iostream>
using namespace std;
//do while会循环一次循环语句，再判断循环条件
int main()
{
    int num;
    do
    {
        cout << num << endl;
        num++;
    } while (num < 10);
    return 0;
}