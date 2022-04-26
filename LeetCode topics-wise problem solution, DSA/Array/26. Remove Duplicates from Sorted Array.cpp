/*
 Problem link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/
 */

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++)
        {
            if(nums[i]==nums[j])
            {
                continue;
             }
            nums[++i]=nums[j];
        }
        return i+1;
    }
};

//Alhamdulillah...
/*
input :

[1,1,2]

output :

[1,2]
*/
