#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	char d[50],r[50];
	char esc,flag;
	int dataLength,i,j=0;
	clrscr();
	cout<<"enter msg string\n";
	gets(d);
	cout<<"enter flag\n";
	cin>>flag;
	cout<<"enter esc\n";
	cin>>esc;
	dataLength = strlen(d);
	for(i=0;i<dataLength;i++)
	{
		if(d[i]==flag || d[i]==esc)
		{
			r[j]=esc;
			j++;
			r[j]=d[i];
			j++;
		}
		else
		{
			r[j]=d[i];
			j++;
		}
	}
	r[j] = '\0';
	puts(r);
	getch();

}