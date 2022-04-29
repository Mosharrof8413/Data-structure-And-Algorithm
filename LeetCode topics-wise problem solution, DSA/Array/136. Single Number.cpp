/*
Problem : https://leetcode.com/problems/single-number/
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans^=nums[i];
        }
        return ans;
    }
};

/*
input :
1 2 1 2 3

output :
3

*/

/*
Alhamdulillah...
*/
