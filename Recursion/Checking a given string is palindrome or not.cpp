#include<bits/stdc++.h>
using namespace std;

bool palindrome(int i, string &st)
{
    int N=st.size();
    if(i>=N/2)return true;

    if(st[i]!=st[N-i-1])return false;
    palindrome(i+1,st);
}

int main()
{
    string st;
    cin>>st;
    if(palindrome(0,st))
    cout<<"String is Palindrome"<<endl;
    else cout<<"String is not Palindrome"<<endl;
}

///Alhamdulillah...
