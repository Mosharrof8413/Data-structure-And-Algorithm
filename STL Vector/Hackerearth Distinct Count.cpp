/*
 Problem Link : https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/
 */

#include<bits/stdc++.h>
using namespace std;


typedef long long ll;

#define endl '\n'
#define PB push_back
#define F first
#define S second


ll gcd ( ll a, ll b )
{
    return __gcd ( a, b );
}
ll lcm ( ll a, ll b )
{
    return a * ( b / gcd ( a, b ) );
}

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);


int main()
{
  //  optimize();

    ll test;
    cin>>test;
    while(test--)
    {
        ll n,k;
        cin>>n>>k;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        sort(v.begin(),v.end());
		ll sz=unique(v.begin(),v.end())-v.begin();
		//cout<<sz<<endl;
		if(sz==k)cout<<"Good"<<endl;
		else if(sz<k)cout<<"Bad"<<endl;
		else cout<<"Average"<<endl;

    }
}

/*
Alhamdulillah...
*/

