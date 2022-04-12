/*
 Approach : Find the minimum element in unsorted array and swap it with element at beginning.

*/

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);

int main()
{
    optimize();
    ll n;
    cin>>n;
    ll a[n];
    for(auto &x : a)cin>>x;
    for(ll i=0;i<n-1;i++)
    {
        for(ll j=i+1;j<n;j++)
        {
            if(a[i]>a[j])swap(a[i],a[j]);
        }
    }
    for(ll i=0;i<n;i++)cout<<a[i]<<" ";


}

//Alhamdulillah..


/*
input:
5
5 4 3 2 1

Output:

1 2 3 4 5

Complexity : O(n^2)

*/




