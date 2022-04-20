#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
class Money
{
public:
	Money();
	double getValue() const;
private:
	double value;
};
class SavingBox
{
public:
	SavingBox();
	~SavingBox();
	void PutIntoMoney(Money* mon);
	void Count() const;
private:
	Money *items[100];
	int count;
};
Money::Money()
{
	static double val[] = {0.1,0.5,1,5,10};
	int magic = rand()%5;
	value = val[magic];
}
double Money::getValue() const
{
	return value;
}
SavingBox::SavingBox()
{
	count = 0;
}
SavingBox::~SavingBox()
{
	for(int i = 0; i < count; i++)
		delete items[i];
}
void SavingBox::PutIntoMoney(Money* mon)
{
	items[count] = mon;
	count++;
	cout<<"投入"<<mon->getValue()<<"元币。"<<endl;
}
void SavingBox::Count() const
{
	int a[5] = {0};
	int i;
	double sum = 0;
	for(i = 0; i < count; i++)
	{
		if(items[i]->getValue() == 0.1)
			a[0]++;
		if(items[i]->getValue() == 0.5)
			a[1]++;
		if(items[i]->getValue() == 1)
			a[2]++;
		if(items[i]->getValue() == 5)
			a[3]++;
		if(items[i]->getValue() == 10)
			a[4]++;
		sum = sum + items[i]->getValue();
	}
	
	cout<<"存钱罐中共有钱"<<sum<<"元。"<<endl;
	cout<<"其中，1角币"<<a[0]<<"个。"<<"5角币"<<a[1]<<"个。"<<"1元币"<<a[2]<<"个。"<<"5元币"<<a[3]<<"个。"<<"10元币"<<a[4]<<"个。"<<endl;
}
int main()
{
	SavingBox piggybank;

	srand(time(NULL));
	while(cin.get() == '\n')
	{
		piggybank.PutIntoMoney(new Money());
	}

	piggybank.Count();
	return 0;
}
