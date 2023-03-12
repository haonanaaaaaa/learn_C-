#include <iostream>
using namespace std;
int main()
{
    //单行if语句
    /*int score;
    cout <<"输入分数： ";
    cin >> score;
    cout << score << endl;
    if(score > 600)
    {
        cout <<"恭喜！";
    }*/
    //if else结构
    /*int score;
    cout << "请输入分数" << endl;
    cin >> score;
    cout << score << endl;
    if(score > 600)
    {
        cout << "恭喜！" << endl;
    }
    else
    {
        cout << "再努力" << endl;
    }*/
    //多条件if语句
    /*int score;
    cout << "请输入分数" << endl;
    cin >> score;
    cout << score << endl;
    if(score > 500)
    {
        cout << "一本" << endl;
    }
    else if(score > 400)
    {
        cout << "二本" << endl;
    }
    else if(score > 300)
    {
        cout << "三本" << endl;
    }
    else
    {
        cout << "没考上" << endl;
    }*/
    //嵌套if
    int score;
    cout << "请输入分数" << endl;
    cin >> score;
    cout << score << endl;
    if(score > 500)
    {
        if(score > 700)
        {
            cout << "清华" << endl;
        }
        else if(score > 650)
        {
            cout << "北大" << endl;
        }
        else
        {
            cout << "人大" << endl;
        }
    }
    else if(score > 400)
    {
        cout << "二本" << endl;
    }
    else if(score > 300)
    {
        cout << "三本" << endl;
    }
    else
    {
        cout << "没考上" << endl;
    }
    return 0;
}