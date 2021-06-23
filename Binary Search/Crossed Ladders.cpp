/*
   Problem link : https://lightoj.com/problem/crossed-ladders
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
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);

int main()
{
    optimize();
    ll test;
    cin>>test;
    for(ll tc=1;tc<=test;tc++)
    {
        double x,y,h;
        cin>>x>>y>>h;
        double l=0,r=min(x,y);
        for(ll i=0;i<100;i++)
        {
            double mid=(l+r)/2.0;
            double h1=sqrt(x*x-mid*mid);
            double h2=sqrt(y*y-mid*mid);
            double new_height=(h1*h2)/(h1+h2);
            if(new_height<h)r=mid;
            else l=mid;

        }
        fraction();
        cout<<"Case "<<tc<<": "<<l<<endl;
    }

}
//Alhamdulillah...
