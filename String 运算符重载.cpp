#include<iostream.h>
class String
{
private:
	char *p;
public:
	String()
	{
		p = NULL;
	}
	String(char *s)
	{
		p = s;
	}
	bool operator > (String b);
	friend bool operator < (String a, String b);
	bool operator == (String b);
	friend int cmp(String a,String b);
};
int cmp(String a,String b)
{
	int i = 0, j;
	do{
		j = a.p[i] - b.p[i];
	    if(a.p[i] == '\0' || b.p[i] == '\0')
			break;
		i++;
	}while(j == 0);
	return j;
}
bool String::operator > (String b)
{
	if(cmp(*this,b) > 0)
		return true;
	else
		return false;
}
bool operator < (String a, String b)
{
	if(cmp(a,b) < 0)
		return true;
	else
		return false;
}
bool String::operator == (String b)
{
	if(cmp(*this,b) == 0)
		return true;
	else
		return false;
}
int main()
{
//	String a("abc"), b("abc");
	String a("ABC"), b("abc");
	//String a("abc"), b("ab");
	if(a > b)
		cout<<">"<<endl;
	if(a < b)
		cout<<"<"<<endl;
	if(a==b)
		cout<<"=="<<endl;
	return 0;
}