#include<iostream>
#include<string>
using namespace std;
class MemberCard
{
private:
	string id;
	string name;
	double score;
	double reward;
public:
	MemberCard(string pid,string pname,double s);
	~MemberCard();

	void Reward();
	void print();
};
MemberCard::MemberCard(string pid,string pname,double s)
{
	id = pid;
	name = pname;
	score = s;
	reward =0;
}
MemberCard::~MemberCard(){}

void MemberCard::Reward()
{
	int keep;
	
	keep = score/5000;
	reward = reward + keep*100;
	score = score - keep*5000;
	keep = score/3000;
	reward = reward + keep*50;
	score = score - keep*3000;
	keep = score/1000;
	reward = reward + keep*10;
	score = score - keep*1000;
}
void MemberCard::print()
{
	cout<<"卡号："<<id<<endl;
	cout<<"姓名："<<name<<endl;
	cout<<"积分："<<score<<endl;
	cout<<"返劵："<<reward<<endl;
}
int main()
{
	MemberCard m("10239965","刘明",6500);

	cout<<"****** 返劵前 ******"<<endl;
	m.print();
	m.Reward();
	cout<<"\n****** 返劵后 ******"<<endl;
	m.print();
	return 0;
};
