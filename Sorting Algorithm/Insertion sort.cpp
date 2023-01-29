//Take an elements and place it in its correct position
//Time complexity : O(N) best case when all are correct position.. O(N*N) worst or average cases
#include<bits/stdc++.h>
using namespace std;
void Insertion_sort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    Insertion_sort(arr,n);
    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
}
//Alahmadulillah...
