/*

Problem link :https://leetcode.com/problems/valid-parentheses/

*/


class Solution {
public:
    bool isValid(string s) {

       stack<char>st;
    bool ans=true;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='(' || s[i]=='{' || s[i]=='[')st.push(s[i]);
        else if(s[i]==')' && !st.empty() && st.top()=='(')st.pop();
        else if(s[i]=='}' && !st.empty() && st.top()=='{')st.pop();
        else if(s[i]==']' && !st.empty() && st.top()=='[')st.pop();
        else
        {
            ans=false;
            break;
        }
    }
    if(!st.empty())ans=false;

    return ans;


    }
};

//Alhamdulillah...
