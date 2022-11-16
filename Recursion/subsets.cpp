/*
Problem link : https://leetcode.com/problems/subsets/description/
*/

#include<bits/stdc++.h>
using namespace std;

void subset(int indx,vector<int> &nums,vector<int> ds,vector<vector<int> >&ans)
    {
        if(indx==nums.size())
        {
            if(ds.size()==0)
            {
                ds.push_back(0);
                ans.push_back(ds);
            }
            else
            ans.push_back(ds);
            return;
        }
        subset(indx+1,nums,ds,ans);///take
        ds.push_back(nums[indx]);
        subset(indx+1,nums,ds,ans);///not take
    }
int main()
{
    int n;
    cin>>n;
    vector<int>nums(n),ds;
    vector<vector<int>>ans;
    for(int i=0;i<n;i++)cin>>nums[i];
    subset(0,nums,ds,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }
}
///Alhamdulillah...
