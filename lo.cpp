#include<stdio.h>
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(int argc, char **argv)
{
	int n;
	cout<<"enter no";
	cin>>n;
	int a[n]={0};
	cout<<"\nenter integer";
	for(int i=0;i<n;i++)
		cin>>a[i];
	int max=-9999;
	for(int i=0;i<n;i++)
		{
		if(a[i]>max)
		{
			max=a[i];
		}
		}
	cout<<"max of int is:";
	cout<<max;
	return 0;
}