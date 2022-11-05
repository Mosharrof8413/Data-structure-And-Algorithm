#include<bits/stdc++.h>
using namespace std;

void recursion(int i, int N)
{
    if(i>N)return ;
    recursion(i+1,N);
    cout<<i<<endl;
}
int main()
{
    int N;
    cin>>N;
    recursion(1,N);
}

///Alhamdulillah...
