#include<iostream>
#include<time.h>
using namespace std;
int main(int argc,char **argv)
{
	int n,min;
	clock_t start,end;
	start=clock();
	cout<<"enter size of arr";
	cin>>n;
	int arr[n]={0};
	cout<<"enter elem";
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int k;
	cout<<"enter k";
	cin>>k;
	for(int i=0;i<n-1;i++)
	{
		min=1;
	for(int j=1;j<n;j++)
	{
		if(arr[j]<arr[min])
		{
			min=j;
		}
	}
	int t=arr[i];
	arr[i]=arr[min];
	arr[min]=t;
	}
	cout<<arr[k-1];
end=clock();
double t=double(end-start)/double(CLOCKS_PER_SEC);
cout<<"\n"<<"TIME"<<t;
return 0;
}
