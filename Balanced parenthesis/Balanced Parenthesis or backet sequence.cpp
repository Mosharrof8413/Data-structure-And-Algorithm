/*
 Problem : https://codeforces.com/contest/1661/problem/A

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

bool isBalanced(string ss)
{
    stack<char>st;
    bool ans=true;
    for(ll i=0;i<ss.size();i++)
    {
        if(ss[i]=='(' || ss[i]=='{' || ss[i]=='[')st.push(ss[i]);
        else if(ss[i]==')' && !st.empty() && st.top()=='(')st.pop();
        else if(ss[i]=='}' && !st.empty() && st.top()=='{')st.pop();
        else if(ss[i]==']' && !st.empty() && st.top()=='[')st.pop();
        else
        {
            ans=false;
            break;
        }
    }
    if(!st.empty())ans=false;

    return ans;
}
int main()
{
    optimize();
    string s;
    cin>>s;
    if(isBalanced(s))cout<<"This is a balanced parenthesis"<<endl;
    else cout<<"This is invalid parenthesis"<<endl;

}

//Alhamdulillah..


/*
input:

[(({{}}))]

Output:

This is a balanced parenthesis


*/




