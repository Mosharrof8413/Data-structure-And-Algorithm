/*
   Problem link : https://lightoj.com/problem/expanding-rods
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
      double L,n,c;
      cin>>L>>n>>c;
      double l=0,r=1000000000000;
      double okk=((1+(n*c))*L);
      for(ll i=0;i<200;i++)
      {
          double R=(l+r)/2.0;             //R==mid...
          double theta=2.0*asin((L/(2.0*R)));
          double expected=R*theta;      //   1 radian =180/PI degree;      expected =2*PI*R*angle/360...here angle is in radian so we can convert it degree...
          if(expected>okk)
             l=R;
          else
            r=R;
      }
      double ans=l-(sqrt((l*l)-(L/2.0)*(L/2.0)));
        fraction();
        cout<<"Case "<<tc<<": "<<ans<<endl;

    }

}
//Alhamdulillah...
