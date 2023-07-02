/*	knapsack	*/
#include<stdio.h>
#include<conio.h>

int n,j,i,o[25];
float w[10],v[10],k[10],x[10],temp=0,total_W=0,total_V=0,cap;
void sortB()
{
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(k[j]<k[j+1])
			{
				temp=k[j];
				k[j]=k[j+1];
				k[j+1]=temp;

				temp=w[j];
				w[j]=w[j+1];
				w[j+1]=temp;

				temp=v[j];
				v[j]=v[j+1];
				v[j+1]=temp;
			}
		}
	}
}
void main()
{
	clrscr();
	printf("Enter the no. of objects: ");
	scanf("%d",&n);
	printf("Enter the capacity of sack: ");
	scanf("%f",&cap);
	printf("\nEnter the weights of objects:\n");
	for(i=0;i<n;i++)
	{
		printf("w[%d]: ",i);
		scanf("%f",&w[i]);
	}
	printf("\nEnter the value of objects:\n");
	for(i=0;i<n;i++)
	{
		printf("v[%d]: ",i);
		scanf("%f",&v[i]);
	}
	for(i=0;i<n;i++)
	{
		k[i] = 0;
		x[i] = 0;
	}
	for(i=0;i<n;i++)
	{
		k[i] = v[i]/w[i];
	}
	clrscr();
	printf("\n\nObject:   \t");
	for(i=1;i<=n;i++)
	{
		printf("o%d\t",i);
	}
	printf("\nWeights:\t");
	for(i=0;i<n;i++)
	{
		printf("%.1f\t",w[i]);
	}
	printf("\nValue:  \t");
	for(i=0;i<n;i++)
	{
		printf("%.1f\t",v[i]);
	}
		printf("\nV/W:	  \t");
	for(i=0;i<n;i++)
	{
		printf("%.1f\t",k[i]);
	}
	sortB();
	printf("\nAfter sorting:");
	printf("\n\nObject:   \t");
	for(i=1;i<=n;i++)
	{
		printf("o%d\t",i);
	}
	printf("\nWeights:\t");
	for(i=0;i<n;i++)
	{
		printf("%.1f\t",w[i]);
	}
	printf("\nValue:  \t");
	for(i=0;i<n;i++)
	{
		printf("%.1f\t",v[i]);
	}
	printf("\nV/W:	  \t");
	for(i=0;i<n;i++)
	{
		printf("%.1f\t",k[i]);
	}
	printf("\nCapacity=%f",cap);
	for(i=0;i<n;i++)
	{
		if(w[i]<=cap)
		{
			x[i]=1;
			cap=cap-w[i];
		}
		else if( w[i]>cap)
		{
			x[i]=cap/w[i];
			cap=0;
		}
		else if(cap==0)
		{
			x[i]=0;
		}
	}
	for(i=0;i<n;i++)
	{
		total_W = total_W + (x[i]*w[i]);
	}
	printf("\n\nTOTAL WEIGHT = %.1f",total_W);
	for(i=0;i<n;i++)
	{
		total_V = total_V + (x[i]*v[i]);
	}
	printf("\n\nTOTAL PROFIT = %.1f",total_V);

	getch();
}
