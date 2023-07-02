#include<conio.h>
#include<iostream.h>
#include<conio.h>
class sum
{
	int n,i;
	int sum;
	public:
	sum()
	{
		sum = 0;
	}
	void getdata()
	{
		cout<<"enter the number upto which you want to add:";
		cin>>n;
	}
	void add()
	{
		for(i=1 ; i<=n ; i++)
		{
			sum = sum + i;
		}
		cout<<"total is:"<<sum;
	}
};
void main()
{
	clrscr();
	sum s1;
	s1.getdata();
	s1.add();
	getch();
}