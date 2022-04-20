#include<iostream>
#include<iomanip>
#include<String>
using namespace std;
class Faculty
{
	protected:
		string name;
		double teachingDays;
	public:
		Faculty(const char *n, double t);
		virtual double workload() const
		{
			return 0;
		}
		virtual void print() const
		{
			cout<<setw(8)<<name;
		}
};
Faculty::Faculty(const char *n, double t)
{
	name = n;
	teachingDays = t;
}
class Middle:public Faculty
{
	private:
		static double coefficent;
	public:
		Middle(const char *n, double t):Faculty(n,t){}
		double workload() const;
		void print() const;
};
double Middle::coefficent = 60;
void Middle::print() const
{
	Faculty::print();
	cout<<setw(8)<<"中级"<<setw(6)<<teachingDays<<setw(6)<<workload()<<endl;
}
double Middle::workload() const
{
	return coefficent*teachingDays;
}
class Senior:public Faculty
{
	private:
		static double pgCoefficient;
		static double coefficent;
		double pgTeachingDays;
	public:
		Senior(const char *n, double t, double pg):Faculty(n,t), pgTeachingDays(pg){}
		double workload() const;
		void print() const;
};
double Senior::pgCoefficient = 95;
double Senior::coefficent = 80;
void Senior::print() const
{
	Faculty::print();
	cout<<setw(8)<<"高级"<<setw(6)<<teachingDays+pgTeachingDays<<setw(6)<<workload()<<endl;
}
double Senior::workload() const
{
	return pgCoefficient*pgTeachingDays+coefficent*teachingDays;
}
class Primary:public Faculty
{
	private:
		static double shiyan;
		static double weihu;
	public:
		Primary(const char *n, double t):Faculty(n,t){}
		double workload() const;
		void print() const;
};
double Primary::shiyan = 40;
double Primary::weihu = 10;
void Primary::print() const
{
	Faculty::print();
	cout<<setw(8)<<"初级"<<setw(6)<<teachingDays<<setw(6)<<workload()<<endl;
}
double Primary::workload() const
{
	return (shiyan+weihu)*teachingDays;
}
int main()
{
	const int SIZE = 3;
	Primary Mary("马丽", 90);
	Middle Lily("陈颖", 90);
	Senior Dana("郑申", 45, 45);
	Faculty *ptr[SIZE] = {&Dana, &Lily, &Mary};

	cout<<setiosflags(ios::left);
	cout<<setw(8)<<"姓名"<<setw(6)<<"职称"<<setw(6)<<"教日"<<setw(6)<<"工作量"<<endl;
	cout<<"---------------------------"<<endl;

	for(int i = 0; i < SIZE; i++)
		ptr[i]->print();
	return 0;
}