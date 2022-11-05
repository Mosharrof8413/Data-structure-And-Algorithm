#include<bits/stdc++.h>
using namespace std;

void recursion(int i, int N)
{
    if(i<1)return ;
    cout<<i<<endl;
    recursion(i-1,N);
}
int main()
{
    int N;
    cin>>N;
    recursion(N,N);
}
///Alhamdulillah...
