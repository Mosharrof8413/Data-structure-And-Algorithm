
#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define pb push_back
#define ll long long
#define mk make_pair
#define endl '\n'
#define M  1000000007
ull dp[101][101];
ull nCr(ull n,ull r)
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

int a[]={1,3,5,6,7,7,7,8,9,10};
// current size of array n=8
//finding the lower bound of 7 ...and upper bound of 7...
 ll binarySearch(ll target)
{
    ll n=10; // array size
    ll l=0,r=n-1;
    ll ans=100000;
    while(l<=r)
    {
       /* ll mid=(l+r)/2;
        if(a[mid]>=target)    //lower_bound of 7 is 4
        {
            ans=min(ans,mid);
            r=mid-1;
        }
        else l=mid+1;
            */


            ll mid=(l+r)/2;
          if(a[mid]<=target)
          {                              //upper of 7 is 7..
              l=mid+1;
          }
          else{
            ans=min(ans,mid);
            r=mid-1;
          }
    }
    return ans;


}
int main()
{
   ll target=7;
   cout<<binarySearch(target)<<endl;
}
//Alhamdulillah...

