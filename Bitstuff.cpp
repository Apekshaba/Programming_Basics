#include<iostream.h>
#include<conio.h>
void main()
{

  int i=0,count=0,a[10],b[20],size;
  clrscr();
  cout<<"enter the frame size";
  cin>>size;
  cout<<"enter bits";
  for(i=0;i<size;i++)
  {
    cin>>a[i];
  }
  for(i=0;i<size;i++)
  {
  if(a[i]==1)
  {
    count++;
  }
  else
  {
    count=0;
  }
  cout<<a[i];
  if(count==5)
  {
   cout<<"0";
   count=0;
  }
  }
  getch();
 }



