#include<iostream>
using namespace std;
int main()
{
	int n;
	printf("enter number");
	cin>>n;
	int a[n];
	cout<<"enter no";
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=a[0];
	for(int i=0;i<n;i++)
		if(a[i]>max)
			max=a[i];
			cout<<"max"<<max;
			return 0;
}