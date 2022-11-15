///print all subsequence,whose sum is K.

#include<bits/stdc++.h>
using namespace std;
void subsequences(int indx,vector<int>&ds,vector<int>arr,int n,int k,int sum)
{
    if(indx==n)
    {
        if(sum==k)
        {
            for(auto x : ds )cout<<x<<" ";
            cout<<endl;
        }
        return ;
    }
    ds.push_back(arr[indx]);
    sum+=arr[indx];
    subsequences(indx+1,ds,arr,n,k,sum);  ///take
    sum-=arr[indx];
    ds.pop_back();
    subsequences(indx+1,ds,arr,n,k,sum);  ///not take
}

int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n),ds;
    for(int i=0; i<n; i++)cin>>arr[i];
    subsequences(0,ds,arr,n,k,0);
}

///Alhamdulillah...

/*
input :
3 2
1 2 1
output :
1 1
2
*/
