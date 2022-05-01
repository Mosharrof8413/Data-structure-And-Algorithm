/*
Problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int ans=0;
        for(int i=1;i<prices.size();i++)
        {
            if(prices[i]>prices[i-1])
            ans+=prices[i]-prices[i-1];
        }
        return ans;
    }
};

/*
input :
prices = [7,1,5,3,6,4]

output :
7
*/


/*
ALHAMDULILLAH...
*/
