#include<bits/stdc++.h>
using namespace std;

void Reverse(int i,int arr[], int N)
{
    if(i>=N/2)return ;
    swap(arr[i],arr[N-i-1]);
    Reverse(i+1,arr,N);
}

int main()
{
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)cin>>arr[i];
    Reverse(0,arr,N);
    for(int i=0;i<N;i++)cout<<arr[i]<<" ";
    cout<<endl;
}

///Alhamdulillah...
