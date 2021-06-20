/*
  Problem link : https://lightoj.com/problem/triangle-partitioning
*/
// using bisection
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


int main()
{
    optimize();
    ll test;
    cin>>test;
    for(ll tc=1; tc<=test; tc++)
    {
        double AB,BC,AC,R;
        cin>>AB>>AC>>BC>>R;

        double S_of_ABC=(AB+BC+AC)/2.0;
        double area_of_ABC=sqrt(S_of_ABC*(S_of_ABC-AB)*(S_of_ABC-BC)*(S_of_ABC-AC));
        double l=0,r=AB;
        for(ll i=0; i<100; i++)
        {
            double AD=(l+r)/2.0;          //Here AD/AB=AE/AC=DE/BC SO AE=AD*AE/AB,DE=AD*BC/AB....
            double AE=(AD*AC)/AB;
            double DE=(AD*BC)/AB;

            double S_of_DEF=(AD+AE+DE)/2.0;
            double area_of_DEF=sqrt(S_of_DEF *(S_of_DEF-AD)*(S_of_DEF-AE)*(S_of_DEF-DE));

            double area_of_BCED=area_of_ABC-area_of_DEF;

            double new_ratio=area_of_DEF/area_of_BCED;
            if(new_ratio>R)r=AD;     //given ratio is R...
            else l=AD;
        }
        fraction();
        cout<<"Case "<<tc<<": "<<l<<endl;


    }

}
//Alhamdulillah...

