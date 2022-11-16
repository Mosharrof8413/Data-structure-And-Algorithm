///print all combination whose sum is equal target K.
#include<bits/stdc++.h>
using namespace std;

void combination_sum(int indx,vector<int>&arr,vector<int>&ds,int target,vector<vector<int>>&ans)
{
    if(indx==arr.size())
    {
        if(target==0)
        {
            ans.push_back(ds);
        }
        return ;
    }
    if(arr[indx]<=target)
    {
        ds.push_back(arr[indx]);
        combination_sum(indx,arr,ds,target-arr[indx],ans);  //take
        ds.pop_back();
    }
    combination_sum(indx+1,arr,ds,target,ans);    //not take
}
int main()
{
    int n,target;
    cin>>n>>target;
    vector<int>arr(n),ds;
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<vector<int> >ans;
    combination_sum(0,arr,ds,target,ans);
    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)cout<<ans[i][j]<<" ";
        cout<<endl;
    }

}
///Alhamdulillah...

/*intput :
4 7
2 3 5 7

output :
2 2 3
2 5
7
*/
