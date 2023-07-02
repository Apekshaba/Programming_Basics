#include<iostream.h> 
#include<limits.h> 
#include<conio.h> 
  
//using namespace std; 
  
// Matrix Ai has dimension p[i-1] x p[i] for i = 1..n 
  
int MatrixChainMultiplication(int p[], int n) 
{     int m[3][3]; 
    int i, j, k, L, q; 
 
    for (i=1; i<=3; i++) 
 	m[i][i] = 0;    //number of multiplications are 0(zero) when there is only one matrix 
 
    //Here L is chain length. It varies from length 2 to length n.     for (L=2; L<=3; L++) 
    { 
 	for (i=1; i<3-L+1; i++) 
 	{ 
 	    j = i+L-1; 
 	    m[i][j] = INT_MAX;  //assigning to maximum value 
 
 	    for (k=i; k<=j-1; k++) 
 	    { 
 	 	q = m[i][k] + m[k+1][j] + p[i-1]*p[k]*p[j]; 
 	 	if (q < m[i][j]) 
 	 	{ 
 	 	    m[i][j] = q;    //if number of multiplications found less that number will be updated. 
 	 	} 
 	    } 
 	} 
    } 
 
    return m[1][2];   //returning the final answer which is M[1][n] 
 
} 
 
int main() 
{ 
    int i; 
   // cout<<"Enter number of matrices\n"; 
   // cin>>n; 
 
 
    int arr[3]; 
 
    cout<<"Enter dimensions \n"; 
 
    for(i=0;i<3;i++) 
    { 
 	cout<<"Enter d"<<i<<" :: "; 
 	cin>>arr[i]; 
    } 
 
    int size = sizeof(arr)/sizeof(arr[0]); 
 
    cout<<"Minimum number of multiplications is "<<MatrixChainMultiplication(arr, size); 
 
    return 0; 
} 
