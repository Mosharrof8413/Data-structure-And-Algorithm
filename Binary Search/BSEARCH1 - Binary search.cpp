/*
 Problem link: https://www.spoj.com/problems/BSEARCH1/
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
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

ll dp[101][101];
ll nCr(ll n,ll r)
{
    if(n==r)return dp[n][r]=1;
    if(r==1)return dp[n][r]=n;
    if(r==0)return dp[n][r]=1;
    if(dp[n][r])return dp[n][r];
    return dp[n][r]=nCr(n-1,r-1)+nCr(n-1,r);
}


ll mod(ll x)
{
    return ((x%M+M)%M);    // x will be negative or positive
}
ll add(ll a,ll b)
{
    return mod((mod(a)+mod(b)));
}
ll mul(ll a,ll b)
{
    return mod(mod(a)*mod(b));
}
bool cmp(const pair<ll,ll>&p1, pair<ll,ll>&p2)
{
    if(p1.first>p2.first)return 1;
    else if(p1.first==p2.first)return (p1.second<p2.second);
    else return 0;
}
bool is_balanced(char first,char second )
{
    return ((first=='('&& second==')')||(first=='{' && second=='}') || (first=='[' && second==']'));
}
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p)
{
    return os<<"("<<p.first<<", "<<p.second<<")";
}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v)
{
    os<<"{";
    for(auto it=v.begin(); it!=v.end(); ++it)
    {
        if(it!=v.begin())os<<", ";
        os<<*it;
    }
    return os<<"}";
}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v)
{
    os<<"[";
    for(auto it=v.begin(); it!=v.end(); ++it)
    {
        if(it!=v.begin())os<<",";
        os<<*it;
    }
    return os<<"]";
}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v)
{
    os<<"[";
    for(auto it=v.begin(); it!=v.end(); ++it)
    {
        if(it!=v.begin())os<<", ";
        os<<*it;
    }
    return os<<"]";
}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v)
{
    os<<"[";
    for(auto it=v.begin(); it!=v.end(); ++it)
    {
        if(it!=v.begin())os<<", ";
        os<<it->first<<" = "<<it->second;
    }
    return os<<"]";
}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu()
{
    cerr << endl;
}
template<typename T>void faltu(T a[],int n)
{
    for(int i=0; i<n; ++i)cerr<<a[i]<<' ';
    cerr<<endl;
}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest)
{
    cerr<<arg<<' ';
    faltu(rest...);
}
//#define dbg(args)


int main()
{
    optimize();
    ll test=1;
    // cin>>test;
    while(test--)
    {
        ll n,q;
        cin>>n>>q;
        vector<ll>v(n);
        for(ll i=0;i<n;i++)cin>>v[i];
        while(q--)
        {
            ll x;
            cin>>x;
            ll lo=lower_bound(v.begin(),v.end(),x)-v.begin();
            if(lo==n)cout<<-1<<endl;
            else if(v[lo]!=x)cout<<-1<<endl;
            else cout<<lo<<endl;
        }
    }

}
//Alhamdulillah...

