#include <iostream>

using namespace std;

class Time
{
public:
    Time(int ,int ,int);//�����ṹ����
    int hour;
    int minute;
    int sec;
    void get_time();//�������г�Ա����
private:
    uint8_t char1;
};
Time::Time(int h,int m,int s)  //����ṹ����
{
    hour=h;
    minute=m;
    sec=s;
}
void Time::get_time()//���干�г�Ա����
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
    Time t1(10,13,56);     //����Time�����t1����ʼ��
    // edit(&t1);
    int *p1=&t1.hour;      //����ָ���������ݵ�ָ�����p1����ʹp1ָ��t1.hour
    cout<<*p1<<endl;       
    t1.get_time();
    Time *p2=&t1;
    p2->get_time();
    void(Time::*p3)();//����ָ��Time�๫�ú�����ָ�����p3
    p3=&Time::get_time;
    (t1.*p3)();//������ָ�ĳ�Ա����

    while(1)
    {
        for(uint8_t i=0;i<100;i++)
        {

        }
    }
    return 0; // ����һ������ֵ��Ϊ������˳�״̬
}

