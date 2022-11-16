#include<bits/stdc++.h>
using namespace std;
vector<int>new_arr;
void subsequences(int indx,vector<int>&arr,int n)
{
    if(indx==n)
    {
        for(auto x : new_arr)cout<<x<<" ";
        if(new_arr.size()==0)cout<<"{}";
        cout<<endl;
        return ;
    }
    subsequences(indx+1,arr,n);  //not take
    new_arr.push_back(arr[indx]);
    subsequences(indx+1,arr,n);  //take
    new_arr.pop_back();
    //subsequences(indx+1,arr,n); //not take

}
int main()
{
   int n;
   cin>>n;
   vector<int>arr(n);
   for(int i=0;i<n;i++)cin>>arr[i];
   subsequences(0,arr,n);
}
