#include<iostream>
#include<ctime>
#include<conio.h>
using namespace std;
class DateTime
{
    private:
		int year;
		int month;
		int day;
		int hour;
		int minute;
		int second;
	public:
		DateTime()
		{
			long now = time(NULL);
			tm local = *localtime(& now);
			year = local.tm_year+1900;
			month = local.tm_mon+1;
			day = local.tm_mday;
			hour = local.tm_hour;
			minute = local.tm_min;
			second = local.tm_sec;
		}
		void display()
		{
			printf("%04d-%02d-%02d %02d:%02d:%02d\n", year, month, day, hour, minute, second);
		}

};
int main()
{
	int a, b;
	a = time(NULL);
	while(1)
	{
		b = time(NULL);
		if(b-a == 1)
		{
			system("cls");
			a=b;
			DateTime t;
			t.display();
		}
	}
    return 0;
}
