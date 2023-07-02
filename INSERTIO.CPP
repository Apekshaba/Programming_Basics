#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class insertion
{
	int size,*a,i,j,key;
	public:
	insertion()
	{
		j=2;
	}

	void getdata()
	{
		cout<<"enter the size of array";
		cin>>size;
		a=new int[size];
		cout<<"enter the elements";

		for(i=1 ; i<=size ; i++)
		{
			cin>>a[i];
		}
	}

	void sort()
	{
		while(j<size)
		{
			i=j-1;
			key = a[j];

			while(i>0 && a[i]>key)
			{
				a[i+1]=a[i];
				i=i-1;
			}
			a[i+1] = key;
			j++;
		}
	}

	void display()
	{
		cout<<"sorted array is:";
		for(i=1 ; i<=size ; i++)
		{
			cout<<"\n"<<a[i]<<"\t";
		}
	}

};
void main()
{
	clrscr();
	insertion t1;
	t1.getdata();
	t1.sort();
	t1.display();
	getch();
}