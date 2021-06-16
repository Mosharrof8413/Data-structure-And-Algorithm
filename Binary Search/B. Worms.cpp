/*
  Problem link : https://codeforces.com/problemset/problem/474/B
*/

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define M 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdou
const int mx=1e5+123;
ll a[mx];

int main()
{
    optimize();
    ll test=1;
    //cin>>test;
    while(test--)
    {
       ll n;
       cin>>n;
       vector<pair<ll ,ll> >vp;
       ll last=0;
       vp.PB({0,0});
       for(ll i=1;i<=n;i++)
       {
           cin>>a[i];
           vp.PB({last+1,a[i]+last});
           last=a[i]+last;
       }
       //for(ll i=1;i<=n;i++)
       //cout<<vp[i].F<<" "<<vp[i].S<<endl;
       ll m;
       cin>>m;
       while(m--)
       {
           ll q;
           cin>>q;
           ll l=1,r=n;
           while(l<=r)
           {
               ll mid=(l+r)>>1;
               if(vp[mid].F<=q && vp[mid].S>=q)
               {
                   cout<<mid<<endl;
                   break;
               }
               else if(vp[mid].S<q)
                l=mid+1;
               else
               r=mid-1;

           }


       }
       vp.clear();
    }

}
