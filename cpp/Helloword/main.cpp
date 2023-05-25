#include <iostream>

using namespace std;

class Time
{
public:
    Time(int ,int ,int);//声明结构函数
    int hour;
    int minute;
    int sec;
    void get_time();//声明公有成员函数
private:
    uint8_t char1;
};
Time::Time(int h,int m,int s)  //定义结构函数
{
    hour=h;
    minute=m;
    sec=s;
}
void Time::get_time()//定义共有成员函数
{
    cout<<hour<<":"<<minute<<":"<<sec<<endl;
}
void edit(Time *data)
{
    data->hour=1;
    data->minute=2;
    data->sec=3;
    cout<<data->hour<<data->minute<<data->sec<<endl;
}
int main()
{
    cout<<"Hello World"<<endl;
    Time t1(10,13,56);     //定义Time类对象t1并初始化
    // edit(&t1);
    int *p1=&t1.hour;      //定义指向整型数据的指针变量p1，并使p1指向t1.hour
    cout<<*p1<<endl;       
    t1.get_time();
    Time *p2=&t1;
    p2->get_time();
    void(Time::*p3)();//定义指向Time类公用函数的指针变量p3
    p3=&Time::get_time;
    (t1.*p3)();//调用所指的成员函数

    while(1)
    {
        for(uint8_t i=0;i<100;i++)
        {

        }
    }
    return 0; // 返回一个整型值作为程序的退出状态
}

