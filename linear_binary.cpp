#include<iostream.h> #include<conio.h> 
void search ( int *a[], int v ) 
{ 
 	 int i,temp=1,pos,size;  	 cout<<"enter the element to be searched:"; 
 	 cin>>v; 
 	 for(i=0;i<size;i++) 
 	 { 
 	 	if( a[i]==v) 
 	 	{ 
 	 	 	temp=0; 
 	 	 	pos=i; 
 
 	 	} 
 	 } 
 	 if(temp==0) 
 	 { 
 	 	cout<<"element found at position"<<pos+1; 
 	 } 
 	 else 
 	 { 
 	 	cout<<"element not found"; 
 	 } 
 
} void main() 
{ 
 	int *p,i,v,size,a[size];  	clrscr(); 
 	cout<<"enter the size of the array"; 
 	cin>>size; 
 	p= new int[size]; 
 
 	cout<<"enter the array elements:";  	for(i=0;i<size;i++) 
 	{ 
 	 	cin>>a[i]; 
 	} 
 	search(a,v); 
 	getch(); 
} 
