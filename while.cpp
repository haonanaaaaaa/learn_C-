#include <iostream>
using namespace std;
int main()
{
    int num;
    while (num < 10)//避免死循环
    {
        cout << num << endl;
        num++;
    }
    return 0;
}