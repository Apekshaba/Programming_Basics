
#include<conio.h>
#include<iostream.h>
void search(int term,int size,int a[])
{
 int i;
for(i=0;i<size;i++)
{
if(a[i]==term)

{
 cout<<"Term found";
 break;
}
}
if(i==size)

{
cout<<"term not found";
}
}

void main()
{
clrscr();
 int *a;
 int term;
 int size;
cout<<"size";
 cin>>size;		a=new int[size];
	      cout<<"array";
  for(int i=0;i<size;i++)
  {
  cin>>a[i];
  }
  cout<<"enter the term";
 cin>>term;

  search(term,size,a);
getch();
}