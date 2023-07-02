PRACTICAL:-1




1. Write a C program to create an array size of 100. Also enter the values and print it.
#include<iostream.h> 
#include<conio.h>
 void main()
 { int size,i; int *p;
 cout<<"enter size";
 cin>>size;
p=new int[size];
 cout<<"enter elements"<<endl;
 for(i=0;i<size;i++)
 {
cin>>p[i]; 
}
 cout<<"the elements are"<<endl;
 for(i=0;i<size;i++) {
cout<<p[i]<<endl; 
}
 getch();
 }
Output:- enter size 5
 Enter elements 12 34 54 23 44

The elements are 12 34 54 23 44




2. Implement Algorithm to find maximum and minimum number using array.
#include<iostream.h>
 #include<conio.h>
 void main()
 { int size,i,max,min; 
 int *p;
 cout<<"enter size";
 cin>>size;
p=new int[size]; 
cout<<"enter elements"<<endl;
 for(i=0;i<size;i++)
 {
cin>>p[i]; 
} 
max=p[0]; 
for(i=0;i<size;i++)
 {
if(max<=p[i]) 
{ max=p[i];
 }
}

cout<<"max is "<<max<<endl;
min=p[0];
 for(i=0;i<size;i++)
 {
if(min>=p[i])
 { min=p[i];
 } 
}
 cout<<"min is"<<min<<endl;
getch(); 
}
Output:- Enter size 5 
Enter elements 56 23 45 89 15 29 
Max is 89
 Min is 15



3. Implement Algorithm to find factorial of N number.
#include<iostream.h>
 #include<conio.h>
 void main() 
{ int no,ans=1;
cout<<"enter a no"<<endl; 
cin>>no; 
while(no>0) 
{
 ans=ans*no; no=no-1;
 }
 cout<<"the factorial of the no is"<<ans<<endl; 
getch();
 }
Output:- Enter a no 4 
The factorial of the no is 24





Practical:-2
1.Implement algorithm and program for Sum of 1 to N numbers.
#include<iostream.h>
 #include<conio.h> 
void main()
 { 
int size,i; int *p;
 int sum=0; p=new int[size];
 cout<<"enter size";
 cin>>size;
 cout<<"enter elements";
 for(i=0;i<size;i++) 
{ 
cin>>p[i];
 }
 for(i=0;i<size;i++) 
{ 
sum=sum+p[i];
 }
 cout<<"sum is"<<sum; getch(); 
}
 Output :- Enter size 5
    Enter elements 12 15 45 40 36
     Sum is 146



2.Implement algorithm and program for find Fibonacci series for N numbers.
#include<iostream.h>
 #include<conio.h>
 void main()
 { int n,a=0,b=1,c;
 cout<<"enter size"; 
cin>>n; cout<<a<<" ";
 cout<<b<<" ";
 for(int i=0;i<n;i++)
 { 
c=a+b; cout<<c<<" ";
 a=b;
 b=c;
}
getch();
 }
Output:- Enter size 10 0 1 1 2 3 5 8 13 21 34



3.Implement algorithm and program for find Prime number for given range.
#include<iostream.h> 
#include<conio.h>
 void main()
 {
 int start,end,i,j,flag; 
cout<<"enter start point";
 cin>>start;
cout<<"enter end point";
 cin>>end;
 for(i=start;i<=end;i++) 
{
flag=0; for(j=2;j<=i/2;j++)
{
if(i%j==0) {
flag=1; break;
 } 
} 
if(flag==0)
 {
cout<<i<<" ";
 }
 } 
getch(); 
} 
Output:- Enter start point 2
 Enter end point 30
2 3 5 7 11 13 17 19 23 29
