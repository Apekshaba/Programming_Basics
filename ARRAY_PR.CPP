
#include<iostream.h>
#include<conio.h>

class array
{
	int arr[10],i;
	public:
	void getdata()
	{
		cout<<"enter the elements of array";
		for(i=0;i<10;i++)
		{
			cin>>arr[i];
		}
	}
	void print()
	{
		for(i=0;i<10;i++)
		{
			cout<<"\n"<<arr[i];
		}
	}
};
void main()
{
	clrscr();
	array a1;
	a1.getdata();
	a1.print();
	getch();
}