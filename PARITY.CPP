#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void code(char data[],int parity)
{
	int j,i,count=0;
	char ans[20],received[20];
	for(i=0;i<strlen(data);i++)
	{
		if(data[i] == '1')
			count++;
	}
	int c = count%2;
	if(parity == 0)
	{
		if(c == 0)
			ans[0] = '0';
		else
			ans[0] = '1';

		for(j=0;j<strlen(data);j++)
			ans[j+1] = data[j];
		ans[j+1] = '\0';
		puts(ans);
	}
	else
	{
		if(c == 0)
			ans[0] = '1';
		else
			ans[0] = '0';

		for(j=0;j<strlen(data);j++)
			ans[j+1] = data[j];
		ans[j+1] = '\0';
		puts(ans);
	}
	cout<<"enter received data for error checking\n";
	gets(received);
	if(strcmp(ans,received)==0)
		cout<<"no error ;)\n";
	else
		cout<<"error in received data -_-";
}
void main()
{
	int p,j;
	char data[20],received[20];
	clrscr();
	cout<<"0 -> even parity\n1 -> odd parity\n";
	cin>>p;
	cout<<"enter data\n";
	gets(data);
	code(data,p);
	getch();
}
