#include<bits/stdc++.h>
using namespace std;

void subset_sum(int indx,vector<int>&arr,vector<int>&ans,int sum,int N)
{
    if(indx==N)
    {
        ans.push_back(sum);
        return ;
    }

    subset_sum(indx+1,arr,ans,sum+arr[indx],N);   ///take
    subset_sum(indx+1,arr,ans,sum,N);             ///not take

}

int main()
{
    int N;
    cin>>N;
    vector<int>arr(N),ans;
    for(int i=0;i<N;i++)cin>>arr[i];
    subset_sum(0,arr,ans,0,N);
    sort(ans.begin(),ans.end());
    for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
    cout<<endl;
}

///Alhamdulillah...

/*input :
3
1 2 3

output :
0 1 2 3 3 4 5 6

*/
