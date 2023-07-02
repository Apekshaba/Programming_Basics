#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,j,flag;
cout<<"enter the number";
cin>>n;
for(i=2;i<=n;i++)
{
flag=0;
for(j=2;j<i;j++)
{
if(i%j==0)
{
flag=1;
}
}
if(flag==0)
{
cout<<"\t"<<i;
}
}
getch();
}