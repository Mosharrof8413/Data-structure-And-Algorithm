#include<bits/stdc++.h>
using namespace std;

// Merge two subarrays first_arr and second_arr into arr
void merge_all(int arr[],int p, int q, int r)
{
    /// Create first_arr ← arr[p..q] and second_arr ← arr[q+1..r]
    int n1=q-p+1;   ///arr[p..q]
    int n2=r-q;     ///arr[q+1,r]

    int first_arr[n1];
    int second_arr[n2];

    for(int i=0;i<n1;i++)
    first_arr[i]=arr[p+i];

    for(int j=0;j<n2;j++)
    second_arr[j]=arr[q+1+j];



    /// Maintain current index of sub-arrays and main array
    int i=0;
    int j=0;
    int k=p;

    /// Until we reach either end of either first_arr or second_arr, pick larger among
    /// elements first_array and second_arr and place them in the correct position at arr[p..r]
    while(i<n1 && j<n2)
    {
        if(first_arr[i]<=second_arr[j])
        {
            arr[k++]=first_arr[i++];
        }
        else
        {
            arr[k++]=second_arr[j++];
        }
    }

    /// When we run out of elements in either first_arr or second_arr,
    /// pick up the remaining elements and put in arr[p..r]
    while(i<n1)arr[k++]=first_arr[i++];
    while(j<n2)arr[k++]=second_arr[j++];
}

/// Divide the array into two subarrays, sort them and merge them
void mergeSort(int arr[],int l ,int r)
{
    if(l<r)
    {
        /// mid is the point where the array is divided into two subarrays
        int mid=l+(r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        /// Merge the sorted subarrays
        merge_all(arr,l,mid,r);
    }

}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)cin>>arr[i];
    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++)cout<<arr[i]<<" ";
    cout<<endl;
}
