#include<iostream>
#include<string>
#include"student.h"
int main()
{
	Student s[110];
	int n,i;
	while(cin >> n)
	{
		for(i = 0; i < n; i++)
			s[i].cal_score();
		for(i = 0; i < n; i++)
			s[i].cal_rank(n,s);
		for(i = 0; i < n; i++)
			s[i].display();
	}
	return 0;
}


#include<iostream>
#include<string>
#include"student.h"
void Student::cal_score()
{
	float math, Chinese, English;
	cin>>name;
	cin>>math;
	cin>>Chinese;
	cin>>English;
	score = (math+Chinese+English)/3;
}
void Student::cal_rank(int n, Student s[])
{
	int i, j;
	Student t;
	for(i = 0; i < n-1; i++)
		for(j = 0; j < n-1-i; j++)	
			if(s[j].score < s[j+1].score)
			{
				t = s[j];
				s[j] = s[j+1];
				s[j+1] = t;	
			}
	for(i = 0; i < n; i++)
	s[i].rank = i+1;
}
void Student::display()
{
	cout<<name<<' '<<score<<' '<<rank<<endl;
} 



#include<iostream>
#include<string>
using namespace std;
class Student
{
private:
	string name;
	float score;
	int rank;
public:
	void cal_score();
	void cal_rank( int n, Student s[]);
	void display();
};




#include<iostream>
#include<string>
#include"student.h"
void Student::cal_score()
{
	float math, Chinese, English;
	cin>>name;
	cin>>math;
	cin>>Chinese;
	cin>>English;
	score = (math+Chinese+English)/3;
	rank = 1;
}
void Student::cal_rank(int n, Student s[])
{
	int i;
	for(i = 0; i < n; i++)
		if(s[i].score > score)
		rank++;
}
void Student::display()
{
	cout<<name<<' '<<score<<' '<<rank<<endl;
} 