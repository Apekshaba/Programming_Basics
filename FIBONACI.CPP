#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class fibo
{
	int first , second ,next,i,n;
	public:
	fibo()
	{
		first=0;
		second=1;
	}

	void getstep()
	{
		cout<<"how many steps you want to get:";
		cin>>n;
	}
	void fibonaci()
	{

		for(i=0 ; i<n; i++)
		{
			if(i<=1)
			{
				next =i;
			}
			else
			{
				next = first + second;
				first = second;
				second = next;
			}

			cout<<"\n"<<next;
		}
	}
};
void main()
{
	clrscr();
	fibo f1;
	f1.getstep();
	f1.fibonaci();
	getch();
}