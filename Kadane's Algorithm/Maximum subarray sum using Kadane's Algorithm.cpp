/*

 Problem link : Maximum sub_array or Minimum sub_array sum using kadane's algorithm with O(n) ...

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
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll a[n+2];
        for(ll i=0;i<n;i++)cin>>a[i];
        ll max_value=a[0];
        ll ans=a[0];
        for(int i=1;i<n;i++)
        {
            max_value=max(max_value+a[i],a[i]);
            ans=max(ans,max_value);
        }
        cout<<ans<<endl;
    }

}

//Alhamdulillah..

/*
intput :

1
3
2 -1 5


output :

6


*/





