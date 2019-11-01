#include <string>
using namespace std;
class Invoice
{
	public:
		Invoice(string,string,int,int);//构造函数； 
		void setnumber(string);
		string getnumber();
		void setdes(string);
		string getdes();
		void setamount(int);
		int getamount();
		void setprice(int);
		int getprice();
		int getInvoiceAmount(int,int);
	private:
		string number;//零件号； 
		string des;//零件描述； 
		int amount;//零件数量； 
		int price;	//零件单价； 
};
