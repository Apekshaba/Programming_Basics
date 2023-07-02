#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	int start,end,i,j,count=0;
	cout<<"enter the starting number";
	cin>>start;
	cout<<"\n enter the ending number";
	cin>>end;

	cout<<"prime number between"<<start<<"to"<<end<<"is:";

	for(i=start ; i<= end ; i++)
	{
		count = 0;
		for(j=2 ; j<i ; j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}
		}
		if(count==0)
		{
			cout<<i<<" ";
		}
	}
	getch();

}