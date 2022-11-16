#include<bits/stdc++.h>
using namespace std;

void combination(int indx,vector<int>&arr,vector<vector<int> >&ans,vector<int>ds,int target)
{
    if(target==0)
    {
        ans.push_back(ds);
        return ;
    }
    for(int i=indx;i<arr.size();i++)
    {
        if(i>indx && arr[i]==arr[i-1])continue;
        if(arr[i]>target)break;
        ds.push_back(arr[i]);
        combination(i+1,arr,ans,ds,target-arr[i]);
        ds.pop_back();
    }
}
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int>arr(n),ds;
    vector<vector<int> >ans;
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    combination(0,arr,ans,ds,target);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
