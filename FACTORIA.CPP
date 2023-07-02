#include<iostream.h>
#include<conio.h>

class factorial
{
	int n,i,ans;
	public:
	factorial()
	{
		ans=1;
	}
	void getdata()
	{
		cout<<"enter the no";
		cin>>n;
	}
	void fact()
	{
		for(i=n;i>0;i--)
		{
			ans=ans*i;
		}
		cout<<"factorial is:"<<ans;
	}
};

void main()
{
	clrscr();
	factorial f1;
	f1.getdata();
	f1.fact();
	getch();
}