#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Package
{
	public:
		Package(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
			    const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w);
		virtual double CalcCost()
		{
			return 0;
		}
	protected:
		string sName;
		string sAdd;
		string sPhone;
		string sZIP;

		string rName;
		string rAdd;
		string rPhone;
		string rZIP;

		double weight;
};
Package::Package(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
			    const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w)
				:sName(pName),sAdd(pAdd),sPhone(pPhone),sZIP(pZIP),rName(prName),rAdd(prAdd),rPhone(prPhone),rZIP(prZIP)
{
	weight = (w > 0 ? w : 0);
}
class Express:public Package
{
	public:
		Express(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
			    const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w);
		double CalcCost();
	private:
		static double first;
		static double additional;
};
Express::Express(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
				 const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w)
				 :Package(pName,pAdd,pPhone,pZIP,prName,prAdd,prPhone,prZIP,w){}
double Express::CalcCost()
{
	return first + ceil(weight -1)*additional;
}
double Express::first = 15;
double Express::additional = 8;
class SpecialExpress:public Package
{
	public:
		SpecialExpress(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
					   const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w,double h);
		double CalcCost();
		double payment();
	private:
		static double first;
		static double additional;
		double deliveryHour;
};
SpecialExpress::SpecialExpress(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
							   const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w,double h)
							   :Package(pName,pAdd,pPhone,pZIP,prName,prAdd,prPhone,prZIP,w)
{
	deliveryHour = h;
}
double SpecialExpress::CalcCost()
{
	return first + ceil(weight - 2) * additional;//上取整
}
double SpecialExpress::payment()
{
	return deliveryHour > 24 ? CalcCost():0;
}
double SpecialExpress::first = 40;
double SpecialExpress::additional = 25;
int main()
{
	SpecialExpress s("刘平","广东省广州市白云路1号","13560999906","510000",
					  "李海玲","北京市中关村南大街12号","15807162735","100000",3.27,25.1);
	Express ex1("邹明","四川省成都市人民北路1号","02880120973","600000"
				,"李霞","河南省郑州市西大街12号","13002823888","300012",1.3);
	Express ex2("刘恒","云南省丽江市四方街5号","08887543012","700003"
				,"赵川","广西省南宁市东大街6号","13795669060","520003",4.9);

	const int SIZE = 3;
	Package *ptr[SIZE] = {&s, &ex1, &ex2};

	double sum = 0;
	for(int i = 0; i < SIZE; i++)
		sum = sum + ptr[i]->CalcCost();
	cout<<"今日营业额为："<<sum<<endl;
	return 0;
}
