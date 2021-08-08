/*
 Problem Link : https://codeforces.com/contest/381/problem/A
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
    optimize();

    ll test=1;
   // cin>>test;
    while(test--)
    {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        ll Sereja=0,Dima=0,cnt=0;
        while(! v.empty())
        {
            ll l=*v.begin();
            ll r=v.back();
            if(l>r)v.erase(v.begin());
            else v.pop_back();
            if(cnt%2==0)Sereja+=max(l,r);
            else Dima+=max(l,r);
            cnt++;
           // cout<<l<<" "<<r<<endl;

        }
        cout<<Sereja<<" "<<Dima<<endl;
    }
}

