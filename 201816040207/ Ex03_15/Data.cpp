#include<iostream>
#include<string>//�����
#include"Data.h"//����data.h

using namespace std;

Data::Data(int year, int month,int day)
{
    setData(year,month,day);//��ֵ
    judgeData();
}
void Data::setData(int year, int month,int day)
{
    yeardata = year;
    monthdata = month;
    daydata = day;
}
void Data::displayData()
{
    cout<<yeardata<<"/"<<monthdata<<"/"<<daydata<<endl;//��ӡ���
}
void Data::judgeData()//�ж��·��Ƿ񳬳�
{
    if(monthdata>12||monthdata<1)
    {
        monthdata = 1;
    }

}



