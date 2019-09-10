#include<iostream>
using namespace std;
class Calc
{
private:
	double sum;
	double rate;
	int count;
public:
	void SetData();
	void print();
};
void Calc::SetData()
{
	cout<<"请输入贷款总额 年利率 还款月数：";
	cin>>sum>>rate>>count;
}
void Calc::print()
{
	double yueReturn,num,keep,rateYue;
	int i;	
	num = sum/count;
	keep = sum;
	for(i = 1; i <= count; i++)
	{
		rateYue = keep*(rate/12);
		yueReturn = num+rateYue;
		keep = sum-num*i;
		cout<<"第"<<i<<"个月还款额为"<<yueReturn<<"，"<<"其中本金为"<<num<<"，"<<"月利息为"<<rateYue<<"，"<<"剩余本金为"<<keep<<endl;
	}
}
int main()
{
	Calc c;

	c.SetData();
	c.print();
	return 0;
}