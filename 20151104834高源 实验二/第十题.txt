#include<iostream>
#include<string>
using namespace std;
class Athlete
{
public:
	Athlete(string pname, string pdept);
	const string & getName() const { return name;}
	const string & getDept() const { return dept;}
private:
	string name;
	string dept;
};
class Game
{
public:
	Game(string pname, int h, int m, int c, Athlete *a);
	void print() const;
private:
	string name;
	int hour;
	int minute;
	int count;
	Athlete *arr;
};
Athlete::Athlete(string pname, string pdept)
{
	name = pname;
	dept = pdept;
}
Game::Game(string pname, int h, int m, int c, Athlete *a)
{
	name = pname;
	hour = h;
	minute = m;
	count = c;
	arr = a;
}
void Game::print() const
{
	int i;
	cout<<"项目"<<name<<"  "<<"比赛时间："<<hour<<"时"<<minute<<"分"<<endl;
	cout<<"-----------------------------"<<endl;
	for(i = 0; i < count; i++)
		cout<<i+1<<"\t"<<arr[i].getName()<<"\t"<<arr[i].getDept()<<endl;
}
int main()
{
	Athlete arr[3] = {Athlete("刘勇","商学院"),
	                  Athlete("周华","文学院"),
		              Athlete("何川洋","商学院")};
	Game swimming("游泳",15,30,3,arr);
	swimming.print();
	return 0;
}
