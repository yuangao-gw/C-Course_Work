#include<iostream>
#include<string>
#include<cmath>
using namespace std;
class Package
{
	public:
		Package(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
			    const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w);
		void print() const;
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
void Package::print() const
{
	cout<<"收件人信息"<<endl<<"-------------------------------"<<endl;
	cout<<"姓名："<<rName<<"     "<<"地址："<<rAdd<<endl;
	cout<<"电话："<<rPhone<<"     "<<"邮编："<<rZIP<<endl<<endl;
	cout<<"寄件人信息"<<endl<<"-------------------------------"<<endl;
	cout<<"姓名："<<sName<<"     "<<"地址："<<sAdd<<endl;
	cout<<"电话："<<sPhone<<"     "<<"邮编："<<sZIP<<endl<<endl;
}
class Express:public Package
{
	public:
		Express(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
			    const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w);
		double CalcCost() const;
		void print() const;
	private:
		static double first;
		static double additional;
};
Express::Express(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
				 const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w)
				 :Package(pName,pAdd,pPhone,pZIP,prName,prAdd,prPhone,prZIP,w){}
double Express::CalcCost() const
{
	return first + ceil(weight -1)*additional;
}
void Express::print() const
{  
	Package::print();
	cout<<"货重："<<weight<<"  "<<"邮费："<<CalcCost()<<endl;
}
double Express::first = 15;
double Express::additional = 8;
class SpecialExpress:public Package
{
	public:
		SpecialExpress(const char *pName,const char *pAdd,const char *pPhone,const char *pZIP,
					   const char *prName,const char *prAdd,const char *prPhone,const char *prZIP,double w,double h);
		double CalcCost() const;
		void print() const;
		double payment() const;
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
inline double SpecialExpress::CalcCost() const
{
	return first + ceil(weight - 2) * additional;
}
void SpecialExpress::print() const
{
	Package::print();
	cout<<"货重："<<weight<<"  "<<"邮费："<<CalcCost()<<"  "<<"赔付："<<payment()<<endl;
}
double SpecialExpress::payment() const
{
	return (deliveryHour <= 24 ? 0 : (CalcCost()));
}
double SpecialExpress::first = 40;
double SpecialExpress::additional = 25;
int main()
{
	SpecialExpress ex("刘平","广东省广州市白云路1号","13560999906","510000",
					  "李海玲","北京市中关村南大街12号","15807162735","100000",3.27,25);
	ex.print();
	return 0;
}
