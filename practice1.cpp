#include <iostream>
using namespace std;
int main()
{
    int num1;
    int num2;
    int num3;
    cout << "请输入小猪的体重" <<endl;
    cin >> num1;
    cin >> num2;
    cin >> num3;
    cout << "A的体重为" << num1 << endl;
    cout << "B的体重为" << num2 << endl;
    cout << "C的体重为" << num3 << endl;
    if(num1 > num2)
    {
        if(num1 > num3)
        {
            cout << "A最重" << endl;
        }
        else
        {
            cout << "C最重" << endl;
        }
    }
    else
    {
        if(num2 > num3)
        {
            cout << "B最重" << endl;
        }
        else
        {
            cout << "C最重" << endl;
        }
    }
}