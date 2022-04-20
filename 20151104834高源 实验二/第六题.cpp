#include<iostream>
#include<string>
using namespace std;
class CreditCard
{
private:
	string id;
	string name;
	string pwd;
	double balance;
	int day;

	static double annualFee;
	static int deadtime;
	static double rate;
public:
	CreditCard(string pid, string pn,string pp, double b, int d);
	void print();
};

CreditCard::CreditCard(string pid, string pn,string pp, double b, int d)
{
	id = pid;
	name = pn;
	pwd = pp;
	balance = b;
	day = d;
}

double CreditCard::annualFee = 100;
int CreditCard::deadtime = 50;
double CreditCard::rate = 5.0/10000;

void CreditCard::print()
{
	rate = 5.0/10000*balance*(day-50);
	cout<<"����"<<"\t\t"<<"����"<<"\t"<<"����"<<"\t"<<"�������"<<"\t"<<"��Ϣ"<<"\t\t"<<"����ܶ�"<<endl;
	cout<<id<<"\t"<<name<<"\t"<<balance<<"\t"<<day-50<<"\t\t"<<rate<<"\t"<<balance+rate<<endl;
}
int main()
{
	CreditCard c("95588023000","�ܻ�","111111",-521.5,75);

	cout<<"                                     Ƿ��֪ͨ                       "<<endl;
	cout<<"------------------------------------------------------------------------------"<<endl;
	c.print();
	return 0;
}