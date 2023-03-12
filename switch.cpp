#include <iostream>
using namespace std;
//switch判断时只能是整形或字符型，不能是区间；优点是结构清晰执行效率高
int main()
{
    cout << "请打分" << endl;
    int score;
    cin >> score;
    cout << "分数为： " << score << endl;
    switch (score)
    {
    case 10:
        cout << "经典" << endl;
        break;
    case 9:
        cout << "经典" << endl;
        break;
    default:
        cout << "垃圾" << endl;
        break;
    }
    return 0;
}