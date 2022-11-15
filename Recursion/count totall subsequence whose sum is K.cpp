///count totall numbers of subsequences whose sum is K...

#include<bits/stdc++.h>
using namespace std;
int count_subsequence(int indx,vector<int>arr,int n,int k,int sum)
{
    if(sum>k)return 0;
    if(indx==n)
    {
        if(sum==k)return 1;
        else return 0;
    }
    sum+=arr[indx];
    int l=count_subsequence(indx+1,arr,n,k,sum);  //take
    sum-=arr[indx];
    int r=count_subsequence(indx+1,arr,n,k,sum);  //not take
    return l+r;
}
int main()
{
    int n,k;
    cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<count_subsequence(0,arr,n,k,0)<<endl;
}

///Alhamdulillah...

/*input :
3 2
1 2 1
output:
2
*/
