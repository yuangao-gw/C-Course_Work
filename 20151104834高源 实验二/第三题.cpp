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
	cout<<"���ţ�"<<id<<endl;
	cout<<"������"<<name<<endl;
	cout<<"���֣�"<<score<<endl;
	cout<<"������"<<reward<<endl;
}
int main()
{
	MemberCard m("10239965","����",6500);

	cout<<"****** ����ǰ ******"<<endl;
	m.print();
	m.Reward();
	cout<<"\n****** ������ ******"<<endl;
	m.print();
	return 0;
};
