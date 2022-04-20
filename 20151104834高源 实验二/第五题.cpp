#include<iostream>
#include<string>
using namespace std;
class SavingAccount
{
public:
	SavingAccount(string pid,string pn,string pw,double b);
	void Credit(double amount);
	void Debit(double amount);
	double Interest();
	void Print();
private:
	string id;
	string name;
	string pwd;
	double balance;
	static double interest;
};
SavingAccount::SavingAccount(string pid,string pn,string pw,double b)
{
	id = pid;
	name = pn;
	pwd = pw;
	balance = b;
}
void SavingAccount::Credit(double amount)
{
	if(amount < 0)
	{
		cout<<"存入金额不应该是负数！"<<endl;
		exit(0);
	}
	balance = balance + amount;
}
void SavingAccount::Debit(double amount)
{
	if(amount < 0)
	{
		cout<<"取出金额不应该是负数！"<<endl;
		exit(0);
	}
	else if(amount > balance)
	{
		cout<<"余额不足！"<<endl;
		exit(0);
	}
	balance = balance - amount;
}
double SavingAccount::Interest()
{
	return balance * interest;
}
void SavingAccount::Print()
{
	cout<<"帐号："<<id<<endl;
	cout<<"户名："<<name<<endl;
	cout<<"余额："<<balance<<endl;
	cout<<"利息："<<Interest()<<endl;
}
double SavingAccount::interest = 0.0225;
int main()
{
	SavingAccount niu("95588880000111","赵海","111111",3210);

	niu.Credit(320.5);
	niu.Debit(100);
	niu.Print();
	return 0;
}