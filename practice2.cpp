#include <iostream>
using namespace std;
#include <ctime>
//随机数种子利用系统时间生成随机数，防止每次随机数都一样
int main()
{
    srand((unsigned int)time(NULL));
    int num = rand()%100 + 1;
    int val;
    while(1)
    {
        cin >> val;
        if(val > num)
        {
            cout << "大了" << endl;
        }
        else if(val < num)
        {
            cout << "小了" << endl;
        }
        else
        {
            cout << "对了" << endl;
            break;//退出当前循环
        }
    }
    return 0;
}