#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc,char **argv)
{
	int t;
	cout<<"enter the no of test";
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int n,k,f=0;
		cout<<"enter no of integers";
		cin>>n;
		cout<<"enter integers to be found";
		cin>>k;
		int ar[n]={0};
		cout<<"enter integers";
		for(int j=0;j<n;j++)
			cin>>ar[j];
		int b=0;e=n-1,m=(e+b)/2;
		while(b<e)
		{
			if(ar[m]==k)
				{cout<<"1";
				f=1; 
				break;
				}
				else if(ar[m]>k)
					e=m-1;
				else
						b=m+1;
					m=(e+b)/2;
		}
		if(f==0)
			cout<<"1";
	}
	return 0;
}