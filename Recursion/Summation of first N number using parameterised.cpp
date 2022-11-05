#include<bits/stdc++.h>
using namespace std;

///parameterised recursion...
/*

void recursion(int i, int sum)
{
    if(i<1)
    {
        cout<<sum<<endl;
        return;
    }
    recursion(i-1,sum+i);
}

int main()
{
    int N;
    cin>>N;
    recursion(N,0);
}

///Functional recursion...
*/
int sum(int N)
{
    if(N==0)return 0;
    return N+sum(N-1);

}

int main()
{
    int N;
    cin>>N;
    cout<<sum(N)<<endl;
}

///Alhamdulillah...
