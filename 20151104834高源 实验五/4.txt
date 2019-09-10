#include<iostream>
using namespace std;
class animal
{
	protected:
		char sex;
	public:
		virtual void soar() = 0;
		virtual void eat() = 0;
};
class tiger: public animal
{
	public:
		void soar()
		{
			cout<<"tiger "<<"ºð"<<endl;
		}
		void eat()
		{
			cout<<"tiger "<<"³ÔÈâ"<<endl;
		}
};
class sheep: public animal
{
	public:
		void soar()
		{
			cout<<"sheep "<<"ßã"<<endl;
		}
		void eat()
		{
			cout<<"sheep "<<"³Ô²Ý"<<endl;
		}
};
int main()
{
	tiger t1, t2;
	sheep s1, s2;
	animal *array[4] = {&t1,&s1,&t2,&s2};
	for(int i = 0; i < 4; i++)
	{
		array[i]->eat();
    	array[i]->soar();
	}
	return 0;
}