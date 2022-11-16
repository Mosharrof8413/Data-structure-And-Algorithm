#include<bits/stdc++.h>
using namespace std;
////using parameterized recursion
void fact(int i, int ans)
{
    if(i==0)
    {
        cout<<ans<<endl;
        return;
    }
    fact(i-1,ans*i);

}

///functional recursion...
int factorial(int N)
{
    if(N==0)return 1;
    return N*factorial(N-1);
}
int main()
{
    int N;
    cin>>N;
    fact(N,1);
    cout<<factorial(N)<<endl;
}
