#include<iostream>
#include<string>

#include"Invoice.h"//����Invoice.h

using namespace std;

Invoice::Invoice(string number,string description,int sum,int price)//��ʼ������
{
    setnumber(number);
    setdescription(description);
    setsum(sum);
    setprice(price);
}
void Invoice::setnumber(string number)//����ʼֵnumber
{
    numberdata=number;

}
string Invoice::getnumber()//�õ���ʼֵnumber
{
    return numberdata;

}
void Invoice::setdescription(string description)//����ʼֵdescription
{
    descriptiondata=description;

}
string Invoice::getdescription()//�õ�description
{

    return descriptiondata;
}
void Invoice::setsum(int sum)//��ʼ��������
{
    sumdata=sum;
}
int Invoice::getsum()//�õ�������
{

    return sumdata;
}
void Invoice::setprice(int price)//��ʼ��price
{
    pricedata=price;

}
int Invoice::getprice()//�õ�price
{

    return pricedata;

}
int Invoice::getInvoiceAmount(int buy)//�ۼ��뵥�ۼ��㺯�������ۼ��㺯��
{
    if(buy<=0)
    {
        buy=0;

    }
    if(pricedata<=0)
    {
        pricedata=0;
    }

    return buy*pricedata;

}
