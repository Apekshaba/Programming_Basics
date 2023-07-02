#include<iostream.h>
#include<conio.h>

class min_max
{
	public:
	int a[10],min,max,i;
	min_max()
	{
		i=0;
		min=0;
		max=0;
	}
	void getdata()
	{
		cout<<"enter the elements to find max and min:";
		for(i=0;i<10;i++)
		{
			cin>>a[i];
		}
		for(i=0;i<10;i++)
		{
			cout<<"\n"<<a[i];
		}
	}
	void find()
	{
		while(i<10)
		{
			if(a[min]<a[i])
			{
				i++;
			}
			else
			{
				min=i;
				i++;
			}
		}
		while(i<10)
		{
			if(a[max]>a[i])
			{
				i++;
			}
			else
			{
				max=i;
				i++;
			}
		}


		cout<<"\n"<<"minimum value is:"<<a[min];
		cout<<"\n"<<"maximum value is:"<<a[max];
	}
};

void main()
{
	clrscr();
	min_max m1;
	m1.getdata();
	 m1.find();
	 getch();
}