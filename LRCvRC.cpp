#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5][5], countAL = 0, countBL = 0, countCL = 0, countAV = 0, countBV = 0, countCV = 0, i, j, n, num;
for(i =0; i<3; i++)
{
	for(j = 0; j<3; j++)
	{
		cin>> arr[i][j];
	}
      }

	for(j= 0; j<3;j++)
	{
		if (arr[0][j] == 1)
		{
			countAL++;
		}
	}
	for(j= 0; j<3;j++)
	{
		if (arr[1][j] == 1)
		{
			countBL++;
		}
	}
    	for( j= 0; j<3;j++)
	{
		if (arr[2][j] == 1)
		{
			countCL++;
		}
	}
    

for( i= 0; i<3;i++)
{
	if (arr[i][0] == 1)
	{
		countAV++;
	}
}
for( i= 0; i<3;i++)
{
	if (arr[i][1] == 1)
	{
		countBV++;
	}
}
for( i= 0; i<3;i++)
{
	if (arr[i][2] == 1)
	{
		countCV++;
	}
}
if (countAL % 2 == 0)
{
	arr[0][3] = 0;
}
else
{
	arr[0][3] = 1;
}
if (countBL % 2 == 0)
{
	arr[1][3] = 0;
}
else
{
	arr[1][3] = 1;
}
if (countCL % 2 == 0)
{
	arr[2][3] = 0;
}
else
{
	arr[2][3] = 1;
}
if (countAV % 2 == 0)
{
	arr[3][0] = 0;
}
else
{
	arr[3][0] = 1;
}
if (countBV % 2 == 0)
{
	arr[3][1] = 0;
}
else
{
	arr[3][1] = 1;
}
if (countCV % 2 == 0)
{
	arr[3][2] = 0;
}
else
{
	arr[3][2] = 1;
}
cout<<arr[0][3]<<endl;
cout<<arr[1][3]<<endl;
cout<<arr[2][3]<<endl;
cout<<arr[3][0]<<endl;
cout<<arr[3][1]<<endl;
cout<<arr[3][2]<<endl;
getch();

}
