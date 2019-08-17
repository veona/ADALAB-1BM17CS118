#include<iostream>
#include<time.h>
using namespace std;
int main()
{
	int n,s=1;
	cout<<"enter the no\n";
	cin>>n;
	clock_t start,end,t;
	start=clock();
	int x=0,y=n/2,mid;
	while(x<=y)
	{
		mid=(x+y)/2;
		if(mid*mid==n)
		{
			s=mid;
			break;
		}
		else if(mid*mid<n)
		{
			x=mid+1;
		}
		else
			y=mid-1;
			
	}
	end=clock();
	
	cout<<"square root\n";
	if(s==1)
		cout<<x-1;
		else
			cout<<s;
			t=start-end;
			printf("it has %f sec\n",t,((float)t)/CLOCKS_PER_SEC);
			return 0;
}