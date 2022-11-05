#include<bits/stdc++.h>
using namespace std;

void recursion(int i, int N)
{
    if(i<1)return ;  ///Base case...
    recursion(i-1,N);
    cout<<i<<endl;
}
int main()
{
    int N;
    cin>>N;
    recursion(N,N);
}

///Alhamdulillah...
