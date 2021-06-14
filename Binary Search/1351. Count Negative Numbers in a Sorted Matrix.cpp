/*
 Problem link : 1351. Count Negative Numbers in a Sorted Matrix

*/

class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans=0;
        for(auto u : grid)
        {
            reverse(u.begin(),u.end());
            ans+=lower_bound(u.begin(),u.end(),0)-u.begin();
        }
        return ans;
    }
};

/*
Alhamdulillah...
*/
