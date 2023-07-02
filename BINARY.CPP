#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int size,arr[50],term,low,high,middle;
cout<<"enter total number of elements";
cin>>size;
cout<<"Array";
for(int i=0;i<size;i++)
{
cin>>arr[i];
 }

cout<<"enter the number to be found";
cin>>term;
low=0;
high=size-1;
middle=(low+high)/2;
while(low<=high)
{
if(arr[middle]<term)
{low=middle+1;
}
else if(arr[middle]==term)
{
cout<<term<<"found at loction"<<middle+1;
break;
}
else
{
high=middle-1;
}
middle=(low+high)/2;

}
if(low>high)
{
cout<<"not found";
}
	       getch();
}