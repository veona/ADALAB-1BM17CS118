#include<bits/stdc++.h>
using namespace std;

void solve(int n,int w,int wt[],int val[]){
    int a[n+1][w+1];
    for(int r=0;r<=w;r++){
        a[0][r] = 0;
    }
    for(int c=1;c<=n;c++){
        a[c][0] = 0;
    }
    for(int item = 1;item<=n;item++)
        {
        for(int capacity = 1;capacity<=w;capacity++)
        {
            if(capacity - wt[item-1] >=0)
               {
                a[item][capacity] = max(a[item-1][capacity],val[item-1]+a[item-1][capacity-wt[item - 1]]);
                }
            else
                {
                    a[item][capacity] = a[item-1][capacity];
                }
            }
        }
    cout<<"Output:"<<endl;
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<w+1;j++)
        {
            cout<<a[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main(){
    int w,n;
    double time;
    clock_t begin,end;
    cout<<"Enter the capacity of the knapsack: ";
    cin>>w;
    cout<<w<<endl;
    cout<<"Enter number of items: ";
    cin>>n;
    int wt[n],val[n];
    cout<<"Enter the weight and the corresponding value: "<<endl;
    for(int i=0;i<n;i++){
        cin>>wt[i]>>val[i];
       //cout<<wt[i]<<" "<<val[i]<<endl;
    }
    begin=clock();
    solve(n,w,wt,val);
    end=clock();
    time=(double)(end-begin)/CLOCKS_PER_SEC;
	cout<<"\n Time complexity is "<<time<<" secs";
    return 0;
}