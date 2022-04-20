#include<iostream>
using namespace std;
class String
{
public:
	String(char *e);
	String();
	bool operator!();
	void dispaly();
private:
	char *elems;
};
String::String(char *e)
{
	elems = e;
}
String::String()
{
	elems = NULL;
}
bool String::operator !()
{
	if(elems == NULL)
		return true;
	else 
		return false;
}
void String::dispaly()
{
	if(elems != NULL)
	cout<<elems;
}
int main()
{
	String str;//("I am a Student\n");
	str.dispaly();
	if(!str)
		cout<<"����һ�����ַ�����"<<endl;
	else
		cout<<"�ⲻ��һ�����ַ�����"<<endl;
	return 0;
}
