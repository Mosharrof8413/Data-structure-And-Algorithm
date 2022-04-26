/*
Problem link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mn=100000,max_profit=0;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mn)
            {
                mn=prices[i];
            }
            else if(prices[i]-mn >max_profit)
                    max_profit=prices[i]-mn;
        }

        return max_profit;
    }
};

/*

Alhamdulillah...

*/

/*
input :
[7,1,5,3,6,4]
[7,6,4,3,1]
output :
5
0
*/
