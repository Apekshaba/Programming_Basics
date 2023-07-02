#include<iostream.h>
#include<conio.h>
void main()
{
int a[5]
,i,j,k,temp;
clrscr();
cout<<"Enter the array elements";
for(j=0;j<5;j++)
{
cin>>a[j];
}
for(j=0;j<5;j++)
{
	for(i=0;i<5;i++)
	{
	if(a[i]>a[i+1])
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
	}
	}
}
for(k=0;k<5;k++)
{
cout<<a[k];
}
getch();
}


