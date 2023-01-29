//Finding the max by adjacent swapping and put it the last index...
//Time Complexity : O(N*N) worst case and average case
//Time complexity :O(N) best case
#include<bits/stdc++.h>
using namespace std;  // 3 2 1
void Bubble_sort(int arr[],int n)
{
    int did_swap=0;
    /*for(int i=0;i<n;i++)
    {
        for(int j=1;j<n-i;j++) //1
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]); //yes 2 3 1 yes 1 2 3
                did_swap=1;
            }
        }
        if(did_swap==0)break;
        //cout<<"run"<<endl;
    }*/
    for(int i=n-1;i>=0;i--)
    {
        for(int j=1;j<=i;j++)
        {
            if(arr[j-1]>arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=temp;
                did_swap=1;
            }
        }
        if(!did_swap)break;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    Bubble_sort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";

}
//Alhamdulillah...
