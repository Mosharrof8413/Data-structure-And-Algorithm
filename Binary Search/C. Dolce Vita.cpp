
/*
 Problem : https://codeforces.com/problemset/problem/1671/C

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

const int MX=1e6+123;
bitset<MX>is_prime;
vector<ll>primes;
void primeGen(ll n)
{
    ll sq=sqrt(n);
    for(ll i=3; i<=n; i+=2)is_prime[i]=1;

    for(ll i=3; i<=sq; i+=2)
    {
        if(is_prime[i]==1)
        {
            for(ll j=i*i; j<=n; j+=(i+i))
                is_prime[j]=0;
        }
    }
    primes.PB(2);
    is_prime[2]=1;
    for(ll i=3; i<=n; i+=2)
    {
        if(is_prime[i]==1)primes.PB(i);
    }
}

int main()
{
    optimize();
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        ll a[n];
        for(ll i=0; i<n; i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);

        ll ans=0,sum=0;
        ll l=0,r=k;
        for(ll i=0; i<n; i++)
        {
            sum+=a[i];
            ll cur=0;
            while(l<=r)
            {

                ll mid=(l+r)/2;
                ll x=sum+(i+1)*(mid-1);
                if(x<=k)
                {
                    cur=mid;
                    l=mid+1;
                }
                else r=mid-1;
            }
            if(cur==0)
                break;
            l=0,r=cur;
            ans+=cur;
        }
        cout<<ans<<endl;

    }

}

//Alhamdulillah..


/*
input :

4
3 7
2 1 2
5 9
10 20 30 40 50
1 1
1
2 1000
1 1



Output:

11
0
1
1500


*/






