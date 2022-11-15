///print any one subsequence whose sum is k...

#include<bits/stdc++.h>
using namespace std;

bool subsequence(int indx,vector<int>&ds,vector<int>arr,int n,int k,int sum)
{
    if(indx==n)
    {
        if(sum==k)
        {
            for( auto x : ds )cout<<x<<" ";
            cout<<endl;
            return true;
        }
        else return false;
    }

    ds.push_back(arr[indx]);
    sum+=arr[indx];
    if(subsequence(indx+1,ds,arr,n,k,sum)==true)return true;

    sum-=arr[indx];
    ds.pop_back();
    if(subsequence(indx+1,ds,arr,n,k,sum)==true)return true;
    return false;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n),ds;
    for(int i=0;i<n;i++)cin>>arr[i];
    if(!subsequence(0,ds,arr,n,k,0))cout<<0<<endl;
}

///Alhamdulillah...

/*
input :
3 2
1 2 1
output :
1 1
*/

